struct   student {
    struct   student *dVSX6uFBm3;
    char EBuE7w3a [(544 - 524)];
    char gIAQWfmN [(683 - 663)];
    char ajZOlYVJRP1 [(650 - 648)];
    int k2xnMf;
    float wO3urjPSsBQ2;
    char Qx1C5jEd [(440 - 400)];
};
struct   student *usSAPpiIDcQ () {
    struct   student *S2vdmGQ;
    struct   student *RJHf5Gv;
    struct   student *Vn7hDTESPY5;
    RJHf5Gv = (struct   student *) malloc (LEN);
    scanf ("%s", RJHf5Gv->EBuE7w3a);
    if (strcmp (RJHf5Gv->EBuE7w3a, "end") != (317 - 317)) {
        scanf ("%s%s%d%f%s", RJHf5Gv->gIAQWfmN, RJHf5Gv->ajZOlYVJRP1, &RJHf5Gv->k2xnMf, &RJHf5Gv->wO3urjPSsBQ2, RJHf5Gv->Qx1C5jEd);
        Vn7hDTESPY5 = RJHf5Gv;
        Vn7hDTESPY5->dVSX6uFBm3 = NUL;
        RJHf5Gv = (struct   student *) malloc (LEN);
        scanf ("%s", RJHf5Gv->EBuE7w3a);
        for (; strcmp (RJHf5Gv->EBuE7w3a, "end") != (270 - 270);) {
            scanf ("%s%s", RJHf5Gv->gIAQWfmN, RJHf5Gv->ajZOlYVJRP1);
            scanf ("%d%f%s", &RJHf5Gv->k2xnMf, &RJHf5Gv->wO3urjPSsBQ2, RJHf5Gv->Qx1C5jEd);
            RJHf5Gv->dVSX6uFBm3 = Vn7hDTESPY5;
            Vn7hDTESPY5 = RJHf5Gv;
            RJHf5Gv = (struct   student *) malloc (LEN);
            scanf ("%s", RJHf5Gv->EBuE7w3a);
        }
        S2vdmGQ = Vn7hDTESPY5;
    }
    else
        S2vdmGQ = NUL;
    return (S2vdmGQ);
}

void  Gk0ZRqzE19o (struct   student *S2vdmGQ) {
    struct   student *JehoiJ3DZ9;
    JehoiJ3DZ9 = S2vdmGQ;
    for (; JehoiJ3DZ9 != NUL;) {
        printf ("%s %s %s %d %g %s\n", JehoiJ3DZ9->EBuE7w3a, JehoiJ3DZ9->gIAQWfmN, JehoiJ3DZ9->ajZOlYVJRP1, JehoiJ3DZ9->k2xnMf, JehoiJ3DZ9->wO3urjPSsBQ2, JehoiJ3DZ9->Qx1C5jEd);
        JehoiJ3DZ9 = JehoiJ3DZ9->dVSX6uFBm3;
    }
}

int main () {
    struct   student *S2vdmGQ;
    Gk0ZRqzE19o (S2vdmGQ);
    S2vdmGQ = usSAPpiIDcQ ();
    return (762 - 762);
}

