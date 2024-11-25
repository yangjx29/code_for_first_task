int main () {
    int n;
    int IdT7gJNFOprn;
    int j;
    int v0SnBEa2g;
    int cXbdMNsmSjC;
    int XYT4eJ0unxVa [MAX_LEN] = {(288 - 288)};
    struct   qujian {
        int a;
        int rNGkOwfE;
    }
    UrVkj0h [MAX_NUM];
    scanf ("%d", &n);
    scanf ("%d%d", &UrVkj0h[(277 - 276)].a, &UrVkj0h[(780 - 779)].rNGkOwfE);
    v0SnBEa2g = UrVkj0h[(319 - 318)].a;
    cXbdMNsmSjC = UrVkj0h[(735 - 734)].rNGkOwfE;
    {
        j = 927 - 926;
        while (UrVkj0h[(115 - 114)].rNGkOwfE > j) {
            XYT4eJ0unxVa[j] = (384 - 383);
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
            j = j + 1;
        };
    }
    for (IdT7gJNFOprn = 1; IdT7gJNFOprn < n; IdT7gJNFOprn++) {
        scanf ("%d%d", &UrVkj0h[IdT7gJNFOprn].a, &UrVkj0h[IdT7gJNFOprn].rNGkOwfE);
        if (v0SnBEa2g > UrVkj0h[IdT7gJNFOprn].a)
            v0SnBEa2g = UrVkj0h[IdT7gJNFOprn].a;
        if (cXbdMNsmSjC < UrVkj0h[IdT7gJNFOprn].rNGkOwfE)
            cXbdMNsmSjC = UrVkj0h[IdT7gJNFOprn].rNGkOwfE;
        for (j = UrVkj0h[IdT7gJNFOprn].a; UrVkj0h[IdT7gJNFOprn].rNGkOwfE > j; j = j + 1)
            XYT4eJ0unxVa[j] = 1;
    }
    XYT4eJ0unxVa[cXbdMNsmSjC] = 1;
    {
        IdT7gJNFOprn = v0SnBEa2g;
        while (cXbdMNsmSjC >= IdT7gJNFOprn) {
            if (XYT4eJ0unxVa[IdT7gJNFOprn] == (603 - 603)) {
                break;
            }
            IdT7gJNFOprn++;
        };
    }
    if (IdT7gJNFOprn == cXbdMNsmSjC + 1)
        printf ("%d %d", v0SnBEa2g, cXbdMNsmSjC);
    return 0;
}

