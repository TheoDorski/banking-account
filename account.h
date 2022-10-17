#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account
{
private:
  std::string full_name;
  std::string username;
  std::string passport_id;
  std::string email;
  std::string dob;
  int acc_number;
  double balance;
public:
  Account(const std::string& kFullName, const std::string& kUsername,
          const std::string& kPassportId, const std::string& kEmail,
          const std::string& kDob, const int& kAccNumber,
          const double& kBalance);
  ~Account();
  void SetFullName(const std::string& kFullName);
  std::string GetFullName() const;

  void SetUsername(const std::string& kUsername);
  std::string GetUsername() const;

  void SetPassportId(const std::string& kPassportId);
  std::string GetPassportId() const;

  void SetEmail(const std::string& kEmail);
  std::string GetEmail() const;

  void SetDob(const std::string& kDob);
  std::string GetDob() const;

  void SetAccNumber(const int& kAccNumber);
  int GetAccNumber() const;

  void SetBalance(const double& kBalance);
  double GetBalance() const;
};

#endif // account_h
