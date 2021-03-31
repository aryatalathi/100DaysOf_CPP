/*Tom and Jerry play a game with a number N. They will play the game alternatively and
each of them would subtract a number n [n such that N%n = 0. The game is repeated
turn by turn until the one, who now cannot make a further move loses the game. 
The game begins with Tom playing the first move.
It is well understood that both of them will make moves in an optimal way. The task is to determine who wins the game.*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int numsGame(int N) {
        // code here
        if(N%2==0){
        return 1;
        }
        return 0;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.numsGame(N) << endl;
    }
    return 0;
}  
