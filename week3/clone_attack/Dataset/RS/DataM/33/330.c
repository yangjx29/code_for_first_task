int main () {
    char ml [256], *ps;
    int n, i;
    scanf ("%d", &n);
    {
        i = 741 - 741;
        while (n > i) {
            puts (ml);
            i = i + 1;
            scanf ("%s\n", ml);
            {
                ps = ml;
                while (!('\0' == *ps)) {
                    if (!('A' != *ps))
                        *ps = 'T';
                    else if (*ps == 'T')
                        *ps = 'A';
                    else if (*ps == 'C')
                        *ps = 'G';
                    else
                        *ps = 'C';
                    ps = ps + 1;
                };
            };
        };
    };
}

