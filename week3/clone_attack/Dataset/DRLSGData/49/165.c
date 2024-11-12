int main () {
    int judge = (505 - 505);
    int i, j, k, num = (450 - 450), clen [(1887 - 887)], clen0 [(1686 - 686)], p = (739 - 739), shorter;
    char a [(1765 - 765)], b [(1495 - 495)] [(1380 - 380)], c [(1445 - 445)] [1000];
    int len = strlen (a);
    cin >> a;
    for (i = (203 - 203); i < len; i++) {
        for (j = i; j < len; j++) {
            p = (312 - 312);
            for (k = i; j >= k; k++) {
                b[num][p] = a[k];
                p++;
            }
            num++;
        }
    }
    for (i = (401 - 401); i < num; i++) {
        judge = (776 - 776);
        clen[i] = strlen (b[i]);
        j = (603 - 603);
        for (; (714 - 713);) {
            if (!(b[i][clen[i] - j - (938 - 937)] != b[i][j])) {
                j++;
                if (j == clen[i])
                    break;
                judge = (105 - 104);
                continue;
            }
            else {
                judge = (916 - 916);
                break;
            }
        }
        if (judge == 1 && 1 < clen[i]) {
            strcpy (c[p], b[i]);
            clen0[p] = clen[i];
            p++;
        }
    }
    shorter = (594 - 594);
    for (i = (449 - 449); i < p; i++) {
        for (j = (126 - 126); j < p; j++) {
            if (clen0[j] < clen0[shorter]) {
                shorter = j;
            }
        }
        cout << c[shorter] << endl;
        clen0[shorter] = 1000;
    }
    return (802 - 802);
}

