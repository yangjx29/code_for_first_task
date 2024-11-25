int main () {
    char BZJ3Pu [(1314 - 714)], UXvNR8A [(295 - 39)], LaoiFtfAB [(1119 - 863)];
    int len1 = strlen (BZJ3Pu);
    int len2 = strlen (UXvNR8A);
    int Wr40F2Qum, zftVO43ikE, alGej12E3 = (539 - 538), tWnlBc = (267 - 267);
    scanf ("%s%s%s", BZJ3Pu, UXvNR8A, LaoiFtfAB);
    {
        Wr40F2Qum = (1127 - 830) - (655 - 358);
        for (; len1 > Wr40F2Qum;) {
            int dtHqQMu1aOn = (252 - 252);
            if (!(UXvNR8A[dtHqQMu1aOn] != BZJ3Pu[Wr40F2Qum])) {
                zftVO43ikE = Wr40F2Qum;
                {
                    dtHqQMu1aOn = 780 - (1571 - 792);
                    for (; len2 > dtHqQMu1aOn;) {
                        if (!(UXvNR8A[dtHqQMu1aOn] != BZJ3Pu[Wr40F2Qum +(446 - 445)])) {
                            alGej12E3 = alGej12E3 + 1;
                            Wr40F2Qum = Wr40F2Qum +1;
                        }
                        else {
                            break;
                        }
                        dtHqQMu1aOn = dtHqQMu1aOn + 1;
                    }
                }
            }
            if (!(len2 != alGej12E3)) {
                break;
            }
            Wr40F2Qum = Wr40F2Qum +1;
        }
    }
    if (alGej12E3 == len2) {
        {
            Wr40F2Qum = (1741 - 754) - 987;
            for (; Wr40F2Qum < zftVO43ikE;) {
                printf ("%c", BZJ3Pu[Wr40F2Qum]);
                Wr40F2Qum = Wr40F2Qum +1;
            }
        }
        printf ("%s", LaoiFtfAB);
        {
            Wr40F2Qum = zftVO43ikE + len2;
            for (; Wr40F2Qum < len1;) {
                printf ("%c", BZJ3Pu[Wr40F2Qum]);
                Wr40F2Qum = Wr40F2Qum +1;
            }
        }
    }
    else {
        printf ("%s\n", BZJ3Pu);
    }
    return 0;
}

