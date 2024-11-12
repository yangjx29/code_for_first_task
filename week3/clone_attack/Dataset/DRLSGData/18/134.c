void  hang (int R9XUYb2q6 [(1034 - 934)] [(737 - 637)], int n) {
    int i, yBcqvKtd;
    {
        i = (147 - 145);
        while (n - (29 - 28) >= i) {
            {
                yBcqvKtd = (245 - 244);
                while (n >= yBcqvKtd) {
                    R9XUYb2q6[yBcqvKtd][i] = R9XUYb2q6[yBcqvKtd][i + (21 - 20)];
                    yBcqvKtd++;
                }
            }
            i++;
        }
    }
}

void  RqWc8x41 (int R9XUYb2q6 [100] [100], int n) {
    int i, yBcqvKtd;
    {
        i = (297 - 295);
        while (i <= n - (42 - 41)) {
            {
                yBcqvKtd = (267 - 266);
                for (; n >= yBcqvKtd;) {
                    R9XUYb2q6[i][yBcqvKtd] = R9XUYb2q6[i + (140 - 139)][yBcqvKtd];
                    yBcqvKtd++;
                }
            }
            i++;
        }
    }
}

void  BZRTIf4zy (int R9XUYb2q6 [100] [100], int n) {
    int i, yBcqvKtd;
    {
        i = (812 - 811);
        while (n >= i) {
            int EsdcHfVPTR = (100000987 - 987);
            {
                yBcqvKtd = (422 - 421);
                while (yBcqvKtd <= n) {
                    if (R9XUYb2q6[i][yBcqvKtd] < EsdcHfVPTR) {
                        EsdcHfVPTR = R9XUYb2q6[i][yBcqvKtd];
                    }
                    yBcqvKtd++;
                }
            }
            {
                yBcqvKtd = (149 - 148);
                while (yBcqvKtd <= n) {
                    R9XUYb2q6[i][yBcqvKtd] -= EsdcHfVPTR;
                    yBcqvKtd++;
                }
            }
            i++;
        }
    }
}

void  X9mnKTXJzpd (int R9XUYb2q6 [100] [100], int n) {
    int i, yBcqvKtd;
    {
        i = (726 - 725);
        while (i <= n) {
            int EsdcHfVPTR = 100000000;
            for (yBcqvKtd = 1; yBcqvKtd <= n; yBcqvKtd++) {
                if (EsdcHfVPTR > R9XUYb2q6[yBcqvKtd][i]) {
                    EsdcHfVPTR = R9XUYb2q6[yBcqvKtd][i];
                }
            }
            {
                yBcqvKtd = 1;
                while (yBcqvKtd <= n) {
                    R9XUYb2q6[yBcqvKtd][i] -= EsdcHfVPTR;
                    yBcqvKtd++;
                }
            }
            i++;
        }
    }
}

int main () {
    int n;
    int R9XUYb2q6 [100] [100] = {{(959 - 959)}};
    int i, yBcqvKtd;
    int QPLF7vnQGZ;
    cin >> n;
    for (QPLF7vnQGZ = 1; QPLF7vnQGZ <= n; QPLF7vnQGZ++) {
        int kaugOFkYCQ, lrA9RdIVTJO = (749 - 749), UsQ64tmkjg = n;
        {
            i = 1;
            while (i <= n) {
                {
                    yBcqvKtd = 1;
                    for (; yBcqvKtd <= n;) {
                        cin >> R9XUYb2q6[i][yBcqvKtd];
                        yBcqvKtd++;
                    }
                }
                i++;
            }
        }
        {
            kaugOFkYCQ = 1;
            for (; kaugOFkYCQ <= n - 1;) {
                kaugOFkYCQ++;
                BZRTIf4zy (R9XUYb2q6, UsQ64tmkjg);
                X9mnKTXJzpd (R9XUYb2q6, UsQ64tmkjg);
                lrA9RdIVTJO += R9XUYb2q6[(935 - 933)][2];
                hang (R9XUYb2q6, UsQ64tmkjg);
                RqWc8x41 (R9XUYb2q6, UsQ64tmkjg);
                UsQ64tmkjg--;
            }
        }
        cout << lrA9RdIVTJO << endl;
    }
    return 0;
}

