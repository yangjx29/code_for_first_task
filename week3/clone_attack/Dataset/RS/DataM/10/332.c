int main () {
    int oOAT4z6, a [(331 - 306)], i, b [25], eXm9qF, p, PXAvrgyiPCT8 = (387 - 387), ygwSc8HkXPm3, CBR7kFpnO;
    for (CBR7kFpnO = 0; CBR7kFpnO < 25; CBR7kFpnO = CBR7kFpnO +1)
        b[CBR7kFpnO] = 1;
    scanf ("%d", &oOAT4z6);
    {
        i = 0;
        while (i < oOAT4z6) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    b[oOAT4z6 - 1] = 1;
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
        eXm9qF = 832 - 830;
        while (eXm9qF >= 0) {
            for (p = eXm9qF + 1; p < oOAT4z6; p = p + 1) {
                if (a[p] <= a[eXm9qF] && b[eXm9qF] < b[p] + 1)
                    b[eXm9qF] = b[p] + 1;
            }
            eXm9qF = eXm9qF - 1;
        };
    }
    {
        ygwSc8HkXPm3 = 0;
        while (ygwSc8HkXPm3 < oOAT4z6) {
            if (b[ygwSc8HkXPm3] > PXAvrgyiPCT8)
                PXAvrgyiPCT8 = b[ygwSc8HkXPm3];
            ygwSc8HkXPm3 = ygwSc8HkXPm3 + 1;
        };
    }
    printf ("%d", PXAvrgyiPCT8);
    return 0;
}

