int main () {
    int RO8zKIE;
    double  ofph6en [(724 - 684)];
    double  OaqktO [(531 - 491)];
    char QEXfIGjsoU43 [(476 - 436)] [(558 - 551)];
    int kTaqUIpWwn1;
    double  XagRWL [(279 - 239)];
    int RENlR8izQ;
    int oP7xUFmvCq;
    int j97KcZ;
    double  C5Vuv7;
    oP7xUFmvCq = (853 - 853);
    scanf ("%d\n", &RENlR8izQ);
    RO8zKIE = (26 - 26);
    {
        j97KcZ = (916 - 827) - (755 - 666);
        for (; RENlR8izQ > j97KcZ;) {
            scanf ("%s %lf\n", QEXfIGjsoU43[j97KcZ], &XagRWL[j97KcZ]);
            if (!((404 - 404) != strcmp (QEXfIGjsoU43[j97KcZ], "male"))) {
                ofph6en[RO8zKIE] = XagRWL[j97KcZ];
                RO8zKIE++;
            }
            else {
                OaqktO[oP7xUFmvCq] = XagRWL[j97KcZ];
                oP7xUFmvCq++;
            }
            j97KcZ++;
        }
    }
    {
        j97KcZ = (1402 - 643) - (890 - 132);
        while (RO8zKIE >= j97KcZ) {
            {
                kTaqUIpWwn1 = (498 - 28) - (996 - 526);
                for (; RO8zKIE -j97KcZ > kTaqUIpWwn1;) {
                    if (ofph6en[kTaqUIpWwn1] > ofph6en[kTaqUIpWwn1 + (311 - 310)]) {
                        C5Vuv7 = ofph6en[kTaqUIpWwn1];
                        ofph6en[kTaqUIpWwn1] = ofph6en[kTaqUIpWwn1 + (529 - 528)];
                        ofph6en[kTaqUIpWwn1 + (125 - 124)] = C5Vuv7;
                    }
                    kTaqUIpWwn1++;
                }
            }
            j97KcZ++;
        }
    }
    {
        j97KcZ = 703 - 702;
        while (oP7xUFmvCq >= j97KcZ) {
            {
                kTaqUIpWwn1 = (1245 - 773) - (1265 - 793);
                while (oP7xUFmvCq - j97KcZ > kTaqUIpWwn1) {
                    if (OaqktO[kTaqUIpWwn1 + (132 - 131)] > OaqktO[kTaqUIpWwn1]) {
                        C5Vuv7 = OaqktO[kTaqUIpWwn1];
                        OaqktO[kTaqUIpWwn1] = OaqktO[kTaqUIpWwn1 + (938 - 937)];
                        OaqktO[kTaqUIpWwn1 + (640 - 639)] = C5Vuv7;
                    }
                    kTaqUIpWwn1++;
                }
            }
            j97KcZ++;
        }
    }
    printf ("%.2lf", ofph6en[(123 - 123)]);
    for (j97KcZ = (674 - 673); RO8zKIE > j97KcZ; j97KcZ++) {
        printf (" %.2lf", ofph6en[j97KcZ]);
    }
    for (j97KcZ = (433 - 433); j97KcZ < oP7xUFmvCq; j97KcZ++) {
        printf (" %.2lf", OaqktO[j97KcZ]);
    }
    return (221 - 221);
}

