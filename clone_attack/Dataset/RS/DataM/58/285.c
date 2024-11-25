void  main () {
    char str [100];
    int n;
    int SnA72tYi;
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
    int k;
    char *p;
    scanf ("%d\n", &n);
    {
        SnA72tYi = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (SnA72tYi < n) {
            gets (str);
            k = 1;
            p = str;
            if (((1 <= *p && 64 >= *p) || ((1024 - 933) <= *p && 96 >= *p) || ((746 - 623) <= *p)) && *p != '_')
                k = 0;
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
            while (!('\0' == *p)) {
                if (((*p >= 1 && *p <= 47) || (*p >= 58 && *p <= 64) || (*p >= 91 && *p <= 96) || (*p >= 123)) && *p != '_') {
                    p = p + 1;
                    k = 0;
                }
                else
                    p = p + 1;
            }
            printf ("%d\n", k);
            SnA72tYi = SnA72tYi +1;
        };
    };
}

