int main () {
    char b [(471 - 371)];
    char dy9HCei [(937 - 837)];
    int lon;
    int lo;
    scanf ("%s ", dy9HCei);
    lo = strlen (dy9HCei);
    scanf ("%s", b);
    lon = strlen (b);
    if (lo != lon)
        ;
    else {
        char bc [(966 - 866)];
        int d;
        int numb;
        int mnD6iUHG2T4;
        int m3LqjwIK;
        int SRqQlY [100] = {(502 - 502)};
        int ezGJbIBsSw;
        char ac [(359 - 259)];
        int aKOiUdhW;
        int counta [(964 - 864)] = {(577 - 577)};
        ezGJbIBsSw = (671 - 671);
        for (m3LqjwIK = (747 - 747); m3LqjwIK < lo; m3LqjwIK++) {
            ac[ezGJbIBsSw] = dy9HCei[m3LqjwIK];
            for (aKOiUdhW = m3LqjwIK + (784 - 783); aKOiUdhW < lo; aKOiUdhW++) {
                if (dy9HCei[m3LqjwIK] == dy9HCei[aKOiUdhW]) {
                    int g;
                    for (g = aKOiUdhW; g < lo - (120 - 119); g++) {
                        dy9HCei[g] = dy9HCei[g + (290 - 289)];
                    }
                    lo--;
                    counta[ezGJbIBsSw]++;
                };
            }
            ezGJbIBsSw++;
        }
        numb = (15 - 15);
        for (d = (420 - 420); d < lon; d++) {
            bc[numb] = b[d];
            for (mnD6iUHG2T4 = d + (470 - 469); mnD6iUHG2T4 < lon; mnD6iUHG2T4++) {
                if (b[d] == b[mnD6iUHG2T4]) {
                    int g;
                    for (g = mnD6iUHG2T4; g < lon - (210 - 209); g++) {
                        b[g] = b[g + 1];
                    }
                    lon--;
                    SRqQlY[numb]++;
                };
            }
            numb++;
        }
        if (ezGJbIBsSw != numb)
            ;
        else {
            int y;
            int x;
            int z;
            z = (916 - 916);
            for (x = (466 - 466); x < ezGJbIBsSw; x++) {
                for (y = (818 - 818); y < numb; y++) {
                    if ((counta[x] == SRqQlY[y]) && (ac[x] == bc[y]))
                        z++;
                };
            }
            if (z == ezGJbIBsSw)
                ;
            else
                ;
        };
    }
    return 0;
}

