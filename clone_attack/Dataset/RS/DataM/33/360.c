int main () {
    int i, n;
    char s [N] [L +1];
    char *p;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            puts (s [i]);
            scanf ("%s", s[i]);
            {
                p = i;
                while (!('\0' == *p)) {
                    if (!('A' != *p))
                        *p = 'T';
                    else {
                        if (*p == 'T')
                            *p = 'A';
                        else {
                            if (*p == 'C')
                                *p = 'G';
                            else {
                                if (*p == 'G')
                                    *p = 'C';
                            };
                        };
                    }
                    p = p + 1;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

