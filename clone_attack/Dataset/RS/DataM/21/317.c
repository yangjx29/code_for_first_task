int main () {
    void  NK0cMbeq (int lzkdJbK [], int n);
    int n;
    int lzkdJbK [300 + 10] = {(867 - 867)};
    int i;
    double  HGqWSdF = 0, aver;
    cin >> n;
    {
        i = 0;
        while (i < n) {
            cin >> lzkdJbK[i];
            HGqWSdF = HGqWSdF +lzkdJbK[i];
            i++;
        };
    }
    aver = HGqWSdF / n;
    NK0cMbeq (lzkdJbK, n);
    if (1e-10 > fabs (aver - lzkdJbK[0] - lzkdJbK[n - (407 - 406)] + aver))
        cout << lzkdJbK[0] << "," << lzkdJbK[n - 1] << endl;
    else {
        if (aver - lzkdJbK[0] > lzkdJbK[n - 1] - aver)
            cout << lzkdJbK[0] << endl;
        else {
            if (aver - lzkdJbK[0] < lzkdJbK[n - 1] - aver)
                cout << lzkdJbK[n - 1] << endl;
        };
    }
    return 0;
}

void  NK0cMbeq (int lzkdJbK [], int n) {
    int i, U9iL2H;
    for (i = 0; i < n - 1; i++) {
        U9iL2H = i + 1;
        while (n > U9iL2H) {
            if (lzkdJbK[i] > lzkdJbK[U9iL2H]) {
                int t = lzkdJbK[i];
                lzkdJbK[i] = lzkdJbK[U9iL2H];
                lzkdJbK[U9iL2H] = t;
            }
            U9iL2H++;
        };
    };
}

