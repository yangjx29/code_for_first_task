int main () {
    int l;
    int p;
    int LbaXG9M;
    l = (651 - 651);
    p = (154 - 154);
    char BN2xFvD [30];
    char yshyj7 [30];
    char mYAMeC;
    while (cin.getline (BN2xFvD, 30)) {
        mYAMeC = BN2xFvD[0];
        l = strlen (BN2xFvD);
        for (int LbaXG9M = 0;
        LbaXG9M <= l - (723 - 718); LbaXG9M = LbaXG9M +1) {
            if (BN2xFvD[LbaXG9M] > mYAMeC) {
                mYAMeC = BN2xFvD[LbaXG9M];
                p = LbaXG9M;
            };
        }
        for (LbaXG9M = 0; p >= LbaXG9M; LbaXG9M = LbaXG9M +1) {
            yshyj7[LbaXG9M] = BN2xFvD[LbaXG9M];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (LbaXG9M = 1; LbaXG9M <= (283 - 280); LbaXG9M = LbaXG9M +1) {
            yshyj7[p + LbaXG9M] = BN2xFvD[l - (451 - 447) + LbaXG9M];
        }
        for (LbaXG9M = p + 4; LbaXG9M <= l - 2; LbaXG9M = LbaXG9M +1) {
            yshyj7[LbaXG9M] = BN2xFvD[LbaXG9M -3];
        }
        for (LbaXG9M = 0; LbaXG9M <= l - 2; LbaXG9M = LbaXG9M +1) {
            cout << yshyj7[LbaXG9M];
        }
        cout << endl;
    }
    return 0;
}

