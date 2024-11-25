struct   student {
    char HHAPvrTsOQni [(289 - 274)];
    char name [(330 - 300)];
    char F6QgD7arfLN5 [(232 - 230)];
    short  ByL0GtN3lU;
    float score;
    char address [(130 - 100)];
    struct   student *former;
};
void  main () {
    struct   student *Ob7SVJ, *p2;
    Ob7SVJ = p2 = (struct   student *) malloc (LEN);
    scanf ("%s%s%s%d%f%s", Ob7SVJ->HHAPvrTsOQni, Ob7SVJ->name, Ob7SVJ->F6QgD7arfLN5, &Ob7SVJ->ByL0GtN3lU, &Ob7SVJ->score, Ob7SVJ->address);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    Ob7SVJ->former = NULL;
    for (; (783 - 782);) {
        Ob7SVJ = (struct   student *) malloc (LEN);
        scanf ("%s", Ob7SVJ->HHAPvrTsOQni);
        if (strcmp (Ob7SVJ->HHAPvrTsOQni, "end") == (231 - 231))
            break;
        scanf ("%s%s%d%f%s", Ob7SVJ->name, Ob7SVJ->F6QgD7arfLN5, &Ob7SVJ->ByL0GtN3lU, &Ob7SVJ->score, Ob7SVJ->address);
        Ob7SVJ->former = p2;
        p2 = Ob7SVJ;
    }
    while (p2 != NULL) {
        printf ("%s %s %s %d %g %s\n", p2->HHAPvrTsOQni, p2->name, p2->F6QgD7arfLN5, p2->ByL0GtN3lU, p2->score, p2->address);
        p2 = p2->former;
    };
}

