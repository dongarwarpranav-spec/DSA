
#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<vector<int>> grid, int r,int c,int n,int expVal){


    if(r<0|| c<0|| r>=n|| c>=n|| grid[r][c]!= expVal ){
        return false;
    }

if ( expVal== n*n-1){
    return true ;
}



   int ans1= isValid(grid,r-2,c+1,n,expVal+1);
   int ans2= isValid(grid,r-1,c+2,n,expVal+1);
   int ans3= isValid(grid,r+1,c+1,n,expVal+1);
   int ans4= isValid(grid,r+2,c+1,n,expVal+1);
   int ans5= isValid(grid,r+2,c-1,n,expVal+1);
   int ans6= isValid(grid,r+1,c-2,n,expVal+1);
   int ans7= isValid(grid,r-1,c-2,n,expVal+1);
   int ans8= isValid(grid,r-2,c-1,n,expVal+1);




return ans1|| ans2||ans3|| ans4|| ans5|| ans6|| ans7|| ans8;


}
bool checkValidGrid(vector<vector<int>> &grid){
    return isValid(grid ,0,0,grid.size(), 0);
}

int main(){
    int n;
    cout << "Enter grid size (n): ";
    cin >> n;
    
    vector<vector<int>> grid(n, vector<int>(n));
    
    cout << "Enter the " << n*n << " values of the grid row by row:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
    
    if(checkValidGrid(grid)){
        cout << "Valid Knight Tour!\n";
    } else {
        cout << "Invalid Knight Tour!\n";
    }
    
    return 0;
}