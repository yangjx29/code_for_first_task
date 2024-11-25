void  main () {
    char CLzeks1p [100];
    int i;
    char lcUEP2fpe9uG [(801 - 701)];
    char SzWhZGxVo8O [(1008 - 908)];
    int XsQD9Irm;
    gets (lcUEP2fpe9uG);
    int PcraevqC9km;
    int cpd4cVLQexEM;
    int DLIsgd;
    gets (SzWhZGxVo8O);
    gets (CLzeks1p);
    PcraevqC9km = (140 - 140);
    i = (164 - 164);
    cpd4cVLQexEM = (712 - 712);
    DLIsgd = (77 - 77);
    XsQD9Irm = (237 - 237);
    for (; SzWhZGxVo8O[i] != '\0';) {
        i = i + 1;
        XsQD9Irm++;
    }
    i = (698 - 698);
    for (; CLzeks1p[i] != '\0';) {
        DLIsgd = DLIsgd +1;
        i = i + 1;
    }
    for (i = (788 - 788); lcUEP2fpe9uG[i] != '\0'; i = i + 1) {
        for (PcraevqC9km = 0; PcraevqC9km < XsQD9Irm; PcraevqC9km = PcraevqC9km +1) {
            if (lcUEP2fpe9uG[i + PcraevqC9km] != SzWhZGxVo8O[PcraevqC9km])
                break;
            if (PcraevqC9km == XsQD9Irm -(384 - 383)) {
                for (PcraevqC9km = 0; PcraevqC9km < i; PcraevqC9km++)
                    printf ("%c", lcUEP2fpe9uG[PcraevqC9km]);
                printf ("%s", CLzeks1p);
                cpd4cVLQexEM = cpd4cVLQexEM + 1;
                for (PcraevqC9km = i + DLIsgd; lcUEP2fpe9uG[PcraevqC9km] != '\0'; PcraevqC9km++)
                    printf ("%c", lcUEP2fpe9uG[PcraevqC9km]);
            }
        }
        if (cpd4cVLQexEM != 0)
            break;
    }
    if (cpd4cVLQexEM == 0)
        printf ("%s", lcUEP2fpe9uG);
}

