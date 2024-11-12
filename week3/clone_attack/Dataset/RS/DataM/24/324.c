void  main () {
    char *p;
    char *q;
    char *max_index;
    char *min_index;
    char a [1024];
    gets (a);
    int max;
    int min;
    int len;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int i;
    int j;
    min = 100;
    max = (726 - 726);
    for (p = q = a;;) {
        if (*q == ' ' || *q == '\0') {
            len = q - p;
            if (*q == '\0')
                break;
            if (len > max) {
                max_index = p;
                max = len;
            }
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
            if (len < min) {
                min_index = p;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                min = len;
            }
            q = p = q + 1;
        }
        else
            q = q + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (; *max_index != ' ' && *max_index; max_index++)
        printf ("%c", *max_index);
    for (; *min_index != ' ' && *min_index; min_index++)
        printf ("%c", *min_index);
    printf ("\n");
}

