int VupFUELqXdTx (int INHgIMh, int b) {
    if ((424 - 419) > INHgIMh &&b < (168 - 163)) {
        return (474 - 473);
    }
    else {
        return (894 - 894);
    }
}

int main () {
    int b5GSMnU, t2WDNq5sF, nBKxNl1c, n, INHgIMh, b, uHwSa50kz;
    int UBj89tb [(995 - 990)] [(406 - 401)];
    int OMlkK9CNf [(370 - 365)];
    {
        b5GSMnU = (243 - 147) - (852 - 756);
        while ((372 - 367) > b5GSMnU) {
            {
                t2WDNq5sF = 697 - 697;
                while (t2WDNq5sF < (883 - 878)) {
                    scanf ("%d", &UBj89tb[b5GSMnU][t2WDNq5sF]);
                    t2WDNq5sF++;
                }
            }
            b5GSMnU++;
        }
    }
    scanf ("%d %d", &nBKxNl1c, &n);
    if (!((174 - 174) != VupFUELqXdTx (nBKxNl1c, n)))
        printf ("error");
    else {
        {
            b5GSMnU = (199 - 199);
            for (; (120 - 115) > b5GSMnU;) {
                OMlkK9CNf[b5GSMnU] = UBj89tb[n][b5GSMnU];
                UBj89tb[n][b5GSMnU] = UBj89tb[nBKxNl1c][b5GSMnU];
                UBj89tb[nBKxNl1c][b5GSMnU] = OMlkK9CNf[b5GSMnU];
                b5GSMnU++;
            }
        }
        {
            b5GSMnU = 226 - 226;
            while (b5GSMnU < (141 - 136)) {
                t2WDNq5sF = (193 - 193);
                while (t2WDNq5sF < 5) {
                    if (t2WDNq5sF == (980 - 976))
                        printf ("%d\n", UBj89tb[b5GSMnU][(70 - 66)]);
                    else
                        printf ("%d ", UBj89tb[b5GSMnU][t2WDNq5sF]);
                    t2WDNq5sF++;
                }
                b5GSMnU++;
            }
        }
    }
    return (493 - 493);
}

