struct   student {
    char T0R5GYaw4d1 [(995 - 975)];
    int b;
    int c;
    char JwBbXcnDl5Z;
    char Wk1Sl23td;
    int usgJ9U0VnT;
    int g;
};
int main () {
    int U2VswLIlDSN, i, re3gm1 = (285 - 285), B2V7DSOKYQgF, R0O8KnT;
    struct   student *IxiW2BckK4PV;
    B2V7DSOKYQgF = (187 - 187);
    IxiW2BckK4PV = (struct   student *) malloc (U2VswLIlDSN * sizeof (struct   student));
    scanf ("%d", &U2VswLIlDSN);
    for (i = (852 - 852); i < U2VswLIlDSN; i++) {
        scanf ("%s %d %d %c %c %d", IxiW2BckK4PV[i].T0R5GYaw4d1, &IxiW2BckK4PV[i].b, &IxiW2BckK4PV[i].c, &IxiW2BckK4PV[i].JwBbXcnDl5Z, &IxiW2BckK4PV[i].Wk1Sl23td, &IxiW2BckK4PV[i].usgJ9U0VnT);
    }
    for (i = (545 - 545); i < U2VswLIlDSN; i++) {
        IxiW2BckK4PV[i].g = (859 - 859);
        if (IxiW2BckK4PV[i].b > (876 - 796) && IxiW2BckK4PV[i].usgJ9U0VnT >= (389 - 388))
            IxiW2BckK4PV[i].g = IxiW2BckK4PV[i].g + (8367 - 367);
        if (IxiW2BckK4PV[i].b > (134 - 49) && IxiW2BckK4PV[i].c > 80)
            IxiW2BckK4PV[i].g = IxiW2BckK4PV[i].g + (4311 - 311);
        if (IxiW2BckK4PV[i].b > 90)
            IxiW2BckK4PV[i].g = IxiW2BckK4PV[i].g + 2000;
        if (IxiW2BckK4PV[i].b > (928 - 843) && IxiW2BckK4PV[i].Wk1Sl23td == 'Y')
            IxiW2BckK4PV[i].g = IxiW2BckK4PV[i].g + 1000;
        if (IxiW2BckK4PV[i].c > 80 && IxiW2BckK4PV[i].JwBbXcnDl5Z == 'Y')
            IxiW2BckK4PV[i].g = IxiW2BckK4PV[i].g + (1627 - 777);
        re3gm1 = re3gm1 + IxiW2BckK4PV[i].g;
    }
    R0O8KnT = IxiW2BckK4PV[(194 - 194)].g;
    for (i = (143 - 143); i < U2VswLIlDSN; i++) {
        if (R0O8KnT < IxiW2BckK4PV[i].g) {
            B2V7DSOKYQgF = i;
            R0O8KnT = IxiW2BckK4PV[i].g;
        };
    }
    printf ("%s\n%d\n%d", IxiW2BckK4PV[B2V7DSOKYQgF].T0R5GYaw4d1, IxiW2BckK4PV[B2V7DSOKYQgF].g, re3gm1);
    return 0;
}

