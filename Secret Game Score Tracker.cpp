#include <iostream>
#include <string>

using namespace std;

class Game
{
private:
    int score;

public:
    void setScore(int score_value)
    {
        score = score_value;
    }

    int getScore()
    {
        return score;
    }
};

class Player : public Game
{
private:
    string name;

public:
    void setName(string name_value)
    {
        name = name_value;
    }

    void display()
    {
        cout << "----- Game Result -----" << endl
            << "Player: " << name << endl
            << "Score: " << getScore() << endl
            << "Level: ";

        if (getScore() >= 50)
        {
            cout << "Pro Zone" << endl;
        }
        else
        {
            cout << "*%$& Zone" << endl;
        }
    }
};

int main()
{
    Player player_obj;

    string input_name;
    int input_score;

    cout << "Enter Player Name: ";
    getline(cin, input_name);
    cout << "Enter Score: ";
    cin >> input_score;

    cout << endl << endl;

    player_obj.setName(input_name);
    player_obj.setScore(input_score);
    player_obj.display();

    return 0;
}
