#include <iostream>
using namespace std;
int max_value(const int array[][4], int n, int &row, int &col);

int main(){
    int row=1, col=1;
    int a[3][4]={{1,3,6,7},{2,4,6,8},{15,17,34,12}};
    cout<<max_value(a, 3, row, col)<<'\n';
    cout<<"row:"<<row<<" column:"<<col;
    return 0;
}
    int max_value(const int array[][4], int n, int &row, int &col){
    int i, j, max = array[0][0];
    for(i=0;i<n;i++)
        for(j=0;j<4;j++)
            if(array[i][j]>max){
                max=array[i][j];
                row=i+1;
                col=j+1;
            }
    return (max);
}