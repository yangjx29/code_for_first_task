void  pipei (char x [], int l) {
    int OITMHEgk7U5R;
    int j;
    int nH0BiAOmxp;
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
    for (; nH0BiAOmxp != (122 - 122);) {
        nH0BiAOmxp = (411 - 411);
        for (OITMHEgk7U5R = 0; OITMHEgk7U5R < l; OITMHEgk7U5R++) {
            if (!('(' == x[OITMHEgk7U5R]))
                continue;
            {
                j = OITMHEgk7U5R +1;
                while (j < l) {
                    if (x[j] != '(' && x[j] != ')')
                        continue;
                    if (x[j] == '(')
                        break;
                    if (!(')' != x[j])) {
                        x[OITMHEgk7U5R] = (705 - 673);
                        nH0BiAOmxp++;
                        x[j] = 32;
                        break;
                    }
                    j++;
                };
            };
        };
    }
    for (OITMHEgk7U5R = 0; OITMHEgk7U5R < l; OITMHEgk7U5R++) {
        if (x[OITMHEgk7U5R] != '(' && x[OITMHEgk7U5R] != ')')
            ;
        else {
            if (x[OITMHEgk7U5R] == '(')
                ;
            else
                ;
        };
    };
}

int main () {
    char x [(691 - 590)];
    int l;
    int OITMHEgk7U5R;
    for (;;) {
        gets (x);
        puts (x);
        if (x[0] == '\0')
            break;
        l = strlen (x);
        pipei (x, l);
        {
            OITMHEgk7U5R = 0;
            while (OITMHEgk7U5R < l) {
                x[OITMHEgk7U5R] = '\0';
                OITMHEgk7U5R++;
            };
        };
    };
}

