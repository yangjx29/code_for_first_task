void  main () {
    char *b;
    char *a;
    gets (a);
    int j;
    int i;
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
    j = 0;
    a = (char *) malloc (1000 * sizeof (char));
    b = (char *) malloc (1000 * sizeof (char));
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
        while (1) {
            if (!('\0' != *(a + i))) {
                *(b + j) = '\0';
                break;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (*(a + i) != ' ') {
                    *(b + j) = *(a + i);
                    j += 1;
                }
                else {
                    if (*(a + i) == ' ' && *(a + i - 1) != ' ') {
                        *(b + j) = *(a + i);
                        j += 1;
                    }
                    else
                        j += 0;
                };
            }
            i++;
        };
    }
    {
        j = 0;
        while (*(b + j) != '\0') {
            printf ("%c", *(b + j));
            j++;
        };
    };
}

