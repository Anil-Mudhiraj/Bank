#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;


class User{
    public:
     string bank_account_no ;
     string first_name ;
     string last_name ;
     string phone_number;
     string address;
     User(string _bank_account_no,string _first_name,string _last_name,string _phone_number,string _address ) 
        : bank_account_no(_bank_account_no),first_name(_first_name),last_name(_last_name),
          phone_number(_phone_number),address(_address){
            cout<<"User has succesfully created"<<endl;
        } 
    //  User(const User & user){
    //    bank_account_no = user.bank_account_no;
    //    first_name = user.first_name;
    //    last_name = user.last_name;
    //    phone_number = user.phone_number;
    //    address = user.address;
    //  } 
    void userDisplay(){
      cout<<"Bank Account no is  : "<<bank_account_no<<endl;
      cout<<"First name is  : "<<first_name<<endl;
      cout<<"Last name is  : "<<last_name<<endl;
      cout<<"Phone number is  : "<<phone_number<<endl;
      cout<<"Address : "<<address<<endl;

    }      
};
class Bank{
  private:
    vector<User>users;//array of users of type user
  public:
    Bank(){cout<<"Bank has initialized"<<endl;}
    void addUser(const User& user){//add user to bank 
        users.push_back(user);
    }
   User getUser(){
     return users.back();
   }
};
int main(){
    Bank bank;
    User u1("1234","anil","gunda","9618454029","peddapalli");
    bank.addUser(u1);
    u1.userDisplay();
    return 0;
}