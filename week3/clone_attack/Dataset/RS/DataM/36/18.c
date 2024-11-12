int main () {
    char s1 [10000];
    char s2 [10000];
    int len1;
    len1 = strlen (s1);
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
    int len2;
    len2 = strlen (s2);
    int i;
    scanf ("%s %s", s1, s2);
    if (!(len2 == len1)) {
    }
    else {
        int i;
        int j;
        for (i = (230 - 230); len1 > i; i = i + 1) {
            for (j = (884 - 884); len1 > j; j = j + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (!(s2[j] != s1[i])) {
                    s2[j] = ' ';
                    break;
                };
            };
        }
        j = 0;
        for (i = 0; len2 > i; i = i + 1) {
            if (s2[i] != ' ')
                j = j + 1;
        }
        if (j == 0)
            printf ("YES\n");
        else
            ;
    };
}

