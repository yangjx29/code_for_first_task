main () {
    int xgL1AkT8M [300], YVsBPuh, n, i, Dic68zxGD, xhfpcYHl3, hGLpevh = (708 - 708), fRid0D1P = (889 - 889);
    char a [(1785 - 284)];
    gets (a);
    n = (412 - 412);
    YVsBPuh = strlen (a);
    for (i = (482 - 482); i < YVsBPuh;) {
        Dic68zxGD = i;
        i = Dic68zxGD +1;
        xgL1AkT8M[n] = 0;
        while (!(',' == a[Dic68zxGD]) && Dic68zxGD < YVsBPuh) {
            xgL1AkT8M[n] = xgL1AkT8M[n] * (954 - 944) + a[Dic68zxGD] - '0';
            Dic68zxGD++;
        }
        n = n + 1;
    }
    xhfpcYHl3 = xgL1AkT8M[0];
    {
        i = 1;
        while (n > i) {
            if (xhfpcYHl3 < xgL1AkT8M[i])
                xhfpcYHl3 = xgL1AkT8M[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i < n) {
            if (xhfpcYHl3 > xgL1AkT8M[i] && xgL1AkT8M[i] > hGLpevh) {
                fRid0D1P = fRid0D1P + 1;
                hGLpevh = xgL1AkT8M[i];
            }
            i++;
        };
    }
    if (fRid0D1P == 0)
        printf ("No");
    else
        printf ("%d", hGLpevh);
    return 0;
}

