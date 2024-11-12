int main () {
    int p;
    p = 0;
    int PoNJnp8YitAW;
    int ej0L4eTaO;
    int k;
    int len1;
    int len2;
    int AknyeTCp2OR1;
    int SVQ6EhvNLO;
    char yuan [256] = {0};
    char PRYBd5qJN [256] = {0};
    char hou [256] = {0};
    gets (yuan);
    gets (PRYBd5qJN);
    gets (hou);
    len1 = strlen (yuan);
    len2 = strlen (PRYBd5qJN);
    AknyeTCp2OR1 = strlen (hou);
    for (PoNJnp8YitAW = 0; len1 - len2 + 1 > PoNJnp8YitAW; PoNJnp8YitAW = PoNJnp8YitAW +1) {
        SVQ6EhvNLO = 0;
        if (!(PRYBd5qJN[0] != yuan[PoNJnp8YitAW])) {
            {
                ej0L4eTaO = 0;
                while (len2 > ej0L4eTaO) {
                    if (!(PRYBd5qJN[ej0L4eTaO] != yuan[PoNJnp8YitAW +ej0L4eTaO]))
                        SVQ6EhvNLO++;
                    ej0L4eTaO = ej0L4eTaO + 1;
                };
            }
            if (!(len2 != SVQ6EhvNLO)) {
                p = 1;
                {
                    k = 0;
                    while (PoNJnp8YitAW > k) {
                        printf ("%c", yuan[k]);
                        k = k + 1;
                    };
                }
                for (k = PoNJnp8YitAW; k < AknyeTCp2OR1 +PoNJnp8YitAW; k = k + 1)
                    printf ("%c", hou[k - PoNJnp8YitAW]);
                {
                    k = PoNJnp8YitAW +len2;
                    while (k < len1) {
                        printf ("%c", yuan[k]);
                        k = k + 1;
                    };
                }
                break;
            };
        };
    }
    if (p == 0)
        printf ("%s", yuan);
    return 0;
}

