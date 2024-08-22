#include "login.h"

bool ValidateLogin(std::string input_username, std::string input_user_password, std::string username, std::string user_password)
{
  if (input_username == username && input_user_password == user_password)
  {
    return true;
  }

  return false;
}

void LoginInput()
{
  std::string username;
  std::string user_password;

  std::string inp_username, inp_user_password;

  std::cout << "Enter username:" << std::endl;
  std::getline(std::cin, username);

  std::cout << "Enter password:" << std::endl;
  std::getline(std::cin, user_password);

  std::string login_validation_message = (ValidateLogin(username, user_password, inp_username, inp_user_password) == true) ? "Valido" : "Invalido";

  std::cout << "El login es " << login_validation_message << std::endl;
}