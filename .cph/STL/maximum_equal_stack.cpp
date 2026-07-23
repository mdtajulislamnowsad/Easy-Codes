#include <bits/stdc++.h>
using namespace std;

int getsum(stack<int> st){
    int sum = 0;
    while(!st.empty()){
        sum = sum + st.top();
        st.pop();
    }
    return sum;
}

int maxSum(stack<int> &st1, stack<int> &st2, stack<int> &st3) {
    int sum1 = getsum(st1);
    int sum2 = getsum(st2);
    int sum3 = getsum(st3);

    while(true){
        if(sum1 == sum2 && sum2 == sum3)
            break;
        
        else if(sum1 >= sum2 && sum1 >= sum3){
            sum1 -= st1.top();
            st1.pop();
        }

        else if(sum2 >= sum1 && sum2 >= sum3){
            sum2 -= st2.top();
            st2.pop();
        }

        else if(sum3 >= sum2 && sum3 >= sum1){
            sum3 -= st3.top();
            st3.pop();
        }
    }

    return sum1;
}

int main() {
    stack<int> st1, st2, st3;

    int arr1[] = {1, 1, 1, 2, 3};
    for (int x : arr1) st1.push(x);

    int arr2[] = {5, 8};
    for (int x : arr2) st2.push(x);

    int arr3[] = {1, 4, 1, 1};
    for (int x : arr3) st3.push(x);

    int result = maxSum(st1, st2, st3);

    cout << "Maximum Equal Sum: " << result << endl;

    return 0;
}