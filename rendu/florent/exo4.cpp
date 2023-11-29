#include <iostream>
#include <vector>

using namespace std;

const int NB_SCORE = 3;

struct Student
{
    string name;
    int age;
    vector<double> scoreList;
};

Student createStudent()
{
    string studentName;
    int studentAge;

    cout << "\nEntrez le nom de l'etudiant : ";
    cin >> studentName;

    cout << "\nEntrez l'age de l'etudiant : ";
    cin >> studentAge;

    vector<double> scoreList;
    double score;
    for (int i = 0; i < NB_SCORE; i++)
    {
        cout << "Entrez la note de l'etudiant " << i + 1 << ": ";
        cin >> score;

        scoreList.push_back(score);
    }

    Student student = {
        studentName,
        studentAge,
        scoreList};

    return student;
}

double getAverageScore(const vector<double> &scores)
{
    double sum = 0.0;
    int i = 0;

    while (i < scores.size())
        sum += scores[i++];

    return sum / scores.size();
}

void showAverageScore(const Student &student)
{
    double scoreSum = 0.0;

    scoreSum = getAverageScore(student.scoreList);

    cout << "\nLa moyenne est de : " << scoreSum << endl;
}

void showAllInfo(const Student &student)
{

    cout << "\nEtudiant ";
    cout << "\n\t- Nom : " << student.name;
    cout << "\n\t- Age : " << student.age;
    cout << "\n\t- Notes : ";

    int i = 0;
    while (i < student.scoreList.size())
        cout << student.scoreList[i++] << ", ";
}

int main()
{
    bool stopLoop = false;
    int userReturn = 0;

    Student student;

    while (!stopLoop)
    {
        cout << "\nVoulez vous: \n";
        cout << "\t - 1 = Creé un nouvel etudiant" << endl;
        cout << "\t - 2 = Voir les moyennes\n";
        cout << "\t - 3 = Voir toutes les informations \n";
        cout << "\t - 4 = Quitter \n";

        cout << "Entrez votre choix : ";
        cin >> userReturn;

        if (userReturn == 1)
        {
            student = createStudent();
        }
        else if (userReturn == 2)
        {
            showAverageScore(student);
        }
        else if (userReturn == 3)
        {
            showAllInfo(student);
        }
        else if (userReturn == 4)
        {
            stopLoop = true;
        }
        else
        {
            cout << "Je n'ai pas compris votre reponse\n";
        }
    }
    return 0;
}