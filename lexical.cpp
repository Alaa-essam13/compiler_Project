#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> kw = {"auto", "break", "case", "char", "const", "continue", "default",
                     "do", "double", "else", "enum", "float", "for", "goto",
                     "if", "int", "long", "register", "return", "short", "signed",
                     "sizeof", "static", "struct", "switch", "typedef", "union",
                     "unsigned", "void", "volatile", "while","cin>>","cout<<","cin","cout"
                    };

vector<string> op = {"+", "-", "*", "/", "=", "%","<",">"};

vector<string> num = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

vector<string> sc = {"@", "!", "#", "$", "&", "(", ")", "{", "}", ";","<<",">>","!"};

void printout(string x)
{
    if (find(kw.begin(), kw.end(), x) != kw.end())
        cout << x << " \tkeyword\n";
    else if (find(op.begin(), op.end(), x) != op.end())
        cout << x << " \toperator\n";
    else if (find(num.begin(), num.end(), x) != num.end())
        cout << x << " \tnumber\n";
    else if (find(sc.begin(), sc.end(), x) != sc.end())
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

    vector<string> v;
    istringstream iss(line);
    do
    {
        string word;
        iss >> word;
        v.push_back(word);
    }
    while (iss);

    for (auto x : v)
        printout(x);

    return 0;
}
