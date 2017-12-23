#include<iostream>
using namespace std;
int main()
{
    int i, c=0, a[100], b[100], sum[100], n;
    cout << "\t <----- Welcome ------>" << endl;
    cout << "\t Remember you should input as digit for a number!" << endl;
    cout << "\t How many digits in your number:";
    cin >> n;
    cout << "\t Enter " << n << " digits for first number."<< endl;

    for(i=0; i<n; i++){
        cout << " \t -->";

        cin >> a[i];
    }

    cout << "\t Enter " << n << " digits for second number." << endl;
    for(i=0; i<n; i++){
        cout << " \t -->" ;
        cin >> b[i];
    }

    // addition operation
    for(i=n-1; i>=0; i--){
        sum[i]=a[i] + b[i] + c;
        if(i==0){
                sum[i]=sum[i];

        }
        else if(sum[i]>=10){
            c=sum[i]/10;
            sum[i]=sum[i]%10;
        }
        else
            c=0;
    }
    // print the sum result of two number

    cout << "\t The sum of entered number: ";
    for(i=0; i<n; i++){
        cout << a[i];
    }
    cout << " and ";

    for(i=0; i<n; i++){
        cout << b[i];
    }
    cout << " is ";
    for(i=0; i<n; i++){
        cout << sum[i];

    }
    cout << "\n \t <----- Thank You ------>";
    return 0;
}
