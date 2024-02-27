#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc,char* argv[]){
    double sum = 0,ans;
    if(argc == 1){
        cout << "Please input numbers to find average.\n";
    }else{
        for(int i = 1;i < argc; i++){
            sum += atof(argv[i]);
            ans = sum / (argc-1);
        }
            cout << "---------------------------------\n";
            cout << "Average of " << argc-1 << " numbers = " << ans << endl;
            cout << "---------------------------------";
    }
    return 0;
}
