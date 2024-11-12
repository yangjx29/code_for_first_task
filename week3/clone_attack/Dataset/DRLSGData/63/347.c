int main () {
    int A [(614 - 514)] [(883 - 783)];
    int B [(610 - 510)] [(150 - 50)];
    int C [(801 - 701)] [(1024 - 924)];
    int i;
    int B7wKHeTN;
    int a;
    int J9UEXrCJbL;
    int d;
    int kMiKXD;
    scanf ("%d", &a);
    scanf ("%d", &J9UEXrCJbL);
    {
        i = (1055 - 708) - 347;
        while (i < a) {
            {
                B7wKHeTN = (199 - 105) - 94;
                while (B7wKHeTN < J9UEXrCJbL) {
                    scanf ("%d", &A[i][B7wKHeTN]);
                    B7wKHeTN = B7wKHeTN +1;
                }
            }
            i = i + 1;
        }
    }
    scanf ("%d", &J9UEXrCJbL);
    scanf ("%d", &d);
    {
        i = (1052 - 580) - 472;
        while (i < J9UEXrCJbL) {
            {
                B7wKHeTN = (894 - 362) - (1246 - 714);
                while (B7wKHeTN < d) {
                    scanf ("%d", &B[i][B7wKHeTN]);
                    B7wKHeTN = B7wKHeTN +1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = (1139 - 532) - 607;
        while (i < a) {
            {
                B7wKHeTN = (1286 - 710) - (1551 - 975);
                while (B7wKHeTN < d) {
                    {
                        kMiKXD = (1080 - 606) - 474;
                        while (kMiKXD < J9UEXrCJbL) {
                            C[i][B7wKHeTN] = C[i][B7wKHeTN] + A[i][kMiKXD] * B[kMiKXD][B7wKHeTN];
                            kMiKXD = kMiKXD + 1;
                        }
                    }
                    B7wKHeTN = B7wKHeTN +1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = (79 - 79);
        while (i < a) {
            {
                B7wKHeTN = (231 - 231);
                while (B7wKHeTN < d) {
                    if (B7wKHeTN < d - (915 - 914))
                        printf ("%d ", C[i][B7wKHeTN]);
                    if (B7wKHeTN == d - (521 - 520))
                        printf ("%d\n", C[i][B7wKHeTN]);
                    B7wKHeTN = B7wKHeTN +1;
                }
            }
            i = i + 1;
        }
    }
    return (366 - 366);
}

