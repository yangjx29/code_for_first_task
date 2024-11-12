void  main () {
    char c;
    int i;
    int n;
    int b [300] = {0};
    char a [1000000];
    gets (a);
    int j;
    n = strlen (a);
    {
        i = 0;
        j = 0;
        while (i < n) {
            if (a[i] != ' ')
                b[j]++;
            if (!(' ' != a[i]) && b[j] != 0)
                j++;
            i++;
        }
    }
    {
        i = 0;
        while (j >= i) {
            printf ("%d", b[i]);
            if (i != j)
                ;
            i++;
        }
    }
}

