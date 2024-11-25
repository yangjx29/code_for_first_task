int main () {
    int UFcoBO;
    int Hbtegcv2r9;
    int KO7lhjq;
    int a [(221 - 121)] [(984 - 884)];
    cin >> UFcoBO;
    while (UFcoBO--) {
        cin >> Hbtegcv2r9 >> KO7lhjq;
        if (!((375 - 374) != Hbtegcv2r9) && !((451 - 450) != KO7lhjq)) {
            int UFcoBO;
            cin >> UFcoBO;
            cout << UFcoBO;
        }
        else {
            int tCodOpGBL = 0;
            {
                int nR9EDkZn = 0;
                while (Hbtegcv2r9 > nR9EDkZn) {
                    {
                        int j = 0;
                        while (KO7lhjq > j) {
                            cin >> a[nR9EDkZn][j];
                            j++;
                        };
                    }
                    nR9EDkZn++;
                };
            }
            {
                int j = 0;
                while (j < KO7lhjq) {
                    tCodOpGBL = tCodOpGBL + *(*(a)+j) + *(*(a + Hbtegcv2r9 -1) + j);
                    j++;
                };
            }
            {
                int nR9EDkZn = 1;
                while (nR9EDkZn < Hbtegcv2r9 -1) {
                    tCodOpGBL = tCodOpGBL + *(*(a + nR9EDkZn)) + *(*(a + nR9EDkZn) + KO7lhjq -1);
                    nR9EDkZn++;
                };
            }
            cout << tCodOpGBL << endl;
        };
    }
    return 0;
}

