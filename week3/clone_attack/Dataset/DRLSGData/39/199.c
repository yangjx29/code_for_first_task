struct   student {
    char DeFRBJIZ [(906 - 886)];
    int bo1C9cUz;
    int IWM46kV9Xo;
    char leader;
    char ID1vSe;
    int FcuiwbMlOs;
    struct   student *VeQKqaTC;
};
int main () {
    struct   student *Izydlo6R, *KsyTSh1N, *rD7pniUa8;
    char *YLUHPgo;
    int *KgJYtIr8, *oTuDXhtb3YN;
    int zc3H0s7KIg, Q56AOW0yL3, zlpGSm = (752 - 752);
    long  int sum = 0;
    scanf ("%d\n", &zc3H0s7KIg);
    rD7pniUa8 = Izydlo6R = KsyTSh1N = (struct   student *) malloc (LEN);
    YLUHPgo = (char *) malloc (20 * sizeof (char));
    KgJYtIr8 = oTuDXhtb3YN = (int *) malloc (zc3H0s7KIg * sizeof (int));
    for (Q56AOW0yL3 = 0; zc3H0s7KIg > Q56AOW0yL3; Q56AOW0yL3++) {
        scanf ("%s %d %d %c %c %d\n", Izydlo6R->DeFRBJIZ, &Izydlo6R->bo1C9cUz, &Izydlo6R->IWM46kV9Xo, &Izydlo6R->leader, &Izydlo6R->ID1vSe, &Izydlo6R->FcuiwbMlOs);
        Izydlo6R = (struct   student *) malloc (LEN);
        KsyTSh1N->VeQKqaTC = Izydlo6R;
        KsyTSh1N = Izydlo6R;
    }
    KsyTSh1N->VeQKqaTC = NULL;
    KsyTSh1N = Izydlo6R = rD7pniUa8;
    for (Q56AOW0yL3 = 0; Q56AOW0yL3 < zc3H0s7KIg; Q56AOW0yL3++) {
        if (((Izydlo6R->bo1C9cUz) > (572 - 492)) && (0 < (Izydlo6R->FcuiwbMlOs)))
            *KgJYtIr8 += 8000;
        if (((234 - 149) < (Izydlo6R->bo1C9cUz)) && ((Izydlo6R->IWM46kV9Xo) > 80))
            *KgJYtIr8 += 4000;
        if ((Izydlo6R->bo1C9cUz) > (722 - 632))
            *KgJYtIr8 += 2000;
        if (((Izydlo6R->bo1C9cUz) > 85) && (!('Y' != (Izydlo6R->ID1vSe))))
            *KgJYtIr8 += 1000;
        if (((Izydlo6R->IWM46kV9Xo) > 80) && ((Izydlo6R->leader) == 'Y'))
            *KgJYtIr8 += 850;
        Izydlo6R = KsyTSh1N->VeQKqaTC;
        KsyTSh1N = Izydlo6R;
        KgJYtIr8++;
    }
    KsyTSh1N = Izydlo6R = rD7pniUa8;
    KgJYtIr8 = oTuDXhtb3YN;
    for (Q56AOW0yL3 = 0; Q56AOW0yL3 < zc3H0s7KIg; Q56AOW0yL3++) {
        if (*KgJYtIr8 > zlpGSm) {
            zlpGSm = *KgJYtIr8;
            strcpy (YLUHPgo, Izydlo6R->DeFRBJIZ);
        }
        Izydlo6R = KsyTSh1N->VeQKqaTC;
        sum += *KgJYtIr8;
        KgJYtIr8++;
        KsyTSh1N = Izydlo6R;
    }
    printf ("%s\n%d\n%ld\n", YLUHPgo, zlpGSm, sum);
}

