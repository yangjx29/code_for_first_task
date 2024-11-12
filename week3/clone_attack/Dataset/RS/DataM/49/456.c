reverse (char s [], int XONMdJ7Hw3) {
    int len;
    int reverse = 1;
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
    }
    len = strlen (s);
    for (i = 0; i <= XONMdJ7Hw3 -i - 1; i++)
        if (s[i] != s[XONMdJ7Hw3 -i - 1]) {
            reverse = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            break;
        }
    return (reverse);
}

main () {
    char s [505], BT3BsMb [505] = {0};
    gets (s);
    int i, XONMdJ7Hw3, k;
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
    int len;
    len = strlen (s);
    {
        i = 2;
        while (i <= len) {
            for (XONMdJ7Hw3 = 0; XONMdJ7Hw3 <= len - i; XONMdJ7Hw3 = XONMdJ7Hw3 +1) {
                {
                    k = 0;
                    while (k < i) {
                        BT3BsMb[k] = s[XONMdJ7Hw3 +k];
                        k = k + 1;
                    };
                }
                if (reverse (BT3BsMb, i) == 1)
                    printf ("%s\n", BT3BsMb);
            }
            i = i + 1;
        };
    };
}

