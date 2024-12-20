#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int count = 0;                
    float sum = 0.0f;             
    float sum_of_square = 0.0f;   
    string textline;            
    ifstream source("score.txt");

    while (getline(source, textline)) {
        float data = stof(textline); 
        sum += data;            
        sum_of_square += data * data;
        count++;                     
    }

    float mean = sum / count;

    float variance = (sum_of_square / count) - (mean * mean);
    float std_dev = sqrt(variance); 

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3) << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << std_dev << "\n";

    source.close();

    return 0;
}
