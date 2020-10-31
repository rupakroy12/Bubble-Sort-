// Bubble sort visualization
// Code written by : Rupak Roy
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    //enter array size
    cout << "Enter array size : ";                                          
    cin >> n;
    int arr[n];

    //enter array elements
    cout << "Enter array elements ( comma-separated integer values only ) : \n";
    for(int i = 0; i<n ;i++)
    {
        cin >> arr[i];
    }


    for(int i = 0; i<n; i++)
    {
        //priting array with  i value
        printf("\ni = %d  : ", i );
        for(int i = 0; i<n;i++)
        {
            cout << arr[i] << " ";
        }


        // main loop for bubble sorting 
        for (int j = 0 ; j < n - i-1; j++)
        { 
            cout << endl;
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }

            // printing array after each jth iteration            
            printf("j = %d  : ", j);
            for(int i = 0; i<n;i++)
            {
                cout << arr[i] << " ";
            }

        }
        cout<<"\n************************************************************************************************************************************************************************************************************************************"<<endl;
        
    }

    //printing the sorted array
    cout<<"\n<Sorted array> : ";
    for(int i = 0; i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout <<" \n ************ ";
}