#include <iostream>

using namespace std;

int NB_SCORE = 3;

double getScoreAverage(const double scoreList[])
{

    int i = 0;
    double scoreSum = 0.0;

    while (i < NB_SCORE)
    {
        scoreSum += scoreList[i];
        ++i;
    }

    return scoreSum / (double)NB_SCORE;
}

double getHigherScore(const double scoreList[])
{

    double higherScore = scoreList[0];
    int i = 1;

    do
    {
        auto score = scoreList[i];
        if (score > higherScore)
        {
            higherScore = score;
        }
        ++i;
    } while (i < NB_SCORE);

    return higherScore;
}

void showAverageScore(const double scoreList[])
{
    auto scoreAverage = getScoreAverage(scoreList);
    cout << "La moyenne est : " << scoreAverage << endl;
}

void showHigherScore(const double scoreList[])
{

    auto higherScore = getHigherScore(scoreList);
    cout << "La meilleure note est : " << higherScore << endl;
}

void setScoreList(double scoreList[])
{

    for (int i = 0; i < NB_SCORE; i++)
    {
        cout << "Entrez la note numero " << (i + 1) << ": " << endl;
        cin >> scoreList[i];
    }
}

int main()
{
    bool stopLoop = false;
    double scoreList[NB_SCORE];
    int userReturn = 0;

    while (!stopLoop)
    {
        cout << "\nVoulez vous: \n";
        cout << "\t - 1 = Renseigner " << NB_SCORE << " note" << ((NB_SCORE > 1) ? "s" : "") << endl;
        cout << "\t - 2 = Voir la moyenne\n";
        cout << "\t - 3 = Voir la note la plus élevée\n";
        cout << "\t - 4 = Quitter \n";

        cout << "Entrez votre choix : ";
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