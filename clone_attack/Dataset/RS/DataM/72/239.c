int main () {
    int EqKGzp;
    int mJVL0xrC9Yk;
    int uSM2OF;
    int j;
    int a [30] [30];
    EqKGzp = (784 - 784);
    mJVL0xrC9Yk = (649 - 649);
    uSM2OF = (478 - 478);
    j = (722 - 722);
    cin >> EqKGzp >> mJVL0xrC9Yk;
    for (uSM2OF = (177 - 177); uSM2OF < EqKGzp; uSM2OF = uSM2OF + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (921 - 921); mJVL0xrC9Yk > j; j = j + 1) {
            cin >> a[uSM2OF][j];
        };
    }
    if ((a[0][(109 - 108)] <= a[0][0]) && (a[(348 - 347)][0] <= a[0][0]))
        cout << "0 0" << endl;
    for (uSM2OF = (797 - 796); uSM2OF < mJVL0xrC9Yk - (850 - 849); uSM2OF = uSM2OF + 1) {
        if ((a[0][uSM2OF] >= a[0][uSM2OF + (219 - 218)]) && (a[0][uSM2OF] >= a[0][uSM2OF - (341 - 340)]) && (a[(944 - 943)][uSM2OF] <= a[0][uSM2OF]))
            cout << "0 " << uSM2OF << endl;
    }
    if ((a[0][mJVL0xrC9Yk - 1] >= a[0][mJVL0xrC9Yk - 2]) && (a[1][mJVL0xrC9Yk - 1] <= a[0][mJVL0xrC9Yk - 1]))
        cout << "0 " << mJVL0xrC9Yk - 1 << endl;
    for (uSM2OF = 1; uSM2OF < EqKGzp -1; uSM2OF = uSM2OF + 1) {
        if ((a[uSM2OF][0] >= a[uSM2OF][1]) && (a[uSM2OF][0] >= a[uSM2OF + 1][0]) && (a[uSM2OF - 1][0] <= a[uSM2OF][0]))
            cout << uSM2OF << " 0" << endl;
        for (j = 1; mJVL0xrC9Yk - 1 > j; j = j + 1) {
            if ((a[uSM2OF][j] >= a[uSM2OF - 1][j]) && (a[uSM2OF + 1][j] <= a[uSM2OF][j]) && (a[uSM2OF][j] >= a[uSM2OF][j + 1]) && (a[uSM2OF][j] >= a[uSM2OF][j - 1]))
                cout << uSM2OF << " " << j << endl;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if ((a[uSM2OF][mJVL0xrC9Yk - 1] >= a[uSM2OF][mJVL0xrC9Yk - 2]) && (a[uSM2OF][mJVL0xrC9Yk - 1] >= a[uSM2OF + 1][mJVL0xrC9Yk - 1]) && (a[uSM2OF][mJVL0xrC9Yk - 1] >= a[uSM2OF - 1][mJVL0xrC9Yk - 1]))
            cout << uSM2OF << " " << mJVL0xrC9Yk - 1 << endl;
    }
    if ((a[EqKGzp -1][0] >= a[EqKGzp -1][1]) && (a[EqKGzp -1][0] >= a[EqKGzp -2][0]))
        cout << EqKGzp -1 << " 0" << endl;
    for (uSM2OF = 1; uSM2OF < mJVL0xrC9Yk - 1; uSM2OF++) {
        if ((a[EqKGzp -1][uSM2OF] >= a[EqKGzp -1][uSM2OF + 1]) && (a[EqKGzp -1][uSM2OF] >= a[EqKGzp -1][uSM2OF - 1]) && (a[EqKGzp -1][uSM2OF] >= a[EqKGzp -2][uSM2OF]))
            cout << EqKGzp -1 << " " << uSM2OF << endl;
    }
    if ((a[EqKGzp -1][mJVL0xrC9Yk - 1] >= a[EqKGzp -1][mJVL0xrC9Yk - 2]) && (a[EqKGzp -1][mJVL0xrC9Yk - 1] >= a[EqKGzp -2][mJVL0xrC9Yk - 1]))
        cout << EqKGzp -1 << " " << mJVL0xrC9Yk - 1 << endl;
    return 0;
}

