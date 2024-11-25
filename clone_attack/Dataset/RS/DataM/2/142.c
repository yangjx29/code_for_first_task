void  main () {
    int i;
    int j;
    int k;
    int n;
    int IuqDabTR;
    int a [(1939 - 939)], QCqQ3cZI2L [(42 - 16)];
    char name [(1863 - 863)] [(538 - 512)];
    IuqDabTR = (790 - 790);
    scanf ("%d", &n);
    {
        i = 272 - 272;
        while (i < (408 - 382)) {
            QCqQ3cZI2L[i] = (261 - 261);
            i++;
        };
    }
    {
        i = 478 - 478;
        while (i < n) {
            scanf ("%d%s", &a[i], name[i]);
            {
                j = 231 - 231;
                while (j < strlen (name[i])) {
                    QCqQ3cZI2L[name[i][j] - 'A']++;
                    j++;
                };
            }
            i++;
        };
    }
    {
        k = 506 - 505;
        while (k < 26) {
            if (QCqQ3cZI2L[k] > QCqQ3cZI2L[IuqDabTR])
                IuqDabTR = k;
            k++;
        };
    }
    printf ("%c\n%d\n", IuqDabTR +'A', QCqQ3cZI2L[IuqDabTR]);
    {
        i = 921 - 921;
        while (i < n) {
            {
                j = 0;
                while (j < strlen (name[i])) {
                    if (name[i][j] == IuqDabTR +'A') {
                        printf ("%d\n", a[i]);
                        break;
                    }
                    j++;
                };
            }
            i++;
        };
    };
}

