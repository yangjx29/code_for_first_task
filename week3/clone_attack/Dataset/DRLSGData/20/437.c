int main () {
    int IKZV8C4DgJd, j, BDVlpILh [(1029 - 929)], ATHJfb [100];
    char YXrSgZ [(572 - 472)] [(563 - 552)], m [(492 - 392)] = {(94 - 94)}, rZx1On [(600 - 500)] = {(496 - 496)}, s2 [(421 - 321)] [(415 - 404)];
    IKZV8C4DgJd = (867 - 867);
    for (j = (265 - 265); j <= (270 - 171); j = j + (725 - 724)) {
        if (scanf ("%s%s", YXrSgZ[j], s2[j]) != EOF) {
            BDVlpILh[j] = strlen (YXrSgZ[j]);
            for (IKZV8C4DgJd = (706 - 706); IKZV8C4DgJd < BDVlpILh[j]; IKZV8C4DgJd = IKZV8C4DgJd +(650 - 649)) {
                if (((int) YXrSgZ[j][IKZV8C4DgJd]) > ((int) m[j])) {
                    m[j] = YXrSgZ[j][IKZV8C4DgJd];
                    rZx1On[j] = IKZV8C4DgJd;
                }
            }
            for (IKZV8C4DgJd = (390 - 390); IKZV8C4DgJd < BDVlpILh[j]; IKZV8C4DgJd = IKZV8C4DgJd +1) {
                printf ("%c", YXrSgZ[j][IKZV8C4DgJd]);
                if (IKZV8C4DgJd == rZx1On[j]) {
                    printf ("%s", s2[j]);
                }
            }
        }
    }
}

