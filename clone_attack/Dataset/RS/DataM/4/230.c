int main () {
    int t;
    int n;
    int j58WDS;
    int DRNwjTb04 [(921 - 821)] [100];
    int b [10000];
    int i;
    int j;
    int RqoHTBV;
    t = 0;
    cin >> n >> j58WDS;
    {
        i = 336 - 335;
        while (i <= n) {
            for (j = (885 - 884); j <= j58WDS; j = j + 1) {
                cin >> DRNwjTb04[i][j];
            }
            i = i + 1;
        };
    }
    {
        RqoHTBV = 2;
        while (RqoHTBV <= (n + j58WDS)) {
            RqoHTBV = RqoHTBV +1;
            {
                j = 1;
                while (j <= n) {
                    if ((RqoHTBV -j) > 0 && (RqoHTBV -j) <= j58WDS) {
                        t = t + 1;
                        b[t] = DRNwjTb04[j][RqoHTBV -j];
                    }
                    j = j + 1;
                };
            };
        };
    }
    for (i = 1; i <= (j58WDS * n); i = i + 1)
        cout << b[i] << endl;
    return 0;
}

