#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int k = n - 1;
    int arr[k];

    for (int j = 0; j < k; j++)
    {
        cin >> arr[j];
    }

    int arrcheck[n];
    for (int i = 0; i < n; i++)
    {
        arrcheck[i] = i + 1;
    }
    /*Wrong Approach*/
    // for (int i = 1; i <= k; i++)
    // {
    //     if (arrcheck[i] != arr[i])
    //     {
    //         cout << arrcheck[i];
    //     }
    // }

    /* Summision Approach*/
    long long int sum = (n*(n+1))/2;
    long long int actualSum=0;
    for(int i=0;i<k;i++){
        actualSum += arr[i];
    }
    cout<<sum-actualSum;




    return 0;
}
/*Boolean Approach*/
// bool found[n + 1] = {false};

// for(int i = 0; i<k; i++){
//     found[arr[i]] = true;
// }

// for(int i = 1; i <= n; i++){
//     if(!found[i]){
//         cout << i << endl;
//         break;
//     }
// }

