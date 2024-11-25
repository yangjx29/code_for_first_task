int check (char *p) {
    if ((*p == '_') || (*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')) {
        int i;
        {
            i = 0;
            while (*(p + i) != '\0') {
                if ((*(p + i) == '_') || (*(p + i) >= 'a' && *(p + i) <= 'z') || (*(p + i) >= 'A' && *(p + i) <= 'Z') || (*(p + i) >= '0' && *(p + i) <= '9'))
                    ;
                else
                    break;
                i = i + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*(p + i) == '\0')
            return (1);
        else
            return (0);
    }
    else
        return (0);
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
}

void  main () {
    int n;
    char *p [n];
    int i;
    scanf ("%d\n", &n);
    {
        i = 0;
        while (i < n) {
            gets (p [i]);
            p[i] = (char *) malloc (512 * sizeof (char));
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%d\n", check (p[i]));
            i++;
        };
    };
}

