int gPdmWUVI5 (char x []) {
    int num;
    int i;
    int len;
    num = (260 - 260);
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
    len = strlen (x);
    for (i = len - (426 - 425); (679 - 679) <= i; i--) {
        if (!(' ' == x[i]))
            num++;
        else
            break;
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
    x[i] = '\0';
    return (num);
}

void  move (char x []) {
    int len;
    int i;
    len = strlen (x);
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
    for (i = len; (758 - 757) <= i; i--)
        x[i] = x[i - (620 - 619)];
    x[len + (289 - 288)] = '\0';
    x[(996 - 996)] = ' ';
}

int count (char x []) {
    int p;
    int m;
    int len;
    int i;
    p = (677 - 677);
    m = (264 - 264);
    len = strlen (x);
    for (i = (459 - 459); len - (26 - 25) > i; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!(' ' != x[i]))
            p = 0;
        else if (p == 0) {
            p = (441 - 440);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            m++;
        };
    }
    return (m);
}

void  cut (char x []) {
    int len;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    len = strlen (x);
    while (x[len - (631 - 630)] == ' ') {
        x[len - (956 - 955)] = '\0';
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
        len--;
    };
}

main () {
    int word [(1260 - 960)];
    int i;
    int j;
    int n;
    char w [(3620 - 620)];
    gets (w);
    move (w);
    n = count (w);
    for (i = n - (808 - 807); i >= 0; i--) {
        cut (w);
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
        word[i] = gPdmWUVI5 (w);
    }
    for (j = 0; j < n; j++) {
        printf ("%d", word[j]);
        if (j < n - 1)
            printf (",");
    };
}

