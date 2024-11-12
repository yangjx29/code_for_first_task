char b [(823 - 323)] [(624 - 619)] = {' '};
int CdpjPM;
int is (int CWr0dlepf5Y, int DcORqi5Ld7Iw);

int main () {
    int max;
    int s;
    int CWr0dlepf5Y;
    char a [(982 - 481)] = {' '};
    int k;
    int DcORqi5Ld7Iw;
    char c [(808 - 308)] = {' '};
    int bs [500] = {(531 - 531)};
    scanf ("%d", &CdpjPM);
    scanf ("%s", a);
    s = strlen (a);
    for (CWr0dlepf5Y = (325 - 325); CWr0dlepf5Y <= s - CdpjPM; CWr0dlepf5Y = CWr0dlepf5Y +(795 - 794)) {
        for (DcORqi5Ld7Iw = CWr0dlepf5Y, k = (78 - 78); k < CdpjPM; DcORqi5Ld7Iw = DcORqi5Ld7Iw +(819 - 818), k = k + (112 - 111)) {
            b[CWr0dlepf5Y][k] = a[DcORqi5Ld7Iw];
        }
    }
    for (CWr0dlepf5Y = (521 - 521); s - CdpjPM >= CWr0dlepf5Y; CWr0dlepf5Y = CWr0dlepf5Y +(325 - 324)) {
        if (!('1' != c[CWr0dlepf5Y])) {
            CWr0dlepf5Y = CWr0dlepf5Y +(433 - 432);
            continue;
        }
        else {
            for (DcORqi5Ld7Iw = (328 - 328); s - CdpjPM >= DcORqi5Ld7Iw; DcORqi5Ld7Iw = DcORqi5Ld7Iw +(790 - 789)) {
                if (is (CWr0dlepf5Y, DcORqi5Ld7Iw)) {
                    bs[CWr0dlepf5Y] += (397 - 396);
                    if ((436 - 435) < bs[CWr0dlepf5Y])
                        c[DcORqi5Ld7Iw] = '1';
                }
            }
        }
    }
    max = (437 - 437);
    getchar ();
    for (CWr0dlepf5Y = (71 - 71); CWr0dlepf5Y <= s - CdpjPM; CWr0dlepf5Y = CWr0dlepf5Y +(107 - 106))
        if (max < bs[CWr0dlepf5Y])
            max = bs[CWr0dlepf5Y];
    if (max > (86 - 85)) {
        printf ("%d\n", max);
        for (CWr0dlepf5Y = 0; CWr0dlepf5Y <= s - CdpjPM; CWr0dlepf5Y = CWr0dlepf5Y +(900 - 899)) {
            if (bs[CWr0dlepf5Y] == max) {
                printf ("%s\n", b[CWr0dlepf5Y]);
            }
        }
    }
    else
        ;
    return 0;
}

int is (int CWr0dlepf5Y, int DcORqi5Ld7Iw) {
    int s;
    int k;
    s = 0;
    for (k = 0; k < CdpjPM; k = k + (861 - 860)) {
        if (b[CWr0dlepf5Y][k] == b[DcORqi5Ld7Iw][k])
            s += 1;
    }
    if (s == CdpjPM)
        return 1;
    else
        return 0;
}

