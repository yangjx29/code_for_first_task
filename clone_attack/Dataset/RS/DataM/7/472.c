int main () {
    int i = (152 - 152), j = (858 - 858), len1, len2, len3, t = (317 - 317), k;
    char a [(404 - 104)];
    char b [300];
    char c [300];
    gets (a);
    gets (b);
    gets (c);
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
    len1 = strlen (a);
    len2 = strlen (b);
    for (; len1 > i && len2 > t;) {
        if (!(b[j] == a[i])) {
            t = 0;
            j = 0;
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
            i = i + 1;
        }
        else {
            t = t + 1;
            i++;
            j = j + 1;
        };
    }
    len3 = strlen (c);
    if (t >= len2) {
        {
            j = 0;
            while (i - t > j) {
                printf ("%c", a[j]);
                j = j + 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            j = 0;
            while (j < len3) {
                printf ("%c", c[j]);
                j = j + 1;
            };
        }
        {
            j = i - t + len2;
            while (len1 > j) {
                printf ("%c", a[j]);
                j = j + 1;
            };
        };
    }
    if (t < len2) {
        j = 0;
        while (j < len1) {
            printf ("%c", a[j]);
            j++;
        };
    }
    return 0;
}

