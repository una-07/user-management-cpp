#include "UserManager.h"


int main() {
UserManager manager;


manager.addUser(User("Ali", "ali@mail.com", "Admin"));
manager.addUser(User("Aruzhan", "aruzhan@mail.com", "User"));


manager.showUsers();


manager.updateUser("ali@mail.com", "Ali Khan", "SuperAdmin");


manager.removeUser("aruzhan@mail.com");


manager.showUsers();


return 0;
}
