#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "account.h"

void ShowInfo(const Account& kAccount)
{
  std::cout << "Full name: " << kAccount.GetFullName() << std::endl;
  std::cout << "Username: " << kAccount.GetUsername() << std::endl;
  std::cout << "Passport ID: " << kAccount.GetPassportId() << std::endl;
  std::cout << "Email: " << kAccount.GetEmail() << std::endl;
  std::cout << "Date of birth: " << kAccount.GetDob() << std::endl;
  std::cout << "Account number: " << kAccount.GetAccNumber() << std::endl;
  std::cout << "Current Balance: $" << kAccount.GetBalance() << std::endl;
}

std::string CreateUsername(const std::string& full_name)
{
  std::string username {};
  for (const auto& c : full_name) {
    if (c != ' ') username.push_back(static_cast<char>(tolower(c)));
  }

  return username;
}

Account OpenAccount(void)
{
  std::string full_name {}, username {}, passport_id {}, email {}, dob {};
  int acc_number = rand();
  double balance {50000};

  std::cout << "Welcome to our bank, now we will open ";
  std::cout << "a new bank account for you" << std::endl;
  std::cout << "Please enter your full name: ";
  std::getline(std::cin, full_name);
  username = CreateUsername(full_name);

  std::cout << "Please enter your passport id: ";
  std::cin >> passport_id;

  std::cout << "Please enter your email (optional): ";
  std::cin >> email;

  std::cout << "Please enter your date of birth (dd/mm/yyyy): ";
  std::cin >> dob;

  Account account {full_name, username, passport_id,
                   email, dob, acc_number, balance};

  return account; 
}

int main(int argc, char** argv)
{
  Account account = OpenAccount();
  ShowInfo(account);

  return 0;
}
