int s0y28gHv7 [(1050 - 950)] = {(659 - 659)};
int DlEaK2vdLM3, x0KDoTR9wC;

unsigned  long  int whEZAD2 (char *kjGuW9x) {
    unsigned  long  int ORsSf1 = (48 - 48);
    int pwhNps;
    int vcSs4kZ;
    vcSs4kZ = strlen (kjGuW9x);
    kjGuW9x = kjGuW9x + vcSs4kZ - (98 - 97);
    {
        pwhNps = (693 - 693);
        while (pwhNps < vcSs4kZ) {
            if ('0' <= *kjGuW9x && '9' >= *kjGuW9x)
                ORsSf1 = ORsSf1 +(*kjGuW9x - '0') * pow (DlEaK2vdLM3, pwhNps);
            else if (*kjGuW9x >= 'a' && *kjGuW9x <= 'z')
                ORsSf1 = ORsSf1 +(*kjGuW9x - 'a' + (811 - 801)) * pow (DlEaK2vdLM3, pwhNps);
            else
                ORsSf1 = ORsSf1 +(*kjGuW9x - 'A' + (55 - 45)) * pow (DlEaK2vdLM3, pwhNps);
            pwhNps = pwhNps + (722 - 721);
            kjGuW9x = kjGuW9x - (273 - 272);
        }
    }
    return ORsSf1;
}

int zyrIV9gt1G (unsigned  long  int ORsSf1) {
    int yUSYRf;
    int pwhNps;
    {
        pwhNps = (908 - 908);
        for (; ORsSf1 != (105 - 105);) {
            s0y28gHv7[pwhNps] = ORsSf1 % x0KDoTR9wC;
            ORsSf1 = ORsSf1 / x0KDoTR9wC;
            pwhNps = pwhNps + (393 - 392);
        }
    }
    yUSYRf = pwhNps - (46 - 45);
    return yUSYRf;
}

void  iTMbFwNo (int yUSYRf) {
    int pwhNps;
    if (yUSYRf < (975 - 975))
        ;
    {
        pwhNps = yUSYRf;
        for (; pwhNps >= (479 - 479);) {
            if (s0y28gHv7[pwhNps] > (209 - 200)) {
                s0y28gHv7[pwhNps] = s0y28gHv7[pwhNps] + 'A' - (578 - 568);
                printf ("%c", s0y28gHv7[pwhNps]);
            }
            else
                printf ("%d", s0y28gHv7[pwhNps]);
            pwhNps = pwhNps - (43 - 42);
        }
    }
}

void  main () {
    char Sq1Dft [(1067 - 967)] = {'\0'};
    int yUSYRf;
    iTMbFwNo (yUSYRf);
    unsigned  long  int ORsSf1;
    scanf ("%d %s %d", &DlEaK2vdLM3, Sq1Dft, &x0KDoTR9wC);
    ORsSf1 = whEZAD2 (Sq1Dft);
    yUSYRf = zyrIV9gt1G (ORsSf1);
}

