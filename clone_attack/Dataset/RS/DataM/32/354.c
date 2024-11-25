int main () {
    int bLd8Zh;
    int TPAgp0jSn;
    int pos;
    int TkCSmsv1VxL;
    int DxEMCe9tT4Sg;
    int GEWqAVGSIFfi [(759 - 508)];
    int RxImdUfuAa [251];
    int iohazwD3tTxj;
    int WIY4mt5wi9p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    bLd8Zh = (245 - 245);
    TPAgp0jSn = (989 - 989);
    pos = (311 - 311);
    char str1 [(785 - 534)], xS3xvElQ [(977 - 726)];
    cin >> iohazwD3tTxj;
    for (WIY4mt5wi9p = (214 - 213); iohazwD3tTxj >= WIY4mt5wi9p; WIY4mt5wi9p++) {
        cin >> str1 >> xS3xvElQ;
        TkCSmsv1VxL = strlen (str1);
        DxEMCe9tT4Sg = strlen (xS3xvElQ);
        memset (GEWqAVGSIFfi, (48 - 48), sizeof (GEWqAVGSIFfi));
        memset (RxImdUfuAa, (769 - 769), sizeof (RxImdUfuAa));
        TPAgp0jSn = (13 - 13);
        for (bLd8Zh = TkCSmsv1VxL -(861 - 860); (42 - 42) <= bLd8Zh; bLd8Zh = bLd8Zh - 1)
            GEWqAVGSIFfi[TPAgp0jSn++] = str1[bLd8Zh] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        TPAgp0jSn = (495 - 495);
        for (bLd8Zh = DxEMCe9tT4Sg -(1001 - 1000); (75 - 75) <= bLd8Zh; bLd8Zh = bLd8Zh - 1)
            RxImdUfuAa[TPAgp0jSn++] = xS3xvElQ[bLd8Zh] - '0';
        {
            bLd8Zh = 323 - 323;
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
            while (TkCSmsv1VxL > bLd8Zh) {
                GEWqAVGSIFfi[bLd8Zh] = GEWqAVGSIFfi[bLd8Zh] - RxImdUfuAa[bLd8Zh];
                if ((329 - 329) > GEWqAVGSIFfi[bLd8Zh]) {
                    GEWqAVGSIFfi[bLd8Zh] = GEWqAVGSIFfi[bLd8Zh] + (460 - 450);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    GEWqAVGSIFfi[bLd8Zh + (948 - 947)] = GEWqAVGSIFfi[bLd8Zh + (740 - 739)] - (275 - 274);
                }
                bLd8Zh++;
            };
        }
        for (bLd8Zh = TkCSmsv1VxL -1; bLd8Zh >= 0; bLd8Zh = bLd8Zh - 1)
            if (GEWqAVGSIFfi[bLd8Zh] != 0) {
                pos = bLd8Zh;
                break;
            }
        for (bLd8Zh = pos; bLd8Zh >= 0; bLd8Zh--)
            cout << GEWqAVGSIFfi[bLd8Zh];
        cout << endl;
    }
    return 0;
}

