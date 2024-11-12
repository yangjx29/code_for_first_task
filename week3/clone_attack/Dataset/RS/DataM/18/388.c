int zpdNEbzua9H (int colCS2JD [(840 - 740)] [100], int VFhzIZJWp, int num, int n);

int main () {
    int colCS2JD [100] [100];
    int n, aEKSNYLP892, j, RQnwNxm4gL, VFhzIZJWp, num, bOYFdyhm = (977 - 977);
    cin >> n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        aEKSNYLP892 = 659 - 658;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (aEKSNYLP892 <= n) {
            aEKSNYLP892++;
            {
                j = 0;
                while (j <= n - 1) {
                    {
                        RQnwNxm4gL = 0;
                        while (RQnwNxm4gL <= n - 1) {
                            cin >> colCS2JD[j][RQnwNxm4gL];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            RQnwNxm4gL = RQnwNxm4gL +1;
                        };
                    }
                    j = j + 1;
                };
            }
            bOYFdyhm = (835 - 835);
            {
                VFhzIZJWp = 1;
                while (VFhzIZJWp <= n - 1) {
                    num = VFhzIZJWp;
                    bOYFdyhm = bOYFdyhm + zpdNEbzua9H (colCS2JD, VFhzIZJWp, num, n);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    VFhzIZJWp = VFhzIZJWp +1;
                };
            }
            cout << bOYFdyhm << endl;
        };
    }
    return 0;
}

int zpdNEbzua9H (int colCS2JD [100] [100], int VFhzIZJWp, int num, int n) {
    int K3KjrxlQ47Ju;
    int ix1KVm8DNd;
    int aEKSNYLP892;
    int j;
    int RQnwNxm4gL;
    int KLbCX0eES7;
    int q;
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
    int m;
    num = num - 1;
    {
        RQnwNxm4gL = 0;
        while (RQnwNxm4gL <= n - 1) {
            K3KjrxlQ47Ju = colCS2JD[RQnwNxm4gL][0];
            {
                aEKSNYLP892 = VFhzIZJWp;
                while (aEKSNYLP892 <= n - 1) {
                    if (K3KjrxlQ47Ju > colCS2JD[RQnwNxm4gL][aEKSNYLP892])
                        K3KjrxlQ47Ju = colCS2JD[RQnwNxm4gL][aEKSNYLP892];
                    aEKSNYLP892++;
                };
            }
            {
                j = 0;
                while (j <= n - 1) {
                    colCS2JD[RQnwNxm4gL][j] = colCS2JD[RQnwNxm4gL][j] - K3KjrxlQ47Ju;
                    j = j + 1;
                };
            }
            RQnwNxm4gL = RQnwNxm4gL +1;
        };
    }
    {
        KLbCX0eES7 = 0;
        while (KLbCX0eES7 <= n - 1) {
            ix1KVm8DNd = colCS2JD[0][KLbCX0eES7];
            {
                q = VFhzIZJWp;
                while (q <= n - 1) {
                    if (colCS2JD[q][KLbCX0eES7] < ix1KVm8DNd)
                        ix1KVm8DNd = colCS2JD[q][KLbCX0eES7];
                    q = q + 1;
                };
            }
            colCS2JD[0][KLbCX0eES7] = colCS2JD[0][KLbCX0eES7] - ix1KVm8DNd;
            {
                m = VFhzIZJWp;
                while (m <= n - 1) {
                    colCS2JD[m][KLbCX0eES7] = colCS2JD[m][KLbCX0eES7] - ix1KVm8DNd;
                    m = m + 1;
                };
            }
            KLbCX0eES7 = KLbCX0eES7 +1;
        };
    }
    if (num == 0)
        return colCS2JD[VFhzIZJWp][VFhzIZJWp];
    else
        return zpdNEbzua9H (colCS2JD, VFhzIZJWp, num, n);
}

