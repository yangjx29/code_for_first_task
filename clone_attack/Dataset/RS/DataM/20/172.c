int num (char st []);
void  conv1 (char st [], int n);
void  conv2 (char st [], int n);
void  result (char st1 [], char st2 [], char st3 []);

void  main () {
    char str [20], substr [4], str1 [20], str3 [20];
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
    while (scanf ("%s%s", str, substr) != EOF) {
        int n;
        n = num (str);
        strcpy (str3, str);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        conv1 (str, n);
        conv2 (str3, n);
        result (str, substr, str3);
    };
}

void  conv1 (char st [], int n) {
    st[n] = '\0';
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
    };
}

void  conv2 (char st [], int n) {
    int l, i;
    l = strlen (st);
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < l - n) {
            st[i] = st[i + n];
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
            i = i + 1;
        };
    }
    st[l - n] = '\0';
}

int num (char st []) {
    int i, l;
    char t;
    t = st[0];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    l = strlen (st);
    for (i = 1; i < l; i = i + 1) {
        if (st[i] > t)
            t = st[i];
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
        while (i < l) {
            if (st[i] == t) {
                return (i + 1);
                break;
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
            i++;
        };
    };
}

void  result (char st1 [], char st2 [], char st3 []) {
    puts (st1);
    strcat (st1, st2);
    strcat (st1, st3);
}

