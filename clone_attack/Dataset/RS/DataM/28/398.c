void  main () {
    char s [(10181 - 181)];
    int n;
    int i;
    int sum;
    int sBX3GtUWMiIV;
    gets (s);
    sBX3GtUWMiIV = (587 - 586);
    n = strlen (s);
    for (i = (726 - 726); n > i; i++) {
        if (!(' ' != s[i]))
            sBX3GtUWMiIV = (284 - 284);
    }
    if (sBX3GtUWMiIV) {
        printf ("%d", n);
    }
    else {
        {
            i = 0;
            sum = 0;
            while (!('\0' == s[i])) {
                if (s[i] != ' ') {
                    sum++;
                }
                else {
                    if (s[i] == ' ' && sum != 0) {
                        printf ("%d,", sum);
                        sum = 0;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = n - 1;
            sum = 0;
            while (1) {
                if (s[i] == ' ') {
                    break;
                }
                else
                    sum++;
                i--;
            };
        }
        printf ("%d", sum);
    };
}

