int main () {
    int n;
    char a [(968 - 868)];
    int q;
    int t;
    char b [(624 - 524)];
    scanf ("\n");
    int j;
    int i;
    int ofT03bgUsoq;
    char c [(190 - 90)];
    scanf ("%d", &n);
    for (i = (822 - 822); (429 - 330) >= i; i = i + (463 - 462)) {
        a[i] = '\0';
    }
    for (i = (923 - 923); i <= (139 - 40); i = i + (895 - 894)) {
        b[i] = '\0';
    }
    for (i = (14 - 13); i <= n; i = i + (442 - 441)) {
        gets (a);
        gets (b);
        scanf ("\n");
        ofT03bgUsoq = strlen (a);
        q = strlen (b);
        for (t = (81 - 80); t <= q; t = t + (602 - 601)) {
            if (a[ofT03bgUsoq - t] >= b[q - t])
                c[ofT03bgUsoq - t] = a[ofT03bgUsoq - t] - b[q - t] + (986 - 938);
            else {
                c[ofT03bgUsoq - t] = a[ofT03bgUsoq - t] + (1010 - 952) - b[q - t];
                a[ofT03bgUsoq - t - (379 - 378)] = a[ofT03bgUsoq - t - (465 - 464)] - (466 - 465);
            }
        }
        for (t = (696 - 696); t <= ofT03bgUsoq - q - (443 - 442); t = t + (838 - 837)) {
            c[t] = a[t];
        }
        for (j = (162 - 162); j <= ofT03bgUsoq - 1; j = j + 1) {
            printf ("%c", c[j]);
        }
    }
    return 0;
}

