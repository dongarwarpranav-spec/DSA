#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans , vector<vector<bool>> &vis )
{
int n = mat.size();
    // NIOT ITS TIME FOR BASE CASE
    // YE CONDIICITON MENE PSUEDO CODE SE LIYA HAI NOTE PAHILE HELPER FUNCTION BANAO THEN USE NICHE DEFINE KIYA HAI WOH LIKHO AND THEN BASE CASE ME LIKHO

    if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || vis[r][c] == true )
    {
        return;
    }
    if (r == n - 1 && c == n - 1)
    {
        ans.push_back(path);
        return;
    }
    vis [r][c] =true ;
    helper(mat, r + 1, c, path + "D", ans,vis); // this is for down key yahi humne vector me decleared kiya huva hai
    helper(mat, r - 1, c, path + "U", ans ,vis);
    helper(mat, r, c + 1, path + "R", ans,vis);
    helper(mat, r, c - 1, path + "L", ans,vis);
    vis[r][c]= false;
}
vector<string> findPath(vector<vector<int>> &mat)
{
    int n = mat.size();
    vector<vector<bool>> vis(n,vector<bool> (n,false)); 
    // yaha par ek visites function ban chuka hai ...joo value ko check karegaa ki sahi hai kay !!

    vector<string> ans;
    string path = "";
    helper(mat, 0, 0, path, ans , vis);
    return ans;
}

int main(){
    vector< vector<int>>
   mat = {{1,0,0,0}, {1,1,0,1}, { 1,1,0,0}, {0,1,1,1}};
   vector<string> ans =findPath(mat);
   for (string path :ans ){
    cout << path <<endl;
   }

return 0;



}