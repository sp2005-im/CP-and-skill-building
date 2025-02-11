//Usain Bolt vs Tiger
#include <bits/stdc++.h>
using namespace std;

int main() {
	// Sri Rama Jayam
	int t;
    cin >> t;
    while (t--) {
        int finish, d_to_bolt, a_tiger, v_bolt;
	    cin >> finish >> d_to_bolt >> a_tiger >> v_bolt;
	    
	    double t_bolt = (double) finish / v_bolt;  
	    int d_total = d_to_bolt + finish;
	    double t_tiger = sqrt(2.0 * d_total / a_tiger);  

	    if (t_bolt < t_tiger) {
	        cout << "Bolt" << endl;
	    } else {
	        cout << "Tiger" << endl;
	    }
	}
    return 0;
}
