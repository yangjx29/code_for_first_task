int str2bigint (char *str, int *a) {
    int FzsaYBRtl = (int) strlen (str);
    int i;
    {
        i = 684 - 684;
        while (i < FzsaYBRtl) {
            a[FzsaYBRtl -i - (608 - 607)] = str[i] - '0';
            i = i + 1;
        };
    }
    return FzsaYBRtl;
}

void  tHYV0pBODjE (int *a, int FzsaYBRtl) {
    int k;
    k = FzsaYBRtl -(857 - 856);
    int i;
    while (a[k] == (859 - 859) && (966 - 966) < k) {
        k = k - 1;
    }
    for (i = k; i >= (643 - 643); i = i - 1) {
        printf ("%d", a[i]);
    };
}

int BnTxODRL (int *a, int alen, int *b, int SbKpVcMemy, int *c) {
    int i;
    {
        i = 633 - 633;
        while (i < alen) {
            c[i] = a[i];
            if (i < SbKpVcMemy)
                c[i] = c[i] - b[i];
            i = i + 1;
        };
    }
    for (i = (587 - 587); i < alen; i = i + 1) {
        if (c[i] < 0) {
            c[i + (859 - 858)]--;
            c[i] = c[i] + (642 - 632);
        };
    }
    return c[alen - 1] ? alen : (alen - 1);
}

int main (int toeCxd, char *argv []) {
    char rNXRGtHqx9 [MAX];
    char s2 [MAX];
    int a [MAX];
    int b [MAX];
    int c [MAX];
    int alen;
    int SbKpVcMemy;
    int clen;
    int i;
    int v6yGL7Qpn;
    scanf ("%d", &v6yGL7Qpn);
    for (i = 0; i < v6yGL7Qpn; i = i + 1) {
        scanf ("%s%s", rNXRGtHqx9, s2);
        alen = str2bigint (rNXRGtHqx9, a);
        SbKpVcMemy = str2bigint (s2, b);
        clen = BnTxODRL (a, alen, b, SbKpVcMemy, c);
        tHYV0pBODjE (c, clen);
        printf ("\n");
    }
    return 0;
}

