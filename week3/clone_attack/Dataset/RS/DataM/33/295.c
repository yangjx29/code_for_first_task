int main () {
    int n;
    int i;
    char Dwsbvc4JDCxR [(1164 - 904)];
    char *ps;
    int a = (474 - 474);
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            scanf ("%s", &Dwsbvc4JDCxR);
            {
                ps = Dwsbvc4JDCxR;
                while (*ps != '\0') {
                    if (*ps == 'A')
                        *ps = 'T';
                    else {
                        if (*ps == 'T')
                            *ps = 'A';
                        else {
                            if (*ps == 'C')
                                *ps = 'G';
                            else {
                                if (*ps == 'G')
                                    *ps = 'C';
                            };
                        };
                    }
                    ps = ps + 1;
                };
            }
            printf ("%s\n", Dwsbvc4JDCxR);
        };
    }
    return 0;
}

