#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

void findMin(int arr[], int size){
    cout << "Enter the size of the array: ";

    cin >> size;
    for(int i = 0;i<size;i++){
        cin >> arr[i];
    }
    int min = arr[0];
    for(int i = 1;i<size;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "The smallest value is: " << min << endl;
    // Is it working properly?
}

int main(){
    
// Tutorial 1
   // Ex 1
   /*

   int a, b;
    cout << "Enter the coefficients: ";
    cin >> a >> b;
    float c;
    if(b < 0){
        cout<<"The solution of the linear equation " << a << "x " << b << " = 0 is: ";
        c = (float)(-b) / a;
    }

    else{
        cout<<"The solution of the linear equation " << a << "x + " << b << " = 0 is: ";
        c = (float)(-b) / a;
    }
    

    cout << c << endl;
    */

    // Ex 2
    /*
    int n;
    int arr[5];
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    int sum = arr[0];
    int max = arr[0];
    for(int i = 1; i < 5; i++){
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
        
    }
    float avg = (float)sum / 5;
    cout << "The max value is: " << max << endl;
    cout << "The average value is: " << avg << endl;
    */

    // Ex 3
    /*
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int size = str.size();
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32; // Convert to lowercase
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32; // Convert to uppercase
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            sum += (str[i] - '0'); 
        }
    }
    cout << "The converted string is: " << str << endl;
    cout << "The sum of the digits is: " << sum << endl;
    */
   // Ex 4
   /*
   
    int n;
    cout<< "Enter a number: ";
    cin >> n;
    int arr[1000];
    int i = 0;
    while(n>0){
        arr[i] = n % 10; 
        n /= 10;
        i++;

    }
    if(arr[0] != 0) cout<<arr[0];
    for(int j = 1; j < i; j++){
        
        cout << arr[j];
    }
    */
// Tutorial 2
    // Ex 1

    /*
    int n;
    int arr[1000];
    findMin(arr, n);
    */

    // Ex 2
}
