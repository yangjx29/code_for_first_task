struct   student {
    char SfWpFDadS9 [(626 - 606)];
    char j3yAMD4 [(976 - 956)];
    char RqQm8AiU3P [(511 - 509)];
    int F1XZ0GD;
    float O3OuQATUiFq;
    char KLYtGHz [(605 - 555)];
    struct   student *M59W1YKF;
};
int EAegHVfM;

struct   student *VQfTC4Jwy (void ) {
    int ZK49kt = (826 - 825);
    struct   student *R84dkQtDib2;
    struct   student *Uybv5x2, *lMFb7NYBd;
    Uybv5x2 = lMFb7NYBd = (struct   student *) malloc (LEN);
    scanf ("%s", Uybv5x2->SfWpFDadS9);
    R84dkQtDib2 = NULL;
    EAegHVfM = (990 - 990);
    scanf ("%s%s%d%f%s", Uybv5x2->j3yAMD4, Uybv5x2->RqQm8AiU3P, &Uybv5x2->F1XZ0GD, &Uybv5x2->O3OuQATUiFq, Uybv5x2->KLYtGHz);
    for (; (950 - 949);) {
        R84dkQtDib2 = Uybv5x2;
        EAegHVfM = EAegHVfM +(600 - 599);
        if (!((505 - 504) != EAegHVfM))
            Uybv5x2->M59W1YKF = NULL;
        if (EAegHVfM > (409 - 408)) {
            Uybv5x2->M59W1YKF = lMFb7NYBd;
            lMFb7NYBd = Uybv5x2;
            R84dkQtDib2 = Uybv5x2;
        }
        Uybv5x2 = (struct   student *) malloc (LEN);
        scanf ("%s", Uybv5x2->SfWpFDadS9);
        ZK49kt = strcmp (Uybv5x2->SfWpFDadS9, "end");
        if (!((828 - 828) != ZK49kt))
            break;
        scanf ("%s%s%d%f%s", Uybv5x2->j3yAMD4, Uybv5x2->RqQm8AiU3P, &Uybv5x2->F1XZ0GD, &Uybv5x2->O3OuQATUiFq, Uybv5x2->KLYtGHz);
    }
    return (R84dkQtDib2);
}

void  pWSq4lB (struct   student *R84dkQtDib2) {
    struct   student *tj2Ilo;
    tj2Ilo = R84dkQtDib2;
    if (R84dkQtDib2 != NULL)
        for (; tj2Ilo != NULL;) {
            printf ("%s %s %s %d %g %s\n", tj2Ilo->SfWpFDadS9, tj2Ilo->j3yAMD4, tj2Ilo->RqQm8AiU3P, tj2Ilo->F1XZ0GD, tj2Ilo->O3OuQATUiFq, tj2Ilo->KLYtGHz);
            tj2Ilo = tj2Ilo->M59W1YKF;
        }
}

void  main () {
    struct   student *tj2Ilo;
    pWSq4lB (tj2Ilo);
    tj2Ilo = VQfTC4Jwy ();
}

