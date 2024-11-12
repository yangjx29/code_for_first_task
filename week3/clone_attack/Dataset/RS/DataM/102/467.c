int main () {
    int malecount;
    malecount = (591 - 591);
    int femalecount;
    femalecount = (810 - 810);
    int n;
    double  HIKnGQ8WBw [(208 - 168)];
    char PT4ARMG5 [8];
    double  UG1a0ZS;
    double  zmYH892jXRlk [40];
    int eafy5QqCTMx;
    cin >> n;
    {
        eafy5QqCTMx = 0;
        while (eafy5QqCTMx < n) {
            eafy5QqCTMx = eafy5QqCTMx + 1;
            cin >> PT4ARMG5;
            cin >> UG1a0ZS;
            if (strlen (PT4ARMG5) == 6) {
                HIKnGQ8WBw[femalecount] = UG1a0ZS;
                femalecount = femalecount + 1;
            }
            else {
                zmYH892jXRlk[malecount] = UG1a0ZS;
                malecount++;
            };
        };
    }
    sort (zmYH892jXRlk, zmYH892jXRlk + malecount);
    {
        eafy5QqCTMx = 0;
        while (eafy5QqCTMx < malecount) {
            cout << fixed << setprecision (2);
            cout << zmYH892jXRlk[eafy5QqCTMx] << " ";
            eafy5QqCTMx++;
        };
    }
    sort (HIKnGQ8WBw, HIKnGQ8WBw +femalecount);
    {
        eafy5QqCTMx = 697 - 696;
        while (eafy5QqCTMx > 0) {
            cout << HIKnGQ8WBw[eafy5QqCTMx] << " ";
            eafy5QqCTMx--;
        };
    }
    cout << HIKnGQ8WBw[0];
    return 0;
}

