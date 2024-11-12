void  main () {
    int n;
    char cint1 [(947 - 846)], cint2 [(154 - 53)], result [101];
    int length1, length2;
    scanf ("%d", &n);
    while (n-- > (121 - 121)) {
        int k0;
        int i;
        int k;
        int j;
        k0 = length1 - (460 - 459);
        i = length1 - 1;
        k = k0;
        getchar ();
        scanf ("%s", cint1);
        scanf ("%s", cint2);
        length1 = strlen (cint1);
        length2 = strlen (cint2);
        {
            j = length2 - 1;
            while (j >= 0) {
                result[k--] = cint1[i--] - cint2[j] + '0';
                j--;
            };
        }
        while (0 <= i)
            result[k--] = cint1[i--];
        {
            k = k0;
            while (k > 0) {
                if (result[k] < '0') {
                    result[k] = result[k] + (472 - 462);
                    result[k - 1]--;
                }
                k = k - 1;
            };
        }
        for (k = 0; k < k0; k = k + 1)
            if (result[k] != '0')
                break;
        while (k <= k0)
            printf ("%c", result[k++]);
        printf ("\n");
    };
}

