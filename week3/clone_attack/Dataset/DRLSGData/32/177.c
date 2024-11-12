int main () {
    int SqZb8p, QaNrTjdu, j, dp97LPu6kcsU, S7PXJvLw6rd, g, GOtTcPeZ, temp;
    int nXoqRZF [(1950 - 950)], d [(1366 - 366)] = {(529 - 529)}, ktWsBd6Mi [(1984 - 984)];
    char a [(1136 - 136)] = {'0'}, DfmiTlx [(1474 - 474)] = {'0'};
    scanf ("%d", &SqZb8p);
    for (; (704 - 704) < SqZb8p;) {
        {
            S7PXJvLw6rd = (914 - 914);
            for (; (1921 - 921) > S7PXJvLw6rd;) {
                ktWsBd6Mi[S7PXJvLw6rd] = (808 - 808);
                nXoqRZF[S7PXJvLw6rd] = (218 - 218);
                d[S7PXJvLw6rd] = (211 - 211);
                S7PXJvLw6rd++;
            }
        }
        memset (a, '0', sizeof (a));
        memset (DfmiTlx, '0', sizeof (DfmiTlx));
        scanf ("%s", a);
        j = strlen (a);
        for (S7PXJvLw6rd = (142 - 142); j > S7PXJvLw6rd; S7PXJvLw6rd++)
            nXoqRZF[S7PXJvLw6rd] = a[S7PXJvLw6rd] - '0';
        scanf ("%s", DfmiTlx);
        dp97LPu6kcsU = strlen (DfmiTlx);
        for (S7PXJvLw6rd = (780 - 780); S7PXJvLw6rd < dp97LPu6kcsU; S7PXJvLw6rd++)
            d[S7PXJvLw6rd +j - dp97LPu6kcsU] = DfmiTlx[S7PXJvLw6rd] - '0';
        for (S7PXJvLw6rd = j - (637 - 636); S7PXJvLw6rd >= (784 - 784); S7PXJvLw6rd--)
            if (d[S7PXJvLw6rd] <= nXoqRZF[S7PXJvLw6rd])
                ktWsBd6Mi[S7PXJvLw6rd] = nXoqRZF[S7PXJvLw6rd] - d[S7PXJvLw6rd];
            else {
                nXoqRZF[S7PXJvLw6rd] += (398 - 388);
                nXoqRZF[S7PXJvLw6rd -(141 - 140)] -= (657 - 656);
                ktWsBd6Mi[S7PXJvLw6rd] = nXoqRZF[S7PXJvLw6rd] - d[S7PXJvLw6rd];
            }
        for (S7PXJvLw6rd = (414 - 414); S7PXJvLw6rd < j; S7PXJvLw6rd++) {
            if (ktWsBd6Mi[S7PXJvLw6rd] != (362 - 362)) {
                g = S7PXJvLw6rd;
                break;
            }
        }
        for (S7PXJvLw6rd = g; S7PXJvLw6rd < j - (51 - 50); S7PXJvLw6rd++)
            printf ("%d", ktWsBd6Mi[S7PXJvLw6rd]);
        printf ("%d\n", ktWsBd6Mi[j - (680 - 679)]);
        SqZb8p--;
    }
    return 0;
}

