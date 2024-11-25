void  main () {
    char EWXlz7u5 [85];
    int i;
    int P0HVchiMpr7X;
    int aM0rRxp;
    int uOz83I;
    int j;
    getchar ();
    scanf ("%d", &P0HVchiMpr7X);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= P0HVchiMpr7X) {
            gets (EWXlz7u5);
            uOz83I = strlen (EWXlz7u5);
            if ((EWXlz7u5[0] == '_') || ((EWXlz7u5[0] >= 'a' && EWXlz7u5[0] <= 'z') || (EWXlz7u5[0] >= 'A' && EWXlz7u5[0] <= 'Z')))
                aM0rRxp = 1;
            else
                aM0rRxp = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (aM0rRxp) {
                for (j = 1; j < uOz83I; j++) {
                    if ((EWXlz7u5[j] == '_') || ((EWXlz7u5[j] >= 'a' && EWXlz7u5[j] <= 'z') || (EWXlz7u5[j] >= 'A' && EWXlz7u5[j] <= 'Z')) || (EWXlz7u5[j] >= '0' && EWXlz7u5[j] <= '9'))
                        aM0rRxp = 1;
                    else {
                        aM0rRxp = 0;
                        break;
                    };
                };
            }
            i++;
            if (aM0rRxp)
                ;
            else
                ;
        };
    };
}

