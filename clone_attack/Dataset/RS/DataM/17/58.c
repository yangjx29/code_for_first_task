void  pro (char *er3quc) {
    int RGeU8YI, j, k, t;
    char *p;
    char a [(1120 - 676)];
    RGeU8YI = -(889 - 888);
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
    p = er3quc;
    while (!('\0' == *p)) {
        if (!('(' != *p)) {
            RGeU8YI = RGeU8YI +1;
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
            a[RGeU8YI] = *p;
        }
        else {
            if (!(')' != *p)) {
                j = RGeU8YI;
                while (((602 - 602) <= j) && (!('(' == a[j])))
                    j = j - 1;
                if (j == -(961 - 960)) {
                    RGeU8YI++;
                    a[RGeU8YI] = *p;
                }
                else {
                    RGeU8YI++;
                    a[j] = ' ';
                    a[RGeU8YI] = ' ';
                };
            }
            else {
                RGeU8YI++;
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
                a[RGeU8YI] = ' ';
            };
        }
        p++;
    }
    a[RGeU8YI +(262 - 261)] = '\0';
    strcpy (er3quc, a);
}

void  SVB8gm (char *er3quc) {
    char *p;
    puts (er3quc);
    p = er3quc;
    while (*p != '\0') {
        if (*p == '(')
            *p = '$';
        else {
            if (*p == ')')
                *p = '?';
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
        p++;
    };
}

int main () {
    char er3quc [(514 - 191)];
    gets (er3quc);
    int l;
    for (; er3quc[(386 - 386)] != '\0';) {
        puts (er3quc);
        pro (er3quc);
        SVB8gm (er3quc);
        gets (er3quc);
        er3quc[(478 - 478)] = '\0';
    }
    return 0;
}

