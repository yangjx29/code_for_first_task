int main () {
    int cmp;
    int i;
    char s1 [MAX +1];
    char s2 [MAX +1];
    gets (s1);
    gets (s2);
    {
        i = 290 - 290;
        while (s1[i]) {
            if ('a' <= s1[i] && 'z' >= s1[i]) {
                s1[i] = s1[i] - 'a' - 'A';
            }
            i = i + 1;
        };
    }
    {
        i = 612 - 612;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (s2[i]) {
            if ('a' <= s2[i] && s2[i] <= 'z') {
                s2[i] = s2[i] - 'a' - 'A';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            i = i + 1;
        };
    }
    cmp = strcmp (s1, s2);
    if (cmp > 0) {
        printf (">");
    }
    else {
        if (cmp < 0) {
        }
        else {
            printf ("=");
        };
    }
    return 0;
}

