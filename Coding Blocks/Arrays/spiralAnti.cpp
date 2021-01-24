#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
    int n, m;
    std::cin>>n;
    std::cin>>m;   
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    //Anticlockwise Spiral Print
    int startCol = 0;
    int endCol = m - 1;
    int startRow = 0;
    int endRow = n - 1;

    while(startRow <= endRow && startCol <= endCol)
    {
        //First col
        for(int i = startRow; i <= endRow; i++)
        {
            cout<<a[i][startCol]<<", ";
        } startCol++;
        //last row
        if(endRow > startRow)
        {
            for(int i = startCol; i <= endCol; i++)
            {
                cout<<a[endRow][i]<<", ";
            } endRow--;
        }
        //last col
        if(endCol > startCol)
        {
            for(int i = endRow; i >= startRow; i--)
            {
                cout<<a[i][endCol]<<", ";
            } endCol--;
        }
        //First row
        for(int i = endCol; i >= startCol; i--)
        {
            cout<<a[startRow][i]<<", ";
        } startRow++;
    }
    cout<<"END";
	return 0;
}