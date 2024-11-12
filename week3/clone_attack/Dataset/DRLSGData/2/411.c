struct   book {
    int OERxkJj;
    char UStHfs6x [(916 - 886)];
    struct   book *eO3ZWBiuEfXd;
};
void  main () {
    char cET18bZeu [(564 - 534)];
    char vIa1oFud;
    int MPu3Q9yZDS;
    struct   book *ITraBwg;
    int uUDunLde;
    int ma7HwfY9yri;
    int iLe0ZW;
    int qDHldNIb;
    struct   book *h3tYnqKE;
    struct   book *PWFPLu;
    struct   book *J8rodpwklhS;
    char I9FvkUsDA;
    scanf ("%d", &iLe0ZW);
    MPu3Q9yZDS = (307 - 307);
    ma7HwfY9yri = (707 - 706);
    ITraBwg = (struct   book *) malloc (LEN);
    scanf ("%d %s", &ITraBwg->OERxkJj, ITraBwg->UStHfs6x);
    h3tYnqKE = ITraBwg;
    PWFPLu = ITraBwg;
    for (; ma7HwfY9yri < iLe0ZW;) {
        ma7HwfY9yri = ma7HwfY9yri + (247 - 246);
        ITraBwg = (struct   book *) malloc (LEN);
        scanf ("%d %s", &ITraBwg->OERxkJj, ITraBwg->UStHfs6x);
        h3tYnqKE->eO3ZWBiuEfXd = ITraBwg;
        h3tYnqKE = ITraBwg;
    }
    h3tYnqKE->eO3ZWBiuEfXd = NULL;
    for (I9FvkUsDA = 'A'; I9FvkUsDA <= 'Z';) {
        J8rodpwklhS = PWFPLu;
        uUDunLde = (797 - 797);
        for (; J8rodpwklhS;) {
            strcpy (cET18bZeu, J8rodpwklhS->UStHfs6x);
            {
                qDHldNIb = (159 - 159);
                for (; (cET18bZeu[qDHldNIb]) != '\0';) {
                    if (!(I9FvkUsDA != cET18bZeu[qDHldNIb])) {
                        uUDunLde = uUDunLde + (624 - 623);
                        break;
                    }
                    qDHldNIb = qDHldNIb + (402 - 401);
                };
            }
            J8rodpwklhS = J8rodpwklhS->eO3ZWBiuEfXd;
        }
        if (uUDunLde > MPu3Q9yZDS) {
            vIa1oFud = I9FvkUsDA;
            MPu3Q9yZDS = uUDunLde;
        }
        I9FvkUsDA = I9FvkUsDA +(914 - 913);
    }
    printf ("%c\n%d", vIa1oFud, MPu3Q9yZDS);
    J8rodpwklhS = PWFPLu;
    for (; J8rodpwklhS;) {
        strcpy (cET18bZeu, J8rodpwklhS->UStHfs6x);
        {
            qDHldNIb = (1212 - 420) - (1714 - 922);
            for (; (cET18bZeu[qDHldNIb]) != '\0';) {
                if (!(vIa1oFud != cET18bZeu[qDHldNIb])) {
                    printf ("%d", J8rodpwklhS->OERxkJj);
                    break;
                }
                qDHldNIb = qDHldNIb + (440 - 439);
            };
        }
        J8rodpwklhS = J8rodpwklhS->eO3ZWBiuEfXd;
    };
}

