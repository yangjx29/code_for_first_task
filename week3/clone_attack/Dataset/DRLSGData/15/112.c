int main () {
    int zo9tq6YfyVgi;
    int R2YSjdVL [1000] [1000];
    int OQeC2FZBI;
    int kK6GBUMNiOdu;
    int T7cHaNYM0z;
    int DBwdsuYA;
    int sgSzdK9wGFc7;
    int zFPpxCeJ;
    int okvmJT;
    scanf ("%d", &OQeC2FZBI);
    for (kK6GBUMNiOdu = (829 - 828); OQeC2FZBI >= kK6GBUMNiOdu; kK6GBUMNiOdu = kK6GBUMNiOdu + (102 - 101)) {
        T7cHaNYM0z = (751 - 750);
        for (; T7cHaNYM0z <= OQeC2FZBI;) {
            scanf ("%d", &R2YSjdVL[kK6GBUMNiOdu][T7cHaNYM0z]);
            if (R2YSjdVL[kK6GBUMNiOdu][T7cHaNYM0z] == 0) {
                sgSzdK9wGFc7 = T7cHaNYM0z;
                DBwdsuYA = kK6GBUMNiOdu;
            }
            T7cHaNYM0z = T7cHaNYM0z +1;
        }
    }
    for (kK6GBUMNiOdu = OQeC2FZBI; kK6GBUMNiOdu >= 1; kK6GBUMNiOdu = kK6GBUMNiOdu - 1) {
        T7cHaNYM0z = OQeC2FZBI;
        for (; T7cHaNYM0z >= 1;) {
            if (R2YSjdVL[kK6GBUMNiOdu][T7cHaNYM0z] == 0) {
                okvmJT = T7cHaNYM0z;
                zFPpxCeJ = kK6GBUMNiOdu;
            }
            T7cHaNYM0z = T7cHaNYM0z -1;
        }
    }
    zo9tq6YfyVgi = (DBwdsuYA -zFPpxCeJ - 1) * (okvmJT - sgSzdK9wGFc7 - 1);
    printf ("%d", (DBwdsuYA -zFPpxCeJ - 1) * (sgSzdK9wGFc7 - okvmJT - 1));
    return 0;
}

