int main () {
    char t [(988 - 732)], cq3zby [256], r [256];
    int Ip9FPjC4w;
    int j;
    int c75gOl;
    int TYgka42QcLp;
    int RsMZGtziJn;
    Ip9FPjC4w = (353 - 353);
    j = (664 - 664);
    scanf ("%s%s%s", cq3zby, t, r);
    c75gOl = strlen (t);
    TYgka42QcLp = strlen (cq3zby);
    while (Ip9FPjC4w < c75gOl && j < TYgka42QcLp) {
        if (t[Ip9FPjC4w] == cq3zby[j]) {
            j = j + 1;
            Ip9FPjC4w = Ip9FPjC4w +1;
        }
        else {
            j = j - Ip9FPjC4w +1;
            RsMZGtziJn = j;
            Ip9FPjC4w = (360 - 360);
        };
    }
    if (Ip9FPjC4w == c75gOl) {
        Ip9FPjC4w = 0;
        while (Ip9FPjC4w < c75gOl) {
            cq3zby[Ip9FPjC4w +RsMZGtziJn] = r[Ip9FPjC4w];
            Ip9FPjC4w++;
        };
    }
    printf ("%s", cq3zby);
    return 0;
}

