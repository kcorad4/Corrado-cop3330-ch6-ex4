
//COP 3330 KYLE CORRADO


using namespace std;

int main() {
    vector <string> names;
    string name;
    vector <int> scores;
    int score;
    cout << "Please write a player's name and the player's score: \n";
    while (cin >> name >> score) {
        names.push_back(name);
        scores.push_back(score);
        cin.ignore();
    }       
    cin.clear(); 
    for (size_t j = 0; j < scores.size(); j++) {
        for (size_t p = 0; p < scores.size(); p++) {
            if (names[j] == names[p] && j != p) {
                cout << "Error! You have reiterated the name: " << names[j] << "\n";
                system("pause");
                return 1;
            }
        }
    }
    cout << "Please insert a name to see it's score:\n";
    cin >> s;
    for (size_t d = 0; d < scores.size(); d++) {
        if (s == names[d]) { 
            cout << names[d] << "'s score is: " << scores[d] << "\n";
        }
    }
    system("pause");
}
