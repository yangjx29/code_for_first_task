void  main () {
    char str [30], *a;
    gets (str);
    a = str;
    for (; str + 30 > a; a = a + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (('0' <= *a) && ('9' >= *a)) {
            printf ("%c", *a);
            a++;
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
            break;
        };
    }
    for (; a < str + 30; a++) {
        if (((*a >= '0') && ('9' >= *a)) && (('0' <= *(a - 1)) && (*(a - 1) <= '9')))
            printf ("%c", *a);
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (((*a >= '0') && (*a <= '9')) && ((*(a - 1) < '0') || (*(a - 1) > '9'))) {
                printf ("%c", *a);
                printf ("\n");
            };
        };
    };
}

