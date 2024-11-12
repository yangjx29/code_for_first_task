int main (int y8C4gnLA, char *aFtZfOIcg []) {
    int Lgw7f6;
    char hJWFNgmH8k [(580 - 324)];
    char vD8jbscR [(1187 - 931)];
    char dz0vcDy2 [(612 - 356)];
    char rZirjAKeut0 [(1115 - 859)] = {(236 - 236)};
    char srW1Hmh [(711 - 455)] = {(202 - 202)};
    int O935748FDsk;
    int sublen;
    O935748FDsk = strlen (hJWFNgmH8k);
    sublen = strlen (vD8jbscR);
    scanf ("%s\n%s\n%s", hJWFNgmH8k, vD8jbscR, dz0vcDy2);
    for (Lgw7f6 = (196 - 196); Lgw7f6 <= O935748FDsk -sublen; Lgw7f6 = Lgw7f6 +1) {
        strncpy (rZirjAKeut0, (hJWFNgmH8k + Lgw7f6), sublen);
        if (!strcmp (rZirjAKeut0, vD8jbscR)) {
            strncpy (srW1Hmh, hJWFNgmH8k, Lgw7f6);
            strcat (srW1Hmh, dz0vcDy2);
            strcat (srW1Hmh, (hJWFNgmH8k + Lgw7f6 +sublen));
            printf ("%s", srW1Hmh);
            return (220 - 220);
        }
    }
    printf ("%s", hJWFNgmH8k);
    return 0;
}

