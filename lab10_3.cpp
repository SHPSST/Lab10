#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;



int main(){
    const int X=100;
    int count = 0;
    double sum = 0,mean = 0,std = 0,STD = 0,x[X];
    string textline;
    ifstream source;
    source.open("C:\\Users\\MSI_GF63\\Desktop\\Compro\\Lab10\\score.txt");
    while(getline(source,textline)){
        x[count]=stod(textline);
        sum += stod(textline);
        count++;
    }
    mean=sum/count;
    for(int i=0;i<count;i++){
       std += pow(x[i]-mean,2);
    }
    STD = sqrt(std/count);
    cout << "Number of data = "<< count << endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean << endl;
    cout << "Standard deviation = " << STD;
    source.close();
    return 0;
}
