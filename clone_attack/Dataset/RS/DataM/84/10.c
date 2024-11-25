void  main () {
    int c [100];
    int n, mjN3zcADM, j, uTQHsoB;
    uTQHsoB = 0;
    n = 0;
    scanf ("%d", &n);
    {
        mjN3zcADM = 0;
        while (n > mjN3zcADM) {
            scanf ("%d", &c[mjN3zcADM]);
            mjN3zcADM = mjN3zcADM + 1;
        };
    }
    {
        j = 0;
        while ((139 - 137) > j) {
            {
                mjN3zcADM = n - 1;
                while (mjN3zcADM > j) {
                    if (c[mjN3zcADM - 1] < c[mjN3zcADM]) {
                        uTQHsoB = c[mjN3zcADM - 1];
                        c[mjN3zcADM - 1] = c[mjN3zcADM];
                        c[mjN3zcADM] = uTQHsoB;
                    }
                    mjN3zcADM--;
                };
            }
            j = j + 1;
        };
    }
    for (j = 0; j < 2; j = j + 1)
        printf ("%d\n", c[j]);
}

