#pragma once

using namespace System;

public ref class Expense
{
public:
    int ExpenseID;
    DateTime Date;
    double Amount;
    String^ Description;
    int CategoryID;

    Expense() {}

    Expense(int expenseID, DateTime date, double amount, String^ description, int categoryID)
    {
        this->ExpenseID = expenseID;
        this->Date = date;
        this->Amount = amount;
        this->Description = description;
        this->CategoryID = categoryID;
    }
};
