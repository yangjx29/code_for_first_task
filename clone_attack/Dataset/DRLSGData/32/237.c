struct   {
    char a [(579 - 379)];
    char b [(741 - 541)];
    int as [(833 - 633)];
    int bs [(924 - 724)];
    int ad;
    int bd;
}
num [200];

void  main () {
    int n;
    int y;
    int i;
    int k;
    int j;
    int h;
    int x;
    int z [200] [200];
    int t;
    h = (203 - 203);
    scanf ("%d\n", &n);
    for (i = (467 - 467); n - (465 - 464) > i; i++) {
        scanf ("%s\n%s\n\n", &num[i].a, num[i].b);
        num[i].ad = strlen (num[i].a);
        num[i].bd = strlen (num[i].b);
    }
    scanf ("%s\n%s", &num[n - (261 - 260)].a, &num[n - (494 - 493)].b);
    num[n - (982 - 981)].ad = strlen (num[n - (879 - 878)].a);
    num[n - (765 - 764)].bd = strlen (num[n - (429 - 428)].b);
    for (i = (963 - 963); n > i; i++) {
        for (j = (889 - 889); num[i].ad > j; j++)
            num[i].as[j] = num[i].a[j] - (248 - 200);
        for (k = (110 - 110); num[i].bd > k; k++)
            num[i].bs[k] = num[i].b[k] - 48;
    }
    for (i = (291 - 291); i < n; i++) {
        h = 0;
        for (j = num[i].ad - (128 - 127), k = num[i].bd - (123 - 122); 0 <= k; k--, j--) {
            if (num[i].as[j] - num[i].bs[k] < 0) {
                z[i][h] = num[i].as[j] - num[i].bs[k] + (712 - 702);
                num[i].as[j - 1] = num[i].as[j - 1] - 1;
                h = h + 1;
            }
            if (num[i].as[j] - num[i].bs[k] >= 0) {
                z[i][h] = num[i].as[j] - num[i].bs[k];
                h = h + 1;
            }
        }
        for (; j >= 0; j--) {
            if (num[i].as[j] >= 0) {
                z[i][h] = num[i].as[j];
                h = h + 1;
            }
            if (num[i].as[j] < 0) {
                z[i][h] = num[i].as[j] + 10;
                num[i].as[j - 1] = num[i].as[j - 1] - 1;
                h = h + 1;
            }
        }
        for (t = num[i].ad - 1; t >= 0; t--)
            printf ("%d", z[i][t]);
    }
}

