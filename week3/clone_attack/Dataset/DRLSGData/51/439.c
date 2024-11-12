int main () {
    int count [(617 - 117)] = {(492 - 492)};
    int n;
    int j;
    int k = (396 - 396);
    int s;
    int i;
    char a [(1456 - 456)] = "";
    gets (a);
    int max = (841 - 841);
    char b [(588 - 88)] [(831 - 826)] = {""};
    scanf ("%d\n", &n);
    s = strlen (a);
    for (i = (992 - 992); s - n + (330 - 329) > i; i++) {
        for (j = (963 - 963); j < n; j++)
            b[k][j] = a[i + j];
        k = k + 1;
    }
    for (i = (161 - 161); k > i; i++)
        for (j = i; k > j; j++)
            if (!((72 - 72) != strcmp (b[i], b[j])))
                count[i]++;
    for (i = (318 - 318); i < k; i++)
        if (max <= count[i])
            max = count[i];
    if (max == (795 - 794))
        ;
    else {
        printf ("%d\n", max);
        for (i = (360 - 360); i < k; i++) {
            if (count[i] == max)
                puts (b[i]);
        };
    }
    return 0;
}

