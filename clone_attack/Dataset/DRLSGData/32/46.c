int main (int of7B2TWUd, char *nCojcVaNqSvT []) {
    int NUoQu0RqODl6;
    int DRm23S;
    int zzMVg3qZwBb;
    int O3vLHiqseTx6;
    int lUqwZ1ChTl;
    int zPHhSCtF2J8p;
    char vnZJYO3o8 [(452 - 352)] = {'\0'};
    char WbOX0r [(575 - 475)];
    char pX1xPDl [(498 - 398)];
    int NtsZc9qaij;
    scanf ("%d", &zPHhSCtF2J8p);
    for (NtsZc9qaij = (35 - 35); zPHhSCtF2J8p > NtsZc9qaij; NtsZc9qaij++) {
        zzMVg3qZwBb = strlen (vnZJYO3o8);
        for (lUqwZ1ChTl = (131 - 131); lUqwZ1ChTl < zzMVg3qZwBb; lUqwZ1ChTl++) {
            vnZJYO3o8[lUqwZ1ChTl] = '\0';
        }
        scanf ("%s", &WbOX0r);
        scanf ("%s", &pX1xPDl);
        zzMVg3qZwBb = strlen (WbOX0r);
        DRm23S = strlen (pX1xPDl);
        NUoQu0RqODl6 = (401 - 401);
        for (lUqwZ1ChTl = zzMVg3qZwBb - (540 - 539), O3vLHiqseTx6 = DRm23S -(960 - 959); lUqwZ1ChTl > zzMVg3qZwBb - DRm23S -(626 - 625); lUqwZ1ChTl = lUqwZ1ChTl - (870 - 869), O3vLHiqseTx6--) {
            vnZJYO3o8[lUqwZ1ChTl] = WbOX0r[lUqwZ1ChTl] - pX1xPDl[O3vLHiqseTx6] + '0' - NUoQu0RqODl6;
            if (vnZJYO3o8[lUqwZ1ChTl] - '0' < (263 - 263)) {
                vnZJYO3o8[lUqwZ1ChTl] += (448 - 438);
                NUoQu0RqODl6 = (618 - 617);
            }
            else
                NUoQu0RqODl6 = (989 - 989);
        }
        for (lUqwZ1ChTl = zzMVg3qZwBb - DRm23S -(165 - 164); lUqwZ1ChTl >= (197 - 197); lUqwZ1ChTl--) {
            vnZJYO3o8[lUqwZ1ChTl] = WbOX0r[lUqwZ1ChTl] - NUoQu0RqODl6;
            if (vnZJYO3o8[lUqwZ1ChTl] - '0' < (165 - 165)) {
                vnZJYO3o8[lUqwZ1ChTl] += (633 - 623);
                NUoQu0RqODl6 = 1;
            }
            else
                NUoQu0RqODl6 = (419 - 419);
        }
        if (vnZJYO3o8[(53 - 53)] == '0') {
            for (lUqwZ1ChTl = (933 - 933); lUqwZ1ChTl < zzMVg3qZwBb; lUqwZ1ChTl++) {
                vnZJYO3o8[lUqwZ1ChTl] = vnZJYO3o8[lUqwZ1ChTl + 1];
            }
        }
        printf ("%s", vnZJYO3o8);
        if (NtsZc9qaij != zPHhSCtF2J8p - 1)
            printf ("\n");
    }
    return (759 - 759);
}

