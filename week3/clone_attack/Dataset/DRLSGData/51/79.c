int main () {
    char w [500] [5] = {0};
    int j;
    int i;
    int max;
    int n;
    int l;
    int no [500] = {0};
    char s [500];
    gets (s);
    l = strlen (s);
    max = -1;
    scanf ("%d\n", &n);
    for (i = 0; i < l - n + 1; i++)
        for (j = 0; j < n; j++)
            w[i][j] = s[i + j];
    for (i = 0; i < l - n; i++)
        for (j = i + 1; l - n + 1 > j; j++)
            if (!(0 != strcmp (w[i], w[j]))) {
                no[i]++;
                if (no[i] > max)
                    max = no[i];
            }
    if (max == -1)
        ;
    else {
        printf ("%d\n", max + 1);
        for (i = 0; i < l - n + 1; i++)
            if (no[i] == max)
                printf ("%s\n", w[i]);
    }
    return 0;
}

