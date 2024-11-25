int main () {
    char s [1000];
    gets (s);
    int x;
    int GSk0gEbT;
    int UgOo7s;
    int j;
    char s1 [10];
    int m;
    int i;
    int n;
    gets (s);
    m = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (strlen (s) > i) {
            x = 0;
            {
                j = 0;
                while (n > j) {
                    s1[j] = s[j + i];
                    j = j + 1;
                }
            }
            {
                j = i;
                while (strlen (s) > j) {
                    UgOo7s = 0;
                    {
                        GSk0gEbT = 0;
                        while (GSk0gEbT < n) {
                            if (s[j + GSk0gEbT] != s1[GSk0gEbT])
                                UgOo7s = 1;
                            GSk0gEbT = GSk0gEbT +1;
                        }
                    }
                    if (!(0 != UgOo7s))
                        x++;
                    j = j + 1;
                }
            }
            i++;
            if (x > m)
                m = x;
        }
    }
    if (1 >= m)
        ;
    else {
        printf ("%d\n", m);
        {
            i = 0;
            while (i < strlen (s)) {
                {
                    j = 0;
                    while (j < n) {
                        s1[j] = s[j + i];
                        j++;
                    }
                }
                x = 0;
                s1[n] = '\0';
                for (j = i; j < strlen (s); j = j + 1) {
                    UgOo7s = 0;
                    for (GSk0gEbT = 0; GSk0gEbT < n; GSk0gEbT++)
                        if (s[j + GSk0gEbT] != s1[GSk0gEbT])
                            UgOo7s = 1;
                    if (UgOo7s == 0)
                        x++;
                }
                if (x == m)
                    puts (s1);
                i++;
            }
        }
    }
}

