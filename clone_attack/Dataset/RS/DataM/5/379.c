int main () {
    char s1 [(787 - 282)], s2 [(551 - 46)];
    double  n, m = (900 - 900), len1, len2, flag = (121 - 121);
    int i;
    scanf ("%lf", &n);
    scanf ("%s", s1);
    scanf ("%s", s2);
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
    len1 = strlen (s1);
    len2 = strlen (s2);
    {
        i = 0;
        while (i < len1) {
            if ((!('A' != s1[i])) || (!('T' != s1[i])) || (!('C' != s1[i])) || (s1[i] == 'G'))
                continue;
            else {
                flag = 1;
                break;
            }
            i++;
        };
    }
    {
        i = 0;
        while (len2 > i) {
            if ((s2[i] == 'A') || (s2[i] == 'T') || (s2[i] == 'C') || (s2[i] == 'G'))
                continue;
            else {
                flag = 1;
                break;
            }
            i++;
        };
    }
    if ((len1 != len2) || (flag == 1)) {
        printf ("error");
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
    else {
        for (i = 0; i <= len1; i++) {
            if (s1[i] == s2[i]) {
                m++;
            };
        }
        m = m / len1;
        if (m > n)
            ;
        else
            printf ("no");
    }
    return 0;
}

