#include <bits/stdc++.h>
using namespace std;

//https://www.hackerrank.com/challenges/drawing-book/problem?isFullScreen=true

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p) {
    int minpage = 0;
    int m1, m2;
    m1 = m2 = 0;
    
    for(int i = 1; i <= n; i += 2){
        if(i < p){
            
            if(i+1 == p){
            m1++;
            break;
            }
            
            m1++;
        }
        
        else if(i >= p){
            break;
        }
    }
    
    for(int j = n; j >= 1; j -= 2){
        if(j > p){
            
            if(j-1 == p){
            if(j%2 != 0){
                break;
            }
            
            else if(j%2 == 0){
            m2++;
            break;
            }
            }
            
            m2++;
        }
        
        else if(j <= p){
            break;
        }
    }
    
    minpage = (m1 < m2)? m1: m2;
    
return minpage;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
