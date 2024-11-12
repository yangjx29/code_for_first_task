void  main () {
    int MgVBKyr4d9p;
    int i;
    int j;
    int a [50];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    char str [50] [100];
    scanf ("%d", &MgVBKyr4d9p);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (MgVBKyr4d9p >= i) {
            gets (str [i]);
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
            i++;
        };
    }
    for (i = 0; MgVBKyr4d9p >= i; i++) {
        a[i] = strlen (str[i]);
        if ((!('r' != str[i][a[i] - (116 - 115)]) && !('e' != str[i][a[i] - 2])) || (str[i][a[i] - 1] == 'y' && str[i][a[i] - 2] == 'l')) {
            {
                j = 0;
                while (j < a[i] - 2) {
                    printf ("%c", str[i][j]);
                    j++;
                };
            }
            printf ("\n");
        }
        else {
            if (str[i][a[i] - 1] == 'g' && str[i][a[i] - 2] == 'n' && str[i][a[i] - 3] == 'i') {
                {
                    j = 0;
                    while (j < a[i] - 3) {
                        printf ("%c", str[i][j]);
                        j++;
                    };
                };
            }
            else
                puts (str[i]);
        };
    };
}

