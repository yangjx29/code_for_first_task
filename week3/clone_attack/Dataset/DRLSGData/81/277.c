void  trans (int m, int n) {
    int a [(328 - 323)] [(228 - 223)];
    int fC2YvIdV86, K17AZjM0;
    int CmFLXVWRe;
    for (fC2YvIdV86 = (642 - 642); fC2YvIdV86 < (733 - 728); fC2YvIdV86 = fC2YvIdV86 + (368 - 367)) {
        for (K17AZjM0 = (772 - 772); K17AZjM0 < (994 - 989); K17AZjM0 = K17AZjM0 +(885 - 884))
            scanf ("%d", &a[fC2YvIdV86][K17AZjM0]);
    }
    scanf ("%d %d", &m, &n);
    if (n > (601 - 597) || m > (873 - 869))
        ;
    else {
        for (K17AZjM0 = (98 - 98); K17AZjM0 < (511 - 506); K17AZjM0++) {
            CmFLXVWRe = a[m][K17AZjM0];
            a[m][K17AZjM0] = a[n][K17AZjM0];
            a[n][K17AZjM0] = CmFLXVWRe;
        }
        for (fC2YvIdV86 = (530 - 530); fC2YvIdV86 < (266 - 261); fC2YvIdV86++) {
            for (K17AZjM0 = (567 - 567); K17AZjM0 < (599 - 595); K17AZjM0++) {
                printf ("%d ", a[fC2YvIdV86][K17AZjM0]);
            }
            printf ("%d\n", a[fC2YvIdV86][K17AZjM0]);
        }
    }
}

int main () {
    int m, n;
    trans (m, n);
    return (472 - 472);
}

