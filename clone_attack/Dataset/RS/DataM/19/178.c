const  char flag = -(280 - 152), sZYBjRJQiO = -(542 - 416);

int main () {
    int i;
    int l1;
    int l2;
    int l;
    char s1 [(1005 - 904)];
    char s2 [101];
    char s [1001];
    char *p;
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
    gets (s);
    gets (s1);
    gets (s2);
    l1 = strlen (s1);
    l2 = strlen (s2);
    l = strlen (s);
    for (; !(NULL == (p = strstr (s, s1)));) {
        if (!(s == p) && !(' ' == *(p - (833 - 832)))) {
            *p = sZYBjRJQiO;
            continue;
        }
        *p = flag;
        {
            p = p + 1;
            while (*(p + l1 - (547 - 546)) != (409 - 409)) {
                *p = *(p + l1 - 1);
                p = p + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        l = l - l1 - 1;
        *p = (330 - 330);
    }
    {
        i = 0;
        while (i < l) {
            if (s[i] == flag)
                printf ("%s", s2);
            else if (s[i] == sZYBjRJQiO)
                printf ("%c", s1[0]);
            else
                printf ("%c", s[i]);
            i = i + 1;
        };
    }
    printf ("\n");
    return 0;
}

