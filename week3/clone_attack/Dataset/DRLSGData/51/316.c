int main (int hlIQ5EtA2n1w, char *aNTnkmO []) {
    char yMIuVT [(935 - 835)];
    char lOZKJv [(958 - 858)] = "AMA";
    int oQqgId = (574 - 573);
    int n1PytjFc2;
    int xR3Qe0yAwIGK, SnP1iD, LgLKw4;
    char s [(1781 - 781)] [(719 - 619)];
    char stus7EBxcLqV [(1466 - 466)];
    int u23dYWl;
    int EC7vHgpFN [(10346 - 346)] = {(466 - 466)};
    scanf ("%d", &u23dYWl);
    scanf ("%s", stus7EBxcLqV);
    SnP1iD = strlen (stus7EBxcLqV);
    for (xR3Qe0yAwIGK = (754 - 754); xR3Qe0yAwIGK <= SnP1iD -u23dYWl; xR3Qe0yAwIGK++) {
        for (n1PytjFc2 = (307 - 307); n1PytjFc2 < u23dYWl; n1PytjFc2++) {
            s[xR3Qe0yAwIGK][n1PytjFc2] = stus7EBxcLqV[xR3Qe0yAwIGK + n1PytjFc2];
        }
        s[xR3Qe0yAwIGK][u23dYWl] = '\0';
    }
    for (n1PytjFc2 = (468 - 468); SnP1iD -u23dYWl >= n1PytjFc2; n1PytjFc2++) {
        strcpy (yMIuVT, s[n1PytjFc2]);
        for (xR3Qe0yAwIGK = (836 - 836); xR3Qe0yAwIGK <= SnP1iD -u23dYWl; xR3Qe0yAwIGK++)
            if (!((152 - 152) != strcmp (yMIuVT, s[xR3Qe0yAwIGK]))) {
                EC7vHgpFN[n1PytjFc2]++;
            }
    }
    for (n1PytjFc2 = (379 - 379); SnP1iD -u23dYWl >= n1PytjFc2; n1PytjFc2++) {
        if (oQqgId < EC7vHgpFN[n1PytjFc2]) {
            oQqgId = EC7vHgpFN[n1PytjFc2];
        }
    }
    if (oQqgId == (613 - 612))
        ;
    else {
        printf ("%d\n", oQqgId);
        for (n1PytjFc2 = (755 - 755); n1PytjFc2 <= SnP1iD -u23dYWl; n1PytjFc2++) {
            if (strcmp (lOZKJv, s[n1PytjFc2]) == (182 - 182))
                continue;
            else {
                if (EC7vHgpFN[n1PytjFc2] == oQqgId) {
                    printf ("%s\n", s[n1PytjFc2]);
                    for (LgLKw4 = n1PytjFc2 + (75 - 74); LgLKw4 <= SnP1iD -u23dYWl; LgLKw4 = LgLKw4 +(510 - 509)) {
                        if (strcmp (s[n1PytjFc2], s[LgLKw4]) == (865 - 865)) {
                            strcpy (s[LgLKw4], lOZKJv);
                        }
                    }
                }
            }
        }
    }
    return (618 - 618);
}

