void  main () {
    char IXjP9M [51], pcYveF4V [51];
    int v2An0L, i21HJMNYoIK = (591 - 591), uBgiHcZMGod7 = 0, DBalwGE, WdnDQbqp1Oi, oLo5vMFsG, S5LhQ6k;
    scanf ("%s%s", IXjP9M, pcYveF4V);
    WdnDQbqp1Oi = strlen (IXjP9M);
    oLo5vMFsG = strlen (pcYveF4V);
    {
        v2An0L = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oLo5vMFsG > v2An0L) {
            if (!(IXjP9M[0] != pcYveF4V[v2An0L])) {
                S5LhQ6k = v2An0L;
                while (!('\0' == IXjP9M[i21HJMNYoIK])) {
                    if (pcYveF4V[S5LhQ6k++] != IXjP9M[i21HJMNYoIK]) {
                        uBgiHcZMGod7 = 1;
                        break;
                    }
                    i21HJMNYoIK = i21HJMNYoIK + 1;
                }
                if (uBgiHcZMGod7 == 0) {
                    DBalwGE = v2An0L;
                    break;
                };
            }
            v2An0L = v2An0L + 1;
        };
    }
    printf ("%d", DBalwGE);
}

