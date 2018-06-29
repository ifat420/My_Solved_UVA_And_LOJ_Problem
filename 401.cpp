//Allah is Almighty //
#include<bits/stdc++.h>
using namespace std;

string mirrorString(string str1){
    string str2 = str1;

    for(int i = 0; i < str1.length();i++){
        if(str1[i] == 'A'){
            str2[i] = 'A';
        } else if(str1[i] == 'E') {
            str2[i] = '3';
        } else if(str1[i] == 'H'){
            str2[i] == 'H';
        } else if(str1[i] == 'I'){
            str2[i] = 'I';
        } else if(str1[i] == 'J'){
            str2[i] = 'L';
        } else if(str1[i] == 'L'){
            str2[i] = 'J';
        } else if(str1[i] == 'M'){
            str2[i] = 'M';
        } else if(str1[i] == 'O'){
            str2[i] = 'O';
        } else if(str1[i] == 'S'){
            str2[i] = '2';
        } else if(str1[i] == 'T'){
            str2[i] = 'T';
        } else if(str1[i] == 'U'){
            str2[i] = 'U';
        } else if(str1[i] == 'V'){
            str2[i] == 'V';
        } else if(str1[i] == 'W'){
            str2[i] = 'W';
        } else if(str1[i] == 'X'){
            str2[i] = 'X';
        } else if(str1[i] == 'Y'){
            str2[i] = 'Y';
        } else if(str1[i] == 'Z'){
            str2[i] = '5';
        } else if(str1[i] == '1'){
            str2[i] = '1';
        } else if(str1[i] == '2'){
            str2[i] = 'S';
        } else if(str1[i] == '3'){
            str2[i] = 'E';
        } else if(str1[i] == '5'){
            str2[i] = 'Z';
        } else if(str1[i] == '8'){
            str2[i] = '8';
        } else{
            str2[i] = '$';
        }
    }
   return str2;
}

int main()
{
    string input, output, anOutput,anInput;

    while(cin >> input){
        output = mirrorString(input);
        anOutput = output;
        anInput = input;
        reverse(anInput.begin(),anInput.end());
        reverse(anOutput.begin(),anOutput.end());
        if(input == output){
            cout << input << " -- is a mirrored palindrome.\n\n";
        } else if(input == anOutput){
            cout << input << " -- is a mirrored string.\n\n";
        } else if(input == anInput){
            cout << input << " -- is a regular palindrome\n\n";
        } else{
            cout << input << " -- is not a palindrome.\n\n";
        }
    }
    return 0;

}
