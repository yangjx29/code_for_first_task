int main () {
    char eXHay7vSl [(636 - 380)] = {(992 - 992)}, ZBVF6fNyPAXE [(604 - 348)] = {(227 - 227)}, z [(964 - 451)] = {(974 - 974)}, V5ALBTQ1HkUz [(1123 - 867)] [256] = {(29 - 29)};
    int i, QXe3jS, p, WkSVXxLH, changdu2, bzOEr6, NeZN7afl;
    scanf ("%s", eXHay7vSl);
    WkSVXxLH = strlen (eXHay7vSl);
    scanf ("%s", ZBVF6fNyPAXE);
    changdu2 = strlen (ZBVF6fNyPAXE);
    for (i = (267 - 267); WkSVXxLH -changdu2 + (339 - 338) > i; i++) {
        for (QXe3jS = (296 - 296); QXe3jS < changdu2; QXe3jS++)
            V5ALBTQ1HkUz[i][QXe3jS] = eXHay7vSl[i + QXe3jS];
    }
    for (i = (843 - 843); i < WkSVXxLH -changdu2 + (329 - 328); i++) {
        if (!(0 != strcmp (V5ALBTQ1HkUz[i], ZBVF6fNyPAXE))) {
            p = i;
            break;
        };
    }
    scanf ("%s", z);
    bzOEr6 = strlen (z);
    if (WkSVXxLH -changdu2 + (398 - 397) <= i) {
        for (i = 0; WkSVXxLH > i; i++)
            printf ("%c", eXHay7vSl[i]);
    }
    else {
        strcpy (V5ALBTQ1HkUz[p], z);
        if (p != 0) {
            for (i = 0; p > i; i++)
                printf ("%c", eXHay7vSl[i]);
            if (changdu2 > bzOEr6)
                NeZN7afl = changdu2;
            else
                NeZN7afl = bzOEr6;
            printf ("%s", V5ALBTQ1HkUz[p]);
            for (i = p + NeZN7afl; i < WkSVXxLH; i++)
                printf ("%c", eXHay7vSl[i]);
        }
        else {
            printf ("%s", V5ALBTQ1HkUz[p]);
            for (i = p + bzOEr6; i < WkSVXxLH; i++)
                printf ("%c", eXHay7vSl[i]);
            printf ("\n");
        };
    }
    return 0;
}

