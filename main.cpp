#include <bits/stdc++.h>
#define S string
#define I int
using namespace std;
vector<S> atoms;
map<S,S> splited_atoms;
void split(S line){
    I endpoint=line.size();
    for(I i=line.size();i>0;i--){
        if(line [i]==','){
            endpoint=i;
            break;
        }
    }
    splited_atoms[line.substr(0,endpoint)]=line.substr(endpoint,line.size());
}
int main() {
    ifstream inputFile("C:\\Users\\LENOVO\\Desktop\\compiler project\\data.txt");
    if (!inputFile.is_open()) {
        cerr << "Unable to open the file." << std::endl;
        return 1;
    }
    string line;
    while (getline(inputFile, line)) {
       atoms.push_back(line);
    }
    inputFile.close();
    //(Mul,a,b,   T1)
    for(auto &atms:atoms)
        split(atms);

    for(auto &atom: splited_atoms)
        cout<<atom.first<<atom.second<<endl;
}
