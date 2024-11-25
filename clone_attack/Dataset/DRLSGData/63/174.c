int main () {
    int KCn8j1qzu;
    int khgiZLTW6;
    int C8W462mHJ;
    int h37o4WKzNX9;
    int rzxiP2LBwO;
    int dflNzhe5X;
    int NpI38inNrj;
    int KCrIk8a1;
    int xeEuNB [(276 - 176)] [(702 - 602)];
    int fLkWFVRG9EJq [(732 - 632)] [(692 - 592)];
    int bWpIb7ZDCOgs [100] [100];
    memset (bWpIb7ZDCOgs, (983 - 983), sizeof (bWpIb7ZDCOgs));
    cin >> KCn8j1qzu >> C8W462mHJ;
    for (rzxiP2LBwO = (700 - 700); KCn8j1qzu > rzxiP2LBwO; rzxiP2LBwO++)
        for (dflNzhe5X = (106 - 106); C8W462mHJ > dflNzhe5X; dflNzhe5X++)
            cin >> xeEuNB[rzxiP2LBwO][dflNzhe5X];
    cin >> khgiZLTW6 >> h37o4WKzNX9;
    for (rzxiP2LBwO = (189 - 189); rzxiP2LBwO < khgiZLTW6; rzxiP2LBwO++)
        for (dflNzhe5X = (811 - 811); h37o4WKzNX9 > dflNzhe5X; dflNzhe5X++)
            cin >> fLkWFVRG9EJq[rzxiP2LBwO][dflNzhe5X];
    for (rzxiP2LBwO = (564 - 564); KCn8j1qzu > rzxiP2LBwO; rzxiP2LBwO++)
        for (dflNzhe5X = 0; h37o4WKzNX9 > dflNzhe5X; dflNzhe5X++) {
            NpI38inNrj = 0;
            for (KCrIk8a1 = 0; khgiZLTW6 > KCrIk8a1; KCrIk8a1++)
                bWpIb7ZDCOgs[rzxiP2LBwO][dflNzhe5X] += xeEuNB[rzxiP2LBwO][NpI38inNrj++] * fLkWFVRG9EJq[KCrIk8a1][dflNzhe5X];
        }
    for (rzxiP2LBwO = 0; rzxiP2LBwO < KCn8j1qzu; rzxiP2LBwO++) {
        for (dflNzhe5X = 0; h37o4WKzNX9 - 1 > dflNzhe5X; dflNzhe5X++)
            cout << bWpIb7ZDCOgs[rzxiP2LBwO][dflNzhe5X] << ' ';
        cout << bWpIb7ZDCOgs[rzxiP2LBwO][h37o4WKzNX9 - 1] << endl;
    }
    return 0;
}

