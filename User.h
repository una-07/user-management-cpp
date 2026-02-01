#ifndef USER_H
#define USER_H


#include <string>


class User {
private:
std::string name;
std::string email;
std::string role;


public:
User(const std::string& n, const std::string& e, const std::string& r)
: name(n), email(e), role(r) {}


std::string getName() const { return name; }
std::string getEmail() const { return email; }
std::string getRole() const { return role; }


void setName(const std::string& n) { name = n; }
void setEmail(const std::string& e) { email = e; }
void setRole(const std::string& r) { role = r; }
};


#endif
