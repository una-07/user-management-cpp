#ifndef USER_MANAGER_H
#define USER_MANAGER_H


#include <vector>
#include <iostream>
#include "User.h"


class UserManager {
private:
std::vector<User> users;


int findUserIndexByEmail(const std::string& email) {
for (int i = 0; i < users.size(); i++) {
if (users[i].getEmail() == email) {
return i;
}
}
return -1;
}


public:
void addUser(const User& user) {
if (findUserIndexByEmail(user.getEmail()) == -1) {
users.push_back(user);
std::cout << "User added: " << user.getEmail() << std::endl;
}
}


void removeUser(const std::string& email) {
int index = findUserIndexByEmail(email);
if (index != -1) {
users.erase(users.begin() + index);
std::cout << "User removed: " << email << std::endl;
}
}


void updateUser(const std::string& email, const std::string& newName, const std::string& newRole) {
int index = findUserIndexByEmail(email);
if (index != -1) {
users[index].setName(newName);
users[index].setRole(newRole);
std::cout << "User updated: " << email << std::endl;
}
}


void showUsers() {
for (const auto& user : users) {
std::cout << "Name: " << user.getName()
<< ", Email: " << user.getEmail()
<< ", Role: " << user.getRole() << std::endl;
}
}
};


#endif
