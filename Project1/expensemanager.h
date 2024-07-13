#pragma once
#include "dbclass.h"
#include "expenseobject.h"
/*#include "User.h"*/

public ref class ExpenseManager
{
private:
    DatabaseManager^ dbManager;
   /* User^ currentUser;*/

public:
    ExpenseManager(DatabaseManager^ db) : dbManager(db) {}

    /*void setCurrentUser(User^ user) { currentUser = user; }*/

    bool addExpense(Expense^ expense)
    {
        try
        {
            dbManager->connect();
            String^ query = "INSERT INTO Expenses (UserID, Date, Amount, Description, CategoryID) VALUES (@UserID, @Date, @Amount, @Description, @CategoryID)";
            SqlCommand^ cmd = gcnew SqlCommand(query, dbManager->getConnection());

            cmd->Parameters->AddWithValue("@UserID", currentUser->UserID);
            cmd->Parameters->AddWithValue("@Date", expense->Date);
            cmd->Parameters->AddWithValue("@Amount", expense->Amount);
            cmd->Parameters->AddWithValue("@Description", expense->Description);
            cmd->Parameters->AddWithValue("@CategoryID", expense->CategoryID);

            int result = dbManager->executeNonQuery(cmd);
            return (result > 0);
        }
        catch (Exception^ ex)
        {
            // Handle or log the exception
            return false;
        }
        finally
        {
            dbManager->disconnect();
        }
    }
    /*

    List<Expense^>^ getExpenses()
    {
        List<Expense^>^ expenses = gcnew List<Expense^>();
        try
        {
            dbManager->connect();
            String^ query = "SELECT * FROM Expenses WHERE UserID = @UserID";
            SqlCommand^ cmd = gcnew SqlCommand(query, dbManager->getConnection());
            cmd->Parameters->AddWithValue("@UserID", currentUser->UserID);

            SqlDataReader^ reader = dbManager->executeQuery(cmd);
            while (reader->Read())
            {
                Expense^ expense = gcnew Expense();
                expense->ExpenseID = safe_cast<int>(reader["ExpenseID"]);
                expense->Date = safe_cast<DateTime>(reader["Date"]);
                expense->Amount = safe_cast<double>(reader["Amount"]);
                expense->Description = reader["Description"]->ToString();
                expense->CategoryID = safe_cast<int>(reader["CategoryID"]);

                expenses->Add(expense);
            }
            reader->Close();
        }
        catch (Exception^ ex)
        {
            // Handle or log the exception
        }
        finally
        {
            dbManager->disconnect();
        }
        return expenses;
    }
    */

    /*
    bool updateExpense(Expense^ expense)
    {
        try
        {
            dbManager->connect();
            String^ query = "UPDATE Expenses SET Date = @Date, Amount = @Amount, Description = @Description, CategoryID = @CategoryID WHERE ExpenseID = @ExpenseID AND UserID = @UserID";
            SqlCommand^ cmd = gcnew SqlCommand(query, dbManager->getConnection());

            cmd->Parameters->AddWithValue("@ExpenseID", expense->ExpenseID);
            cmd->Parameters->AddWithValue("@UserID", currentUser->UserID);
            cmd->Parameters->AddWithValue("@Date", expense->Date);
            cmd->Parameters->AddWithValue("@Amount", expense->Amount);
            cmd->Parameters->AddWithValue("@Description", expense->Description);
            cmd->Parameters->AddWithValue("@CategoryID", expense->CategoryID);

            int result = dbManager->executeNonQuery(cmd);
            return (result > 0);
        }
        catch (Exception^ ex)
        {
            // Handle or log the exception
            return false;
        }
        finally
        {
            dbManager->disconnect();
        }
    }
    */

    bool deleteExpense(int expenseId)
    {
        try
        {
            dbManager->connect();
            String^ query = "DELETE FROM Expenses WHERE ExpenseID = @ExpenseID AND UserID = @UserID";
            SqlCommand^ cmd = gcnew SqlCommand(query, dbManager->getConnection());

            cmd->Parameters->AddWithValue("@ExpenseID", expenseId);
            cmd->Parameters->AddWithValue("@UserID", currentUser->UserID);

            int result = dbManager->executeNonQuery(cmd);
            return (result > 0);
        }
        catch (Exception^ ex)
        {
            // Handle or log the exception
            return false;
        }
        finally
        {
            dbManager->disconnect();
        }
    }
};
