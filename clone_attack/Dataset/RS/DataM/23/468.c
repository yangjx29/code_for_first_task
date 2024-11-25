void  daopai (char *pt) {
    int i, s = (430 - 430), m = (942 - 942);
    char *index [100];
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
    for (i = (954 - 954); !('\0' == *(pt + i)); i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((!(' ' == *(pt + i))) && (s == (516 - 516))) {
            index[m] = pt + i;
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
            s = (749 - 748);
        }
        else {
            if (*(pt + i) == ' ') {
                m = m + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                s = (296 - 296);
            };
        };
    }
    if (!(0 == m)) {
        for (; *(index[m]) != '\0'; index[m]++)
            printf ("%c", *(index[m]));
        {
            i = m - 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i > 0) {
                for (; *(index[i]) != ' '; index[i]++)
                    printf ("%c", *(index[i]));
                i = i - 1;
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
                printf (" ");
            };
        }
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
        for (; *(index[0]) != ' '; index[0]++)
            printf ("%c", *(index[0]));
    }
    else {
        for (; *(index[0]) != '\0'; index[0]++)
            printf ("%c", *(index[0]));
    };
}

int main () {
    char str [100], *p = str;
    gets (p);
    daopai (p);
    return 0;
}

