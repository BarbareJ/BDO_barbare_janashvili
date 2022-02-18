#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include<map>
using namespace std;
void myMerge(int array1[], int array2[], int len1, int len2){
    map<int, bool> myMap;
     
    
    for(int i = 0; i < len1; i++)
    myMap[array1[i]] = true;
     
    for(int j= 0;j < len2;j++)
    myMap[array2[j]] = true;
     
    
    for(auto k: myMap)
    cout<< k.first <<" ";
}
int main()
{
    vector<int> myVector1;

    string line1;
    getline(cin, line1);
    istringstream os1(line1);

    int i;
    while(os1 >> i)
    myVector1.push_back(i);
    
    vector<int> myVector2;

    string line2;
    getline(cin, line2);
    istringstream os2(line2);

    int j;
    while(os2 >> j)
    myVector2.push_back(j);
    int array1[myVector1.size()];
    int array2[myVector2.size()];
    for(int i=0;i<myVector1.size();i++)
    array1[i]=myVector1[i];
    for(int i=0;i<myVector2.size();i++)
    array2[i]=myVector2[i];
    
    int len1 = sizeof(array1)/sizeof(int);
    int len2= sizeof(array2)/sizeof(int);
     
  
    myMerge(array1, array2, len1, len2);
 
    
    return 0;
}
