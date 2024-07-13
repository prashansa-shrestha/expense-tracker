#pragma once

using namespace System;

public ref class User
{
public:
    property int UserID;
    property String^ Username;
    property String^ Email;
    property String^ PasswordHash;

    User(int id, String^ username, String^ email, String^ passwordHash)
        : UserID(id), Username(username), Email(email), PasswordHash(passwordHash) {}
};
