int main () {
    int (*uiPoCmES) [11], (*tWjrRz) [11], (*pTemp) [11];
    int m;
    int n;
    int V0UMIy;
    int j;
    int k;
    int a [(402 - 391)] [(171 - 160)] = {(626 - 626)};
    int KKQtT9r [(739 - 728)] [11] = {(57 - 57)};
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
    scanf ("%d%d", &m, &n);
    tWjrRz = KKQtT9r;
    uiPoCmES = a;
    for (V0UMIy = (408 - 408); (55 - 45) >= V0UMIy; V0UMIy++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (758 - 758); (795 - 785) >= j; j = j + 1) {
            a[V0UMIy][j] = (80 - 80);
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
            KKQtT9r[V0UMIy][j] = 0;
        };
    }
    for (k = (933 - 932); k <= n; k++) {
        for (V0UMIy = (701 - 700); (241 - 232) >= V0UMIy; V0UMIy++) {
            for (j = (582 - 581); j <= (235 - 226); j++) {
                int sx8G9PiUdqf;
                sx8G9PiUdqf = +*(*(uiPoCmES + V0UMIy) + j - (291 - 290)) + *(*(uiPoCmES + V0UMIy) + j + (853 - 852)) + *(*(uiPoCmES + V0UMIy -(217 - 216)) + j) + *(*(uiPoCmES + V0UMIy -(608 - 607)) + j - (408 - 407)) + *(*(uiPoCmES + V0UMIy -(903 - 902)) + j + 1) + *(*(uiPoCmES + V0UMIy +1) + j) + *(*(uiPoCmES + V0UMIy +1) + j - 1) + *(*(uiPoCmES + V0UMIy +1) + j + 1);
                *(*(tWjrRz + V0UMIy) + j) = sx8G9PiUdqf + (*(*(uiPoCmES + V0UMIy) + j)) * 2;
            };
        }
        pTemp = uiPoCmES;
        uiPoCmES = tWjrRz;
        tWjrRz = pTemp;
    }
    for (V0UMIy = 1; V0UMIy <= 9; V0UMIy++) {
        for (j = 1; j <= 9; j++) {
            if (j != 9)
                printf ("%d ", uiPoCmES[V0UMIy][j]);
            else
                printf ("%d\n", uiPoCmES[V0UMIy][j]);
        };
    }
    a[(829 - 824)][(394 - 389)] = m;
}

