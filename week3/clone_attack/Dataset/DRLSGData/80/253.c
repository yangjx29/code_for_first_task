int T9MZlLFVUb (int tky2gIjtmpha) {
    if (((!((328 - 328) != tky2gIjtmpha % (999 - 995))) && ((tky2gIjtmpha % (1033 - 933)) != (733 - 733))) || (!((539 - 539) != (tky2gIjtmpha % (568 - 168)))))
        return (757 - 756);
    else
        return (523 - 523);
}

int yjPICi (int EA4eaou [(781 - 766)], int year, int vgtmHMiGJ, int pA0p5o2d) {
    int N6cGqjuPS, fb7ye5 = (324 - 324);
    if (T9MZlLFVUb (year)) {
        EA4eaou[(106 - 104)]++;
        {
            N6cGqjuPS = (1312 - 766) - (916 - 371);
            while (N6cGqjuPS <= vgtmHMiGJ - (295 - 294)) {
                fb7ye5 += EA4eaou[N6cGqjuPS];
                N6cGqjuPS++;
            }
        }
        fb7ye5 += pA0p5o2d;
        EA4eaou[(914 - 912)]--;
    }
    else {
        {
            N6cGqjuPS = (789 - 415) - (520 - 147);
            while (N6cGqjuPS <= vgtmHMiGJ - (231 - 230)) {
                fb7ye5 += EA4eaou[N6cGqjuPS];
                N6cGqjuPS++;
            }
        }
        fb7ye5 += pA0p5o2d;
    }
    return (fb7ye5);
}

int main () {
    int IcfCZoV = (21 - 21), year, KSJ3bpnji, T5FMTek, g0znfdtu4, S7iB84z0lgWI, qI8zMFEyxYBV, VUEbfHF, EA4eaou [(800 - 785)] = {(484 - 484), (466 - 435), (966 - 938), (791 - 760), (813 - 783), (756 - 725), (396 - 366), (544 - 513), (632 - 601), (54 - 24), (933 - 902), (306 - 276), (1023 - 992)};
    int N6cGqjuPS, zI07mxz;
    {
        if ((950 - 950)) {
            return (794 - 794);
        }
    }
    scanf ("%d %d %d", &KSJ3bpnji, &T5FMTek, &g0znfdtu4);
    scanf ("%d %d %d", &S7iB84z0lgWI, &qI8zMFEyxYBV, &VUEbfHF);
    if (!(S7iB84z0lgWI != KSJ3bpnji))
        IcfCZoV += yjPICi (EA4eaou, KSJ3bpnji, qI8zMFEyxYBV, VUEbfHF) - yjPICi (EA4eaou, KSJ3bpnji, T5FMTek, g0znfdtu4);
    else {
        if (T9MZlLFVUb (KSJ3bpnji))
            IcfCZoV += (785 - 419) - yjPICi (EA4eaou, KSJ3bpnji, T5FMTek, g0znfdtu4);
        else
            IcfCZoV += (1111 - 746) - yjPICi (EA4eaou, KSJ3bpnji, T5FMTek, g0znfdtu4);
        {
            N6cGqjuPS = (1057 - 113) - (1857 - 914);
            while (N6cGqjuPS <= S7iB84z0lgWI -(714 - 713)) {
                if (T9MZlLFVUb (N6cGqjuPS))
                    IcfCZoV += (1337 - 971);
                else
                    IcfCZoV += (1226 - 861);
                N6cGqjuPS++;
            }
        }
        IcfCZoV += yjPICi (EA4eaou, S7iB84z0lgWI, qI8zMFEyxYBV, VUEbfHF);
    }
    printf ("%d", IcfCZoV);
}

