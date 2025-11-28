#include <iostream>
#include <iomanip>
using namespace std;

#define ll long long

int ma101[] = {65,66,66,65,68,67,67,65,66,68,67,67,65,66,68};
int ma102[] = {65,67,67,65,66,67,68,68,66,66,67,68,68,66,66};

int main(){
    int t; cin >> t;
    while(t--){
        int made; cin >> made;
        char c;
        double diem = 0;
        int len = 15;

        if(made == 101){
            for(int i = 0; i < len; i++){
                cin >> c;
                if((int)c == ma101[i]) diem += (double)2/3;
            }
        }else if(made == 102){
            for(int i = 0; i < len; i++){
                cin >> c;
                if((int)c == ma102[i]) diem += (double)2/3;
            }
        }

        cout << fixed << setprecision(2) << diem << endl;
    }
    return 0;
}
