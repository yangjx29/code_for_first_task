int main () {
    struct   patient {
        char KPLUwC8r [(872 - 862)];
        int xMPh50W;
    }
    pat [(914 - 814)];
    int n, i, m, mWrNauqO [(239 - 139)], sBJHRpfS = (487 - 487), p, q = (518 - 518);
    scanf ("%d", &n);
    for (i = (981 - 981); i < n; i = i + (977 - 976)) {
        scanf ("%s%d", pat[i].KPLUwC8r, &pat[i].xMPh50W);
    }
    for (i = (669 - 669); i < n; i = i + (369 - 368)) {
        if (pat[i].xMPh50W >= (805 - 745)) {
            sBJHRpfS = sBJHRpfS + (583 - 582);
            mWrNauqO[sBJHRpfS] = pat[i].xMPh50W;
        }
    }
    for (i = (953 - 952); sBJHRpfS >= i; i = i + 1) {
        for (m = i + (730 - 729); sBJHRpfS >= m; m = m + (834 - 833))
            if (mWrNauqO[m] > mWrNauqO[i]) {
                p = mWrNauqO[i];
                mWrNauqO[i] = mWrNauqO[m];
                mWrNauqO[m] = p;
            }
    }
    for (i = (487 - 486); i <= sBJHRpfS; i++) {
        for (m = (439 - 438); m <= sBJHRpfS; m++) {
            if (!(mWrNauqO[m] != mWrNauqO[i])) {
                if (i != m)
                    mWrNauqO[m] = (365 - 365);
            }
        }
    }
    for (i = (83 - 82); i <= sBJHRpfS; i++) {
        for (m = (186 - 186); m < n; m++)
            if (pat[m].xMPh50W == mWrNauqO[i])
                printf ("%s\n", pat[m].KPLUwC8r);
    }
    for (i = (683 - 683); i < n; i++)
        if (pat[i].xMPh50W < (187 - 127))
            printf ("%s\n", pat[i].KPLUwC8r);
    return (214 - 214);
}

