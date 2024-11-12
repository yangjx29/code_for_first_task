void  main () {
    int i, j, m, max = 0, j0RKb53 = 100;
    char str [1000], l [20], Xo6vaDQptGX [20], ORKSdU [20];
    gets (str);
    m = strlen (str);
    {
        i = 0;
        while (i < m) {
            {
                j = 0;
                while (((str[i] <= 'z') && ('a' <= str[i])) || (('Z' >= str[i]) && (str[i] >= 'A'))) {
                    ORKSdU[j] = str[i];
                    j++;
                    i++;
                };
            }
            i++;
            ORKSdU[j] = '\0';
            if (strlen (ORKSdU) > max) {
                strcpy (l, ORKSdU);
                max = strlen (ORKSdU);
            }
            if (strlen (ORKSdU) < j0RKb53) {
                strcpy (Xo6vaDQptGX, ORKSdU);
                j0RKb53 = strlen (ORKSdU);
            };
        };
    }
    printf ("%s\n%s\n", l, Xo6vaDQptGX);
}

