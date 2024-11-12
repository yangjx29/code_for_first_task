struct   chain {
    char sp [6];
    int num;
};
void  bubble (struct   chain LzPf0sF4 [], int HbJ52nXsK9U3) {
    struct   chain temp;
    int Fta6FKuX4l;
    int FumycCIArXJU;
    for (Fta6FKuX4l = HbJ52nXsK9U3 -1; Fta6FKuX4l > 0; Fta6FKuX4l = Fta6FKuX4l -1) {
        for (FumycCIArXJU = 0; FumycCIArXJU <= Fta6FKuX4l; FumycCIArXJU = FumycCIArXJU +1) {
            if (LzPf0sF4[FumycCIArXJU +1].num > LzPf0sF4[FumycCIArXJU].num) {
                temp = LzPf0sF4[FumycCIArXJU];
                LzPf0sF4[FumycCIArXJU] = LzPf0sF4[FumycCIArXJU +1];
                LzPf0sF4[FumycCIArXJU +1] = temp;
            }
        }
    }
}

int main () {
    char K3hN7S [6];
    int Fta6FKuX4l, FumycCIArXJU, Ap8qmcAkP;
    char c1;
    struct   chain LzPf0sF4 [500];
    char s [501];
    scanf ("%d", &Ap8qmcAkP);
    for (Fta6FKuX4l = 0; 500 >= Fta6FKuX4l; Fta6FKuX4l = Fta6FKuX4l +1)
        LzPf0sF4[Fta6FKuX4l].num = 1;
    scanf ("%s", s);
    for (Fta6FKuX4l = 0; Fta6FKuX4l <= strlen (s) - Ap8qmcAkP; Fta6FKuX4l = Fta6FKuX4l +1) {
        for (FumycCIArXJU = 0; Ap8qmcAkP > FumycCIArXJU; FumycCIArXJU = FumycCIArXJU +1) {
            K3hN7S[FumycCIArXJU] = s[Fta6FKuX4l +FumycCIArXJU];
        }
        K3hN7S[FumycCIArXJU] = '\0';
        strcpy (LzPf0sF4[Fta6FKuX4l].sp, K3hN7S);
    }
    for (Fta6FKuX4l = 0; Fta6FKuX4l < strlen (s) - Ap8qmcAkP; Fta6FKuX4l = Fta6FKuX4l +1) {
        for (FumycCIArXJU = Fta6FKuX4l +1; strlen (s) - Ap8qmcAkP >= FumycCIArXJU; FumycCIArXJU = FumycCIArXJU +1) {
            if (strcmp (LzPf0sF4[Fta6FKuX4l].sp, LzPf0sF4[FumycCIArXJU].sp) == 0) {
                LzPf0sF4[Fta6FKuX4l].num++;
            }
        }
    }
    bubble (LzPf0sF4, strlen (s) - Ap8qmcAkP);
    if (LzPf0sF4[0].num > 1) {
        printf ("%d\n", LzPf0sF4[0].num);
        printf ("%s\n", LzPf0sF4[0].sp);
        for (Fta6FKuX4l = 1; Fta6FKuX4l <= strlen (s) - Ap8qmcAkP; Fta6FKuX4l = Fta6FKuX4l +1) {
            if (LzPf0sF4[Fta6FKuX4l].num == LzPf0sF4[0].num && (strcmp (LzPf0sF4[Fta6FKuX4l].sp, LzPf0sF4[Fta6FKuX4l -1].sp) != 0))
                printf ("%s\n", LzPf0sF4[Fta6FKuX4l].sp);
        }
    }
    else
        ;
    return 0;
}

