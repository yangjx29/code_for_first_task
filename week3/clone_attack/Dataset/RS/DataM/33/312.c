int main () {
    char bJr3KNRu4Ph, l [(1550 - 550)] [256];
    int n, NwrY8GSBd0, IJ7HoOUl;
    scanf ("%d", &n);
    {
        NwrY8GSBd0 = 476 - 476;
        while (n > NwrY8GSBd0) {
            scanf ("%s", l[NwrY8GSBd0]);
            NwrY8GSBd0 = NwrY8GSBd0 +1;
        };
    }
    for (NwrY8GSBd0 = (821 - 821); NwrY8GSBd0 < n; NwrY8GSBd0++) {
        for (IJ7HoOUl = 0; (bJr3KNRu4Ph = l[NwrY8GSBd0][IJ7HoOUl]) != '\0'; IJ7HoOUl++) {
            if (l[NwrY8GSBd0][IJ7HoOUl] == 'A') {
                l[NwrY8GSBd0][IJ7HoOUl] = 'T';
            }
            else {
                if (l[NwrY8GSBd0][IJ7HoOUl] == 'T') {
                    l[NwrY8GSBd0][IJ7HoOUl] = 'A';
                };
            }
            if (l[NwrY8GSBd0][IJ7HoOUl] == 'C') {
                l[NwrY8GSBd0][IJ7HoOUl] = 'G';
            }
            else {
                if (l[NwrY8GSBd0][IJ7HoOUl] == 'G') {
                    l[NwrY8GSBd0][IJ7HoOUl] = 'C';
                };
            };
        };
    }
    for (NwrY8GSBd0 = 0; NwrY8GSBd0 < n; NwrY8GSBd0++)
        printf ("%s\n", l[NwrY8GSBd0]);
    return 0;
}

