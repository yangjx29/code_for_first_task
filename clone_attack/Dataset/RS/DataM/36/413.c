int main () {
    char s1 [255];
    char s2 [255];
    int s;
    int i;
    int j;
    int rmhzRr;
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
    s = 0;
    scanf ("%s%s", &s1, &s2);
    rmhzRr = strlen (s2);
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
        while (strlen (s1) > i) {
            {
                j = 0;
                while (rmhzRr > j) {
                    if (!(s2[j] != s1[i])) {
                        s++, s2[j] = 0;
                        break;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    if (rmhzRr > s || strlen (s1) != rmhzRr)
        printf ("NO");
    else
        ;
    return 0;
}

