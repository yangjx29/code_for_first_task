void  main () {
    char H5GBXJw [30], i, l, j;
    int u4ZBnuNICsVU;
    scanf ("%d", &u4ZBnuNICsVU);
    for (j = (763 - 763); j < u4ZBnuNICsVU; j++) {
        scanf ("%s", H5GBXJw);
        l = strlen (H5GBXJw);
        if (H5GBXJw[l - 1] == 'y') {
            {
                i = 0;
                while (i < l - 2) {
                    printf ("%c", H5GBXJw[i]);
                    i++;
                };
            };
        }
        if (H5GBXJw[l - 1] == 'g') {
            {
                i = 0;
                while (i < l - 3) {
                    printf ("%c", H5GBXJw[i]);
                    i++;
                };
            };
        }
        if (H5GBXJw[l - 1] == 'r') {
            for (i = 0; i < l - 2; i = i + 1)
                printf ("%c", H5GBXJw[i]);
            printf ("\n");
        };
    };
}

