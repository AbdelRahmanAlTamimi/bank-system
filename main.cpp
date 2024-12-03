#include <iostream>
#include "clsBankClient.h"
#include "clsInputValidate.h"

using namespace std;


void ReadClientInfo(clsBankClient& Client)
{
    string inputStr;
    float inputFloat;

    cout << "\nEnter FirstName: ";
    inputStr = clsInputValidate::ReadString();
    Client.SetFirstName(inputStr);

    cout << "\nEnter LastName: ";
    inputStr = clsInputValidate::ReadString();
    Client.SetLastName(inputStr);

    cout << "\nEnter Email: ";
    inputStr = clsInputValidate::ReadString();
    Client.SetEmail(inputStr);

    cout << "\nEnter Phone: ";
    inputStr = clsInputValidate::ReadString();
    Client.SetPhone(inputStr);

    cout << "\nEnter PinCode: ";
    inputStr = clsInputValidate::ReadString();
    Client.SetPinCode(inputStr);

    cout << "\nEnter Account Balance: ";
    inputFloat = clsInputValidate::ReadFloatNumber();
    Client.SetAccountBalance(inputFloat);
}

// void UpdateClient()
// {
//     string AccountNumber = "";

//     cout << "\nPlease Enter client Account Number: ";
//     AccountNumber = clsInputValidate::ReadString();

//     while (!clsBankClient::IsClientExist(AccountNumber))
//     {
//         cout << "\nAccount number is not found, choose another one: ";
//         AccountNumber = clsInputValidate::ReadString();
//     }

//     clsBankClient Client1 = clsBankClient::Find(AccountNumber);
//     Client1.Print();

//     cout << "\n\nUpdate Client Info:";
//     cout << "\n____________________\n";


//     ReadClientInfo(Client1);

//     clsBankClient::enSaveResults SaveResult;

//     SaveResult = Client1.Save();

//     switch (SaveResult)
//     {
//         case  clsBankClient::enSaveResults::svSucceeded:
//         {
//             cout << "\nAccount Updated Successfully :-)\n";
//             Client1.Print();
//             break;
//         }
//         case clsBankClient::enSaveResults::svFaildEmptyObject:
//         {
//             cout << "\nError account was not saved because it's Empty";
//             break;

//         }

//     }
// }



void AddNewClient()
{
    string AccountNumber = "";

    cout << "\nPlease Enter Account Number: ";
    AccountNumber = clsInputValidate::ReadString();
    while (clsBankClient::IsClientExist(AccountNumber))
    {
        cout << "\nAccount Number Is Already Used, Choose another one: ";
        AccountNumber = clsInputValidate::ReadString();
    }

    clsBankClient NewClient = clsBankClient::GetAddNewClientObject(AccountNumber);

    ReadClientInfo(NewClient);

    clsBankClient::enSaveResults SaveResult;

    SaveResult = NewClient.Save();

    switch (SaveResult)
    {
    case clsBankClient::enSaveResults::svSucceeded:
    {
        cout << "\nAccount Addeded Successfully :-)\n";
        NewClient.Print();
        break;
    }
    case clsBankClient::enSaveResults::svFaildEmptyObject:
    {
        cout << "\nError account was not saved because it's Empty";
        break;
    }
    case clsBankClient::enSaveResults::svFaildAccountNumberExists:
    {
        cout << "\nError account was not saved because account number is used!\n";
        break;
    }
    }
}

int main()
{
    AddNewClient();
    // UpdateClient();
    // clsBankClient Client1 = clsBankClient::Find("A101");
    // if (!Client1.IsEmpty())
    // {
    //     cout << "\nClient Found :-)\n";
    // }
    // else
    // {
    //     cout << "\nClient Was not Found :-(\n";
    // }
    //
    // Client1.Print();
    //
    // clsBankClient Client2 = clsBankClient::Find("A1001","1234");
    // if (!Client2.IsEmpty())
    // {
    //     cout << "\nClient Found :-)\n";
    // }
    // else
    // {
    //     cout << "\nClient Was not Found :-(\n";
    // }
    // Client2.Print();
    //
    // cout << "\nIs Client Exist? " << clsBankClient::IsClientExist("A101");

    return 0;
}