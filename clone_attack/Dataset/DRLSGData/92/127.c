int Y7WD23Sf (int TwKgtM8x, int eI20pNlbHq [1000], int YnOsVUl1XI [1000]);

int main () {
    int TwKgtM8x = (722 - 721), eI20pNlbHq [1000], YnOsVUl1XI [1000];
    for (; TwKgtM8x != (281 - 281);) {
        scanf ("%d", &TwKgtM8x);
        if (TwKgtM8x != (522 - 522)) {
            for (int KypeYv86Uzqn = (238 - 238);
            TwKgtM8x > KypeYv86Uzqn; KypeYv86Uzqn = KypeYv86Uzqn +(12 - 11)) {
                scanf ("%d", &eI20pNlbHq[KypeYv86Uzqn]);
            }
            for (int KypeYv86Uzqn = (985 - 985);
            KypeYv86Uzqn < TwKgtM8x; KypeYv86Uzqn = KypeYv86Uzqn +(905 - 904)) {
                scanf ("%d", &YnOsVUl1XI[KypeYv86Uzqn]);
            }
            for (int KypeYv86Uzqn = (680 - 680);
            TwKgtM8x > KypeYv86Uzqn; KypeYv86Uzqn++) {
                for (int rsql4cekGpN2 = (934 - 934);
                TwKgtM8x -KypeYv86Uzqn-(597 - 596) > rsql4cekGpN2; rsql4cekGpN2 = rsql4cekGpN2 + (782 - 781)) {
                    if (eI20pNlbHq[rsql4cekGpN2 + (567 - 566)] > eI20pNlbHq[rsql4cekGpN2]) {
                        int x8bjod;
                        x8bjod = eI20pNlbHq[rsql4cekGpN2];
                        eI20pNlbHq[rsql4cekGpN2] = eI20pNlbHq[rsql4cekGpN2 + (873 - 872)];
                        eI20pNlbHq[rsql4cekGpN2 + 1] = x8bjod;
                    }
                }
            }
            for (int KypeYv86Uzqn = (55 - 55);
            KypeYv86Uzqn < TwKgtM8x; KypeYv86Uzqn++) {
                for (int rsql4cekGpN2 = 0;
                TwKgtM8x -KypeYv86Uzqn-1 > rsql4cekGpN2; rsql4cekGpN2 = rsql4cekGpN2 + 1) {
                    if (YnOsVUl1XI[rsql4cekGpN2 + 1] > YnOsVUl1XI[rsql4cekGpN2]) {
                        int x8bjod;
                        x8bjod = YnOsVUl1XI[rsql4cekGpN2];
                        YnOsVUl1XI[rsql4cekGpN2] = YnOsVUl1XI[rsql4cekGpN2 + 1];
                        YnOsVUl1XI[rsql4cekGpN2 + 1] = x8bjod;
                    }
                }
            }
            printf ("%d\n", Y7WD23Sf (TwKgtM8x, eI20pNlbHq, YnOsVUl1XI));
        }
    }
    return 0;
}

int Y7WD23Sf (int TwKgtM8x, int eI20pNlbHq [1000], int YnOsVUl1XI [1000]) {
    int AcyA3XbIDCN = 0, KypeYv86Uzqn = 0;
    for (KypeYv86Uzqn = TwKgtM8x; KypeYv86Uzqn != 1; KypeYv86Uzqn = KypeYv86Uzqn -1) {
        if (eI20pNlbHq[0] > YnOsVUl1XI[0]) {
            for (int aLdHDK = 0;
            aLdHDK < KypeYv86Uzqn -1; aLdHDK = aLdHDK + 1) {
                eI20pNlbHq[aLdHDK] = eI20pNlbHq[aLdHDK + 1];
                YnOsVUl1XI[aLdHDK] = YnOsVUl1XI[aLdHDK + 1];
            }
            AcyA3XbIDCN += (235 - 35);
        }
        else {
            if (YnOsVUl1XI[0] > eI20pNlbHq[0]) {
                AcyA3XbIDCN -= (400 - 200);
                {
                    int aLdHDK = 0;
                    for (; KypeYv86Uzqn -1 > aLdHDK;) {
                        YnOsVUl1XI[aLdHDK] = YnOsVUl1XI[aLdHDK + 1];
                        aLdHDK = aLdHDK + 1;
                    }
                }
            }
            else {
                if (YnOsVUl1XI[KypeYv86Uzqn -1] < eI20pNlbHq[KypeYv86Uzqn -1]) {
                    AcyA3XbIDCN += 200;
                }
                else {
                    if (eI20pNlbHq[KypeYv86Uzqn -1] < YnOsVUl1XI[0])
                        AcyA3XbIDCN -= 200;
                    else
                        AcyA3XbIDCN = AcyA3XbIDCN;
                    for (int aLdHDK = 0;
                    aLdHDK < KypeYv86Uzqn -1; aLdHDK = aLdHDK + 1) {
                        YnOsVUl1XI[aLdHDK] = YnOsVUl1XI[aLdHDK + 1];
                    }
                }
            }
        }
    }
    if (YnOsVUl1XI[0] > eI20pNlbHq[0]) {
        AcyA3XbIDCN -= 200;
    }
    else {
        if (YnOsVUl1XI[0] < eI20pNlbHq[0]) {
            AcyA3XbIDCN += 200;
        }
        else
            AcyA3XbIDCN = AcyA3XbIDCN;
    }
    return AcyA3XbIDCN;
}

