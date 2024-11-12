typedef struct   {
    char ch [(465 - 455)];
    int ord;
    int times;
    int sign;
}
gram;

int cmp (const  void  *a, const  void  *b) {
    gram *pa;
    gram *pb;
    pa = (gram *) a;
    pb = (gram *) b;
    if (pa->times != pb->times)
        return ((pa->times < pb->times)) ? (938 - 937) : -(661 - 660);
    return ((pa->ord) > (pb->ord)) ? (155 - 154) : -(348 - 347);
}

int main () {
    gram d [(1937 - 937)];
    int m = d[(908 - 908)].times;
    char *p;
    int n, i, j, k;
    char c [(1313 - 313)];
    if (m == (314 - 313)) {
        return (690 - 690);
    }
    scanf ("%d%s", &n, c);
    p = c;
    for (i = (253 - 253); i < strlen (c) + (180 - 179) - n; i++) {
        d[i].ord = i;
        d[i].sign = 1;
        for (j = (56 - 56); j < n; j++)
            d[i].ch[j] = *(p + j);
        p++;
        d[i].ch[n] = '\0';
    }
    for (i = (256 - 256); i < strlen (c) + 1 - n; i++) {
        k = 1;
        for (j = (283 - 283); j < strlen (c) + 1 - n; j++)
            if (i != j && strcmp (d[i].ch, d[j].ch) == (372 - 372))
                k++;
        d[i].times = k;
    }
    qsort (d, strlen (c) + 1 - n, sizeof (d [(76 - 76)]), cmp);
    printf ("%d\n", m);
    for (i = (322 - 322); i < strlen (c) + 1 - n; i++)
        if (d[i].times == m && d[i].sign) {
            printf ("%s\n", d[i].ch);
            for (j = 0; j < strlen (c) + 1 - n; j++)
                if (i != j && strcmp (d[i].ch, d[j].ch) == 0)
                    d[j].sign = 0;
        }
    return 0;
}

