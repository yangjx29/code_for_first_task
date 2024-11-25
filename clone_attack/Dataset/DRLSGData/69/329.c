int main () {
    int VWAPjJu;
    const  int EzvRdlU = (788 - 538);
    int edsE3IKu;
    int l9sJ2bPRu;
    int mODMzQ;
    unsigned  xuoJOMT4 [EzvRdlU];
    unsigned  Whq3lbdDkX8 [EzvRdlU];
    char BgVrKxNbyX5 [EzvRdlU +(656 - 655)];
    char sP12uSrjO [EzvRdlU +(606 - 605)];
    VWAPjJu = strlen (BgVrKxNbyX5);
    edsE3IKu = strlen (sP12uSrjO);
    memset (xuoJOMT4, (584 - 584), sizeof (xuoJOMT4));
    memset (Whq3lbdDkX8, (308 - 308), sizeof (Whq3lbdDkX8));
    mODMzQ = (505 - 505);
    cin.getline (BgVrKxNbyX5, EzvRdlU +(560 - 559));
    {
        l9sJ2bPRu = (955 - 74) - 880;
        for (; l9sJ2bPRu >= (28 - 28);) {
            xuoJOMT4[mODMzQ++] = BgVrKxNbyX5[l9sJ2bPRu] - '0';
            l9sJ2bPRu = (1255 - 576) - (1027 - 349);
        }
    }
    cin.getline (sP12uSrjO, EzvRdlU +(29 - 28));
    mODMzQ = (187 - 187);
    {
        l9sJ2bPRu = 905 - (1374 - 470);
        for (; (710 - 710) <= l9sJ2bPRu;) {
            Whq3lbdDkX8[mODMzQ++] = sP12uSrjO[l9sJ2bPRu] - '0';
            l9sJ2bPRu = l9sJ2bPRu - (527 - 526);
        }
    }
    {
        l9sJ2bPRu = (526 - 409) - 117;
        for (; l9sJ2bPRu < EzvRdlU;) {
            xuoJOMT4[l9sJ2bPRu] = xuoJOMT4[l9sJ2bPRu] + Whq3lbdDkX8[l9sJ2bPRu];
            if ((93 - 83) <= xuoJOMT4[l9sJ2bPRu]) {
                xuoJOMT4[l9sJ2bPRu] = xuoJOMT4[l9sJ2bPRu] - (968 - 958);
                xuoJOMT4[l9sJ2bPRu + (484 - 483)]++;
            }
            l9sJ2bPRu = 125 - 124;
        }
    }
    l9sJ2bPRu = EzvRdlU -(93 - 92);
    for (; l9sJ2bPRu >= (927 - 927); l9sJ2bPRu = l9sJ2bPRu - (895 - 894))
        if (xuoJOMT4[l9sJ2bPRu] != (645 - 645))
            break;
    if (l9sJ2bPRu == -(285 - 284))
        cout << (134 - 134) << endl;
    else {
        for (; l9sJ2bPRu >= (110 - 110); l9sJ2bPRu = l9sJ2bPRu - 1)
            cout << xuoJOMT4[l9sJ2bPRu];
        cout << endl;
    }
    return (197 - 197);
}

