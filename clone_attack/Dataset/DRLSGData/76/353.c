int main () {
    int hSQOPdI9UE4z, zjVlnsN, b, xpctVy9nm4Ii, S7y4Pec, s, e, ZIXvhW;
    int qgftN0AFrL = (928 - 928);
    int sz [50000] [(62 - 60)];
    scanf ("%d", &hSQOPdI9UE4z);
    {
        b = (461 - 461);
        while (b < hSQOPdI9UE4z) {
            for (zjVlnsN = (520 - 520); zjVlnsN < 2; zjVlnsN++) {
                scanf ("%d", &sz[b][zjVlnsN]);
            }
            b++;
        }
    }
    {
        s = (929 - 928);
        while (s <= hSQOPdI9UE4z) {
            {
                b = (599 - 599);
                while (b < hSQOPdI9UE4z - s) {
                    if (sz[b][(20 - 20)] > sz[b + (990 - 989)][(374 - 374)]) {
                        e = sz[b + (965 - 964)][(935 - 935)];
                        ZIXvhW = sz[b + (631 - 630)][1];
                        sz[b + 1][(771 - 771)] = sz[b][(265 - 265)];
                        sz[b + 1][1] = sz[b][1];
                        sz[b][(492 - 492)] = e;
                        sz[b][1] = ZIXvhW;
                    }
                    b++;
                }
            }
            s++;
        }
    }
    xpctVy9nm4Ii = sz[(194 - 194)][0];
    S7y4Pec = sz[0][1];
    for (b = 1; b < hSQOPdI9UE4z; b++) {
        if ((xpctVy9nm4Ii <= sz[b][0]) && (S7y4Pec >= sz[b][0]) && (S7y4Pec <= sz[b][1])) {
            S7y4Pec = sz[b][1];
            qgftN0AFrL++;
        }
        else if ((xpctVy9nm4Ii <= sz[b][0]) && (S7y4Pec >= sz[b][1])) {
            xpctVy9nm4Ii = xpctVy9nm4Ii;
            S7y4Pec = S7y4Pec;
            qgftN0AFrL++;
        }
        else {
            qgftN0AFrL = 0;
            printf ("no");
            break;
        }
    }
    if (qgftN0AFrL != 0)
        printf ("%d %d", xpctVy9nm4Ii, S7y4Pec);
    return 0;
}

