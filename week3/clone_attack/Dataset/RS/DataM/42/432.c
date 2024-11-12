int main () {
    int HtEXhbCrn, lQGoUnr5C3k, uXrb5sjxMo, rWlOfj586N = 0, BN9b7g;
    int NMRTNPq [HtEXhbCrn];
    cin >> HtEXhbCrn;
    {
        lQGoUnr5C3k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (lQGoUnr5C3k <= HtEXhbCrn -(126 - 125)) {
            cin >> NMRTNPq[lQGoUnr5C3k];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            lQGoUnr5C3k = lQGoUnr5C3k + 1;
        };
    }
    lQGoUnr5C3k = 0;
    cin >> uXrb5sjxMo;
    while (lQGoUnr5C3k <= HtEXhbCrn -1 - rWlOfj586N) {
        if (NMRTNPq[lQGoUnr5C3k] == uXrb5sjxMo) {
            rWlOfj586N = rWlOfj586N + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                BN9b7g = lQGoUnr5C3k;
                while (BN9b7g <= HtEXhbCrn -1 - rWlOfj586N) {
                    NMRTNPq[BN9b7g] = NMRTNPq[BN9b7g +1];
                    BN9b7g = BN9b7g +1;
                };
            };
        }
        else {
            lQGoUnr5C3k = lQGoUnr5C3k + 1;
        };
    }
    {
        lQGoUnr5C3k = 0;
        while (lQGoUnr5C3k <= HtEXhbCrn -rWlOfj586N - 1) {
            if (lQGoUnr5C3k == 0)
                cout << NMRTNPq[lQGoUnr5C3k];
            else
                cout << " " << NMRTNPq[lQGoUnr5C3k];
            lQGoUnr5C3k++;
        };
    }
    return 0;
}

