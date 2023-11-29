#include <iostream>
#include <vector>

using namespace std;

class User
{
public:
    string name;
    int age;
    string email;

    User(string name, int age, string email)
    {
        this->name = name;
        this->age = age;
        this->email = email;
    }

    ~User()
    {
        cout << "\nDestruction de l'utilisateur";
    };

    string getName() const
    {
        return this->name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    int getAge() const
    {

        return this->age;
    }

    void setAge(int age)
    {
        if (age >= 0)
        {
            this->age = age;
        }
    }
    string getEmail() const
    {
        return this->email;
    }

    void setEmail(string email)
    {
        this->email = email;
    }
};

int main()
{

    User *user1 = new User("Florent", 30, "test@gmail.com");
    cout << "Nom de l'utilisateur : " << user1->getName() << endl;
    cout << "Age de l'utilisateur : " << user1->getAge() << endl;
    cout << "Email de l'utilisateur : " << user1->getEmail() << endl;

    user1->setName("Test");
    cout << "\nNom de l'utilisateur : " << user1->getName() << endl;

    user1->setAge(20);
    cout << "Age de l'utilisateur : " << user1->getAge() << endl;

    user1->setEmail("Florent@gmail.com");
    cout << "Email de l'utilisateur : " << user1->getEmail() << endl;

    delete user1;

    return 0;
}