int main () {
    char l6fNgrYD [(327 - 277)], mya1zsHAL [50];
    int i, cxVWFZ, n, Z4jZIwPeK, a;
    scanf ("%s %s", l6fNgrYD, mya1zsHAL);
    n = strlen (l6fNgrYD);
    Z4jZIwPeK = strlen (mya1zsHAL);
    {
        cxVWFZ = 375 - 375;
        while (Z4jZIwPeK > cxVWFZ) {
            if (!(mya1zsHAL[cxVWFZ] == l6fNgrYD[0]))
                continue;
            a = cxVWFZ;
            if (!(mya1zsHAL[cxVWFZ] != l6fNgrYD[0])) {
                for (i = 1; i < n; i++, cxVWFZ++) {
                    if (l6fNgrYD[i] != mya1zsHAL[cxVWFZ + 1])
                        break;
                };
            }
            break;
            cxVWFZ = cxVWFZ + 1;
        };
    }
    printf ("%d\n", a);
    return 0;
}

