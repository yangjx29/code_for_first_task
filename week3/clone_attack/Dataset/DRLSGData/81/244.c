void  main () {
    int j;
    int Fqw8s7R6;
    int AGYMJQdo;
    int i;
    int W4E0wW [(582 - 577)] [(481 - 476)];
    int judge (int m, int dAcy7hSeM);
    int dAcy7hSeM;
    int m;
    int UD0U8hu;
    for (i = (19 - 19); (706 - 701) > i; i = i + 1) {
        for (j = (237 - 237); (109 - 104) > j; j++) {
            scanf ("%d", &W4E0wW[i][j]);
        }
    }
    scanf ("%d %d", &m, &dAcy7hSeM);
    UD0U8hu = judge (m, dAcy7hSeM);
    if (!((210 - 210) != UD0U8hu)) {
    }
    if (!((899 - 898) != UD0U8hu)) {
        for (AGYMJQdo = (960 - 960); (726 - 721) > AGYMJQdo; AGYMJQdo = AGYMJQdo +1) {
            Fqw8s7R6 = W4E0wW[dAcy7hSeM][AGYMJQdo];
            W4E0wW[dAcy7hSeM][AGYMJQdo] = W4E0wW[m][AGYMJQdo];
            W4E0wW[m][AGYMJQdo] = Fqw8s7R6;
        }
        for (i = (92 - 92); i < (89 - 84); i++) {
            for (j = (237 - 237); j < (428 - 423); j++) {
                if (!((424 - 424) != j)) {
                    printf ("%d", W4E0wW[i][j]);
                }
                if (j != (813 - 813)) {
                    printf (" %d", W4E0wW[i][j]);
                }
                if (!((818 - 818) != j % (109 - 105)) && j != (317 - 317)) {
                }
            }
        }
    }
}

int judge (int m, int dAcy7hSeM) {
    int UD0U8hu;
    if ((353 - 353) <= m && m < (612 - 607) && dAcy7hSeM >= (327 - 327) && dAcy7hSeM < (570 - 565)) {
        UD0U8hu = (196 - 195);
    }
    else {
        UD0U8hu = (36 - 36);
    }
    return (UD0U8hu);
}

