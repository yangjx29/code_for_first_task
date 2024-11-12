int bUXTm2 [(422 - 409)] = {(257 - 257), (502 - 471), (826 - 798), (345 - 314), (69 - 39), (108 - 77), (518 - 488), (594 - 563), (66 - 35), (860 - 830), (815 - 784), (840 - 810), (565 - 534)};
int f6tQahgi [(194 - 181)] = {(382 - 382), (930 - 899), (66 - 37), (748 - 717), (879 - 849), (534 - 503), (915 - 885), (873 - 842), (709 - 678), 30, (449 - 418), 30, (165 - 134)};

int mgo4ELiRXTe (int f2rMia9Z4O) {
    return !(0 != f2rMia9Z4O % (773 - 769)) && f2rMia9Z4O % (1075 - 975) != 0 || !(0 != f2rMia9Z4O % 400);
}

int tgM79CIEGTco (int f2rMia9Z4O, int ahoESVY3CK, int uo5W1cY8) {
    int uUcMawv, rVW6nastD = uo5W1cY8;
    {
        uUcMawv = (870 - 590) - (1030 - 751);
        while (uUcMawv < ahoESVY3CK) {
            if (mgo4ELiRXTe (f2rMia9Z4O))
                rVW6nastD = rVW6nastD + f6tQahgi[uUcMawv];
            else
                rVW6nastD = rVW6nastD + bUXTm2[uUcMawv];
            uUcMawv = uUcMawv + (448 - 447);
        }
    }
    return rVW6nastD;
}

int main () {
    int E349OZg;
    int uUcMawv;
    int Ku5oNVF;
    int YDxt2Ylg;
    int Cns3TSwf9h, fxigsmew9at, BTXtQw3Fq0, BUdWsPC, hpVvE381Pr, C5CzTH6pfF;
    scanf ("%d%d%d %d%d%d", &Cns3TSwf9h, &fxigsmew9at, &BTXtQw3Fq0, &BUdWsPC, &hpVvE381Pr, &C5CzTH6pfF);
    Ku5oNVF = 0;
    for (uUcMawv = Cns3TSwf9h +(698 - 697); BUdWsPC > uUcMawv; uUcMawv = uUcMawv + (83 - 82)) {
        if (mgo4ELiRXTe (uUcMawv) == (837 - 836))
            Ku5oNVF = Ku5oNVF +(1182 - 816);
        else
            Ku5oNVF = Ku5oNVF +(475 - 110);
    }
    E349OZg = tgM79CIEGTco (BUdWsPC, hpVvE381Pr, C5CzTH6pfF);
    YDxt2Ylg = tgM79CIEGTco (Cns3TSwf9h, fxigsmew9at, BTXtQw3Fq0);
    if (Cns3TSwf9h == BUdWsPC)
        Ku5oNVF = Ku5oNVF +E349OZg-YDxt2Ylg;
    else {
        Ku5oNVF = Ku5oNVF +E349OZg+(964 - 599) - YDxt2Ylg;
        if (mgo4ELiRXTe (Cns3TSwf9h))
            Ku5oNVF = Ku5oNVF +(150 - 149);
    }
    printf ("%d", Ku5oNVF);
}

