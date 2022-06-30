#include<iostream>
using namespace std;
int main (){

    while(1){
        int n, i, j, k;
        int countNumber = 0;

        cin >> n;

        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                for(k=0; k<n; k++){
                    countNumber = countNumber + 1;
                }
            }
        }
        cout << "n = " << n << ", count = " << countNumber <<endl;
    }


    return 0;
}
