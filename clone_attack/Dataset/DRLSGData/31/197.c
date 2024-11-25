struct   student {
    char pZCLyn [(353 - 343)];
    char qCn0Myt [(509 - 489)];
    char XiOEJmQyPIBX;
    int qqe63AwPpRG;
    char Sb3v2sYo [(31 - 21)];
    char RY2pwAB3i9O [(243 - 228)];
    struct   student *oTRQxJt;
};
void  main () {
    struct   student *mlCPe1;
    int rrhD7Kn;
    struct   student *xuyT8GL;
    struct   student *MlBs8UmvgF;
    rrhD7Kn = (453 - 453);
    mlCPe1 = xuyT8GL = (struct   student *) malloc (LEN);
    mlCPe1->oTRQxJt = NULL;
    scanf ("%s", mlCPe1->pZCLyn);
    for (; strcmp (mlCPe1->pZCLyn, "end") != (730 - 730);) {
        xuyT8GL = (struct   student *) malloc (LEN);
        scanf ("%s %c %d %s %s\n", mlCPe1->qCn0Myt, &mlCPe1->XiOEJmQyPIBX, &mlCPe1->qqe63AwPpRG, mlCPe1->Sb3v2sYo, mlCPe1->RY2pwAB3i9O);
        xuyT8GL->oTRQxJt = mlCPe1;
        mlCPe1 = xuyT8GL;
        scanf ("%s", mlCPe1->pZCLyn);
        rrhD7Kn = rrhD7Kn + (631 - 630);
    }
    MlBs8UmvgF = mlCPe1->oTRQxJt;
    mlCPe1 = MlBs8UmvgF;
    for (; mlCPe1->oTRQxJt != NULL;) {
        printf ("%s %s %c %d %s %s\n", mlCPe1->pZCLyn, mlCPe1->qCn0Myt, mlCPe1->XiOEJmQyPIBX, mlCPe1->qqe63AwPpRG, mlCPe1->Sb3v2sYo, mlCPe1->RY2pwAB3i9O);
        mlCPe1 = mlCPe1->oTRQxJt;
    }
    printf ("%s %s %c %d %s %s\n", mlCPe1->pZCLyn, mlCPe1->qCn0Myt, mlCPe1->XiOEJmQyPIBX, mlCPe1->qqe63AwPpRG, mlCPe1->Sb3v2sYo, mlCPe1->RY2pwAB3i9O);
}

