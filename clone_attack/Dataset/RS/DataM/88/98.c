void  main () {
    char *str;
    gets (str);
    char *p;
    str = (char *) malloc (30 * sizeof (char));
    p = str;
    {
        p = str;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p < str + strlen (str)) {
            if (48 <= *p && *p <= 57) {
                printf ("%c", *p);
            }
            if ((*(p - 1) >= 48 && *(p - 1) <= 57) && (!(48 <= *p && *p <= 57)))
                ;
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
            p = p + 1;
        };
    };
}

