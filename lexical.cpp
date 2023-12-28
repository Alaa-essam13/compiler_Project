#include <bits/stdc++.h>
using namespace std;


vector<string> keyWord = {"auto", "break", "case", "char", "const", "continue", "default",
                     "do", "double", "else", "enum", "float", "for", "goto",
                     "if", "int", "long", "register", "return", "short", "signed",
                     "sizeof", "static", "struct", "switch", "typedef", "union",
                     "unsigned", "void", "volatile", "while","cin>>","cout<<","cin","cout"
                    };

vector<string> operators = {"+", "-", "*", "/", "=", "%","<",">"};

vector<string> digits = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

vector<string> specialCharacters = {"@", "!", "#", "$", "&", "(", ")", "{", "}","<<",">>","!"};

void display(string x)
{
    if (find(keyWord.begin(), keyWord.end(), x) != keyWord.end())
        cout << x << " \tkeyword\n";
    else if (find(operators.begin(), operators.end(), x) != operators.end())
        cout << x << " \toperator\n";
    else if (find(digits.begin(), digits.end(), x) != digits.end())
        cout << x << " \tnumber\n";
    else if (find(specialCharacters.begin(), specialCharacters.end(), x) != specialCharacters.end())
        cout << x << " \tspecial character\n";
    else if (x == ";")
        cout << x << " \tseparator\n";
    else if (isalpha(x[0]) || x[0] == '_')
        cout << x << " \tvalid identifier\n";
}

int main()
{
    cout << "Enter your line: \n";
    string line;
    getline(cin, line);

    vector<string> sentece;
    istringstream sub(line);
    do
    {
        string word;
        sub >> word;
        sentece.push_back(word);
    }
    while (sub);

    for (auto x : sentece)
        display(x);

    return 0;
}
