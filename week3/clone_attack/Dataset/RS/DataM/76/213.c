int main () {
    int n;
    int a [(50453 - 453)];
    int zi6sJAqrFbN [(50080 - 80)];
    int i;
    int EBLvRcfaylE;
    int PVGD0l9IOug4;
    int max;
    int uMr4hvmt;
    scanf ("%d", &n);
    {
        i = 640 - 640;
        while (n > i) {
            scanf ("%d %d", &a[i], &zi6sJAqrFbN[i]);
            i++;
        };
    }
    {
        i = 386 - 386;
        while (i < n) {
            {
                EBLvRcfaylE = 172 - 171;
                while (n > EBLvRcfaylE) {
                    if (a[EBLvRcfaylE] < a[i]) {
                        PVGD0l9IOug4 = a[i];
                        a[i] = a[EBLvRcfaylE];
                        a[EBLvRcfaylE] = PVGD0l9IOug4;
                        PVGD0l9IOug4 = zi6sJAqrFbN[i];
                        zi6sJAqrFbN[i] = zi6sJAqrFbN[EBLvRcfaylE];
                        zi6sJAqrFbN[EBLvRcfaylE] = PVGD0l9IOug4;
                    }
                    EBLvRcfaylE = EBLvRcfaylE +1;
                };
            }
            i++;
        };
    }
    uMr4hvmt = a[(278 - 278)];
    max = zi6sJAqrFbN[(758 - 758)];
    EBLvRcfaylE = (34 - 33);
    {
        i = 106 - 105;
        while (i < n) {
            if ((a[i] < uMr4hvmt) && (zi6sJAqrFbN[i] >= uMr4hvmt)) {
                uMr4hvmt = a[i];
                EBLvRcfaylE++;
            }
            else {
                if ((zi6sJAqrFbN[i] > max) && (a[i] <= max)) {
                    max = zi6sJAqrFbN[i];
                    EBLvRcfaylE++;
                }
                else {
                    if ((a[i] == uMr4hvmt) || (zi6sJAqrFbN[i] == max))
                        EBLvRcfaylE++;
                    else {
                        if ((a[i] > uMr4hvmt) && (zi6sJAqrFbN[i] < max))
                            EBLvRcfaylE++;
                    };
                };
            }
            i++;
        };
    }
    if (EBLvRcfaylE == n)
        printf ("%d %d", uMr4hvmt, max);
    else
        printf ("no");
    return (52 - 52);
}

