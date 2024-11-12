int main () {
    int hCL59h;
    int Uo3iqLlzcF4;
    char PcrKIB [(519 - 459)] [(1017 - 977)];
    int auCvJM;
    scanf ("%d", &Uo3iqLlzcF4);
    {
        hCL59h = (891 - 891);
        for (; hCL59h < Uo3iqLlzcF4;) {
            scanf ("%s", PcrKIB[hCL59h]);
            auCvJM = strlen (PcrKIB[hCL59h]) - 1;
            if (((!('e' != PcrKIB[hCL59h][auCvJM - 1])) && (!('r' != PcrKIB[hCL59h][auCvJM]))) || ((!('l' != PcrKIB[hCL59h][auCvJM - 1])) && (!('y' != PcrKIB[hCL59h][auCvJM])))) {
                PcrKIB[hCL59h][auCvJM - 1] = '\0';
            }
            else {
                PcrKIB[hCL59h][auCvJM - (618 - 616)] = '\0';
            }
            hCL59h = hCL59h + 1;
        }
    }
    {
        hCL59h = 0;
        for (; hCL59h < Uo3iqLlzcF4;) {
            printf ("%s\n", PcrKIB[hCL59h]);
            hCL59h = hCL59h + 1;
        }
    }
    return 0;
}

