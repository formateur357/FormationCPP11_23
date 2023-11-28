#include <iostream>

using namespace std;

int NB_NOTE = 3;

double getScoreAverage(double scoreList[])
{

    int i = 0;
    double scoreSum = 0;

    while (i < NB_NOTE)
    {
        scoreSum += scoreList[i];
        ++i;
    }

    return scoreSum / (double)NB_NOTE;
}

double getHigherScore(double scoreList[])
{

    int i = 0;
    double higherScore = 0;

    while (i < NB_NOTE)
    {
        auto score = scoreList[i];
        if (score > higherScore)
        {
            higherScore = score;
        }
        ++i;
    }

    return higherScore;
}

void showAverageScore(double scoreList[])
{

    auto scoreAverage = getScoreAverage(scoreList);
    cout << "La moyenne est : " << scoreAverage << endl;
}

void showHigherScore(double scoreList[])
{

    auto higherScore = getHigherScore(scoreList);
    cout << "La meilleure note est : " << higherScore << endl;
}

void setScoreList(double scoreList[])
{

    for (int i = 0; i < NB_NOTE; i++)
    {
        cout << "Entrez la note numero " << (i + 1) << ": " << endl;
        cin >> scoreList[i];
    }
}
int main()
{
    bool stopLoop = false;
    double scoreList[NB_NOTE];

    while (!stopLoop)
    {
        cout << "\nVoulez vous: \n";
        cout << "\t - 1 = Renseigner " << NB_NOTE << " note" << ((NB_NOTE > 1) ? "s" : "") << endl;
        cout << "\t - 2 = Voir la moyenne\n";
        cout << "\t - 3 = Voir la note la plus élevée\n";

        int userReturn = 0;
        cin >> userReturn;

        if (userReturn == 1)
        {
            setScoreList(scoreList);
        }
        else if (userReturn == 2)
        {
            showAverageScore(scoreList);
        }
        else if (userReturn == 3)
        {
            showHigherScore(scoreList);
        }
        else
        {
            cout << "Je n'ai pas compris votre reponse\n";
            stopLoop = true;
        }
    }

    return 0;
}