#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
bool isCode(vector<int> tmp, int pos,vector<int> myVector){
    for(int i=0;i<myVector.size()&& i!=pos;i++){
        int tmp2=0;
        for(int j=0;j<tmp.size();j++){
            if(myVector[i+j]!=tmp[j]) break;
            tmp2++;
            if(tmp2==tmp.size()){
                
                return true;
            }
        }
    }
    return false;
}
bool solution(){
     int k;
    vector<int> myVector;

    string line;
    getline(cin, line);
    istringstream os(line);

    int i;
    while(os >> i)
    myVector.push_back(i);
    cin>> k;
    
    for(int i=0;i<myVector.size();i++){
        vector<int> tmp;
        for(int j=0;j<k;j++){
           
            tmp.push_back(myVector[i+j]);
            
        }
        if(isCode(tmp,i,myVector) )return true;
    }
    return false;
    
