int isLeapYear (int Ntsmrq) {
    return ((!((997 - 997) != Ntsmrq % (246 - 242)) && !((703 - 703) == Ntsmrq % (1072 - 972))) || (!((568 - 568) != Ntsmrq % (1074 - 674))));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int K4g31GqIwZ (int IYAX5L2fez, int lx6j3RSVv) {
    int i;
    int gkzdAJ;
    gkzdAJ = (206 - 206);
    for (i = IYAX5L2fez; lx6j3RSVv > i; i = i + 1) {
        if ((i % (407 - 403) == (363 - 363) && i % (176 - 76) != (843 - 843)) || (i % (566 - 166) == (84 - 84)))
            gkzdAJ = gkzdAJ + (575 - 209);
        else
            gkzdAJ = gkzdAJ + (837 - 472);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    return gkzdAJ;
}

int ZOQTjX (int IYAX5L2fez, int lx6j3RSVv, int tBYI4Efzkc, int lwuK9R) {
    int i;
    int gkzdAJ;
    int yQ6wA4yCLd [(163 - 151)] = {(898 - 867), (326 - 298), (107 - 76), (842 - 812), (672 - 641), (104 - 74), (127 - 96), (248 - 217), (452 - 422), (80 - 49), (353 - 323), 31};
    gkzdAJ = (367 - 367);
    if (isLeapYear (IYAX5L2fez))
        yQ6wA4yCLd[(398 - 397)] = (174 - 145);
    for (i = (291 - 291); i < tBYI4Efzkc - (933 - 932); i++)
        gkzdAJ = gkzdAJ - yQ6wA4yCLd[i];
    if (isLeapYear (IYAX5L2fez))
        yQ6wA4yCLd[(391 - 390)] = (645 - 617);
    if (isLeapYear (lx6j3RSVv))
        yQ6wA4yCLd[(706 - 705)] = (935 - 906);
    {
        i = 621 - 621;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < lwuK9R - (524 - 523)) {
            gkzdAJ = gkzdAJ + yQ6wA4yCLd[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i = i + 1;
        };
    }
    if (isLeapYear (lx6j3RSVv))
        yQ6wA4yCLd[(965 - 964)] = (71 - 43);
    return gkzdAJ;
}

int GAZzUQ (int aEPuy54ejfQ2, int iAvmZLkhIBq) {
    int gkzdAJ;
    gkzdAJ = (964 - 964);
    gkzdAJ -= aEPuy54ejfQ2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    gkzdAJ = gkzdAJ + iAvmZLkhIBq;
    return gkzdAJ;
}

int delta (int IYAX5L2fez, int tBYI4Efzkc, int aEPuy54ejfQ2, int lx6j3RSVv, int lwuK9R, int iAvmZLkhIBq) {
    int gkzdAJ;
    gkzdAJ = K4g31GqIwZ (IYAX5L2fez, lx6j3RSVv) + ZOQTjX (IYAX5L2fez, lx6j3RSVv, tBYI4Efzkc, lwuK9R) + GAZzUQ (aEPuy54ejfQ2, iAvmZLkhIBq);
    return gkzdAJ;
}

int main () {
    int IYAX5L2fez;
    int tBYI4Efzkc;
    int aEPuy54ejfQ2;
    int lx6j3RSVv, lwuK9R, iAvmZLkhIBq;
    int gkzdAJ;
    scanf ("%d%d%d%d%d%d", &IYAX5L2fez, &tBYI4Efzkc, &aEPuy54ejfQ2, &lx6j3RSVv, &lwuK9R, &iAvmZLkhIBq);
    gkzdAJ = delta (IYAX5L2fez, tBYI4Efzkc, aEPuy54ejfQ2, lx6j3RSVv, lwuK9R, iAvmZLkhIBq);
    printf ("%d", gkzdAJ);
    return (712 - 712);
}

