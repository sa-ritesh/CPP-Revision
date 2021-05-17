#include <iostream>
#include <vector>
using namespace std;
int ans = INT_MAX;
int solve(int n, int *arr, int count, int* one, int*zero)
{
    if (count == 0)
    {
        return ans;
    }
    for(int i=0;i<one.size();i++){
       for(int j=0;j<zero.size();j++){
           count--;
           ans=max(ans,);
       }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> zero;
    vector<int> one;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            count++;
            zero.push_back(i);
        }
        if (arr[i] == 1)
        {
            one.push_back(i);
        }
    }
}