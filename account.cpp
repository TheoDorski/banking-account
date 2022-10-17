#include <string>

#include "account.h"

Account::Account(const std::string& kFullName, const std::string& kUsername,
                 const std::string& kPassportId, const std::string& kEmail,
                 const std::string& kDob, const int& kAccNumber,
                 const double& kBalance)
{
  full_name = kFullName;
  username = kUsername;
  passport_id = kPassportId;
  email = kEmail;
  dob = kDob;
  acc_number = kAccNumber;
  balance = kBalance;
}

Account::~Account()
{
}

void Account::SetFullName(const std::string& kFullName)
{
  full_name = kFullName;
}

std::string Account::GetFullName() const
{
  return full_name;
}

void Account::SetUsername(const std::string& kUsername)
{
  username = kUsername;
}

std::string Account::GetUsername() const
{
  return username;
}

void Account::SetPassportId(const std::string& kPassportId)
{
  passport_id = kPassportId;
}

std::string Account::GetPassportId() const
{
  return passport_id;
}

void Account::SetEmail(const std::string& kEmail)
{
  email = kEmail;
}

std::string Account::GetEmail() const
{
  return email;
}

void Account::SetDob(const std::string& kDob)
{
  dob = kDob;
}

std::string Account::GetDob() const
{
  return dob;
}

void Account::SetAccNumber(const int& kAccNumber)
{
  acc_number = kAccNumber;
}

int Account::GetAccNumber() const
{
  return acc_number;
}

void Account::SetBalance(const double& kBalance)
{
  balance = kBalance;
}

double Account::GetBalance() const
{
  return balance;
}
