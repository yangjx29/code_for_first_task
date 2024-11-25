int main () {
    int v7W8mek;
    int GyOfAbKU1s;
    int i;
    int j;
    int a;
    int DunzswP;
    int k;
    int HHp419TDZXCt [(954 - 944)] [10];
    scanf ("%d,%d", &v7W8mek, &GyOfAbKU1s);
    {
        i = 453 - 453;
        while (v7W8mek > i) {
            for (j = 0; GyOfAbKU1s > j; j++) {
                scanf ("%d", &HHp419TDZXCt[i][j]);
            }
            i++;
        };
    }
    {
        i = 0;
        while (v7W8mek > i) {
            int VpFC6Lm89x;
            int jwBsErlKChR;
            VpFC6Lm89x = 0;
            int min = HHp419TDZXCt[0][jwBsErlKChR], FPfo7GFRImV = 0;
            for (j = 0; GyOfAbKU1s > j; j++) {
                if (VpFC6Lm89x < HHp419TDZXCt[i][j]) {
                    VpFC6Lm89x = HHp419TDZXCt[i][j];
                    jwBsErlKChR = j;
                };
            }
            {
                k = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (v7W8mek > k) {
                    if (min > HHp419TDZXCt[k][jwBsErlKChR]) {
                        FPfo7GFRImV = k;
                        min = HHp419TDZXCt[k][jwBsErlKChR];
                    }
                    k = k + 1;
                };
            }
            if (FPfo7GFRImV == i) {
                printf ("%d+%d", i, jwBsErlKChR);
                return 0;
            }
            i++;
        };
    }
    return 0;
}

