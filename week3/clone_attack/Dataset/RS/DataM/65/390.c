int main () {
    int yUX45flL1h [201] [201];
    int s;
    int UZhomEXQ3;
    int ag7aTKyWtfso;
    int vNAmpoyM;
    int n;
    s = 0;
    UZhomEXQ3 = 0;
    int MFWHXeEmfghI [201];
    scanf ("%d", &n);
    for (ag7aTKyWtfso = 0; n > ag7aTKyWtfso; ag7aTKyWtfso = ag7aTKyWtfso + 1) {
        for (vNAmpoyM = 0; 2 > vNAmpoyM; vNAmpoyM = vNAmpoyM + 1) {
            scanf ("%d", &yUX45flL1h[ag7aTKyWtfso][vNAmpoyM]);
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
            };
        };
    }
    {
        vNAmpoyM = 0;
        while (2 > vNAmpoyM) {
            for (ag7aTKyWtfso = 0; n > ag7aTKyWtfso; ag7aTKyWtfso = ag7aTKyWtfso + 1) {
                MFWHXeEmfghI[ag7aTKyWtfso] = yUX45flL1h[ag7aTKyWtfso][0];
            }
            for (ag7aTKyWtfso = 0; ag7aTKyWtfso < n; ag7aTKyWtfso++) {
                if (yUX45flL1h[ag7aTKyWtfso][1] == MFWHXeEmfghI[ag7aTKyWtfso]) {
                    continue;
                }
                else {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if ((!(0 != yUX45flL1h[ag7aTKyWtfso][1]) && !(1 != MFWHXeEmfghI[ag7aTKyWtfso])) || (!(1 != yUX45flL1h[ag7aTKyWtfso][1]) && MFWHXeEmfghI[ag7aTKyWtfso] == 2) || (yUX45flL1h[ag7aTKyWtfso][1] == 2 && MFWHXeEmfghI[ag7aTKyWtfso] == 0)) {
                        s++;
                    }
                    else {
                        UZhomEXQ3 = UZhomEXQ3 +1;
                    };
                };
            }
            if (s == UZhomEXQ3) {
            }
            else {
                if (s > UZhomEXQ3) {
                }
                else {
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            return 0;
            vNAmpoyM = vNAmpoyM + 1;
        };
    };
}

