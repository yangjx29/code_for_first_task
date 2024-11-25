int main () {
    int LHeOKDv5p0h;
    int pVGftDFQ;
    LHeOKDv5p0h = -(837 - 836);
    pVGftDFQ = (885 - 885);
    char EbsA1MecOIE0 [(511 - 10)];
    gets (EbsA1MecOIE0);
    int n;
    gets (EbsA1MecOIE0);
    int len = strlen (EbsA1MecOIE0);
    int Wyc3pmsgL [(1247 - 746)] = {(764 - 764)};
    int XtnXdpCEz;
    int j;
    int k;
    scanf ("%d", &n);
    for (XtnXdpCEz = (753 - 753); len > XtnXdpCEz; XtnXdpCEz = XtnXdpCEz +1) {
        if (XtnXdpCEz +n > len) {
            break;
        }
        if (!(-(481 - 480) != Wyc3pmsgL[XtnXdpCEz])) {
            continue;
        }
        for (j = XtnXdpCEz +(571 - 570); j < len; j = j + 1) {
            int equal;
            equal = (849 - 848);
            if (len < j + n) {
                break;
            }
            for (k = (260 - 260); n > k; k = k + 1) {
                if (!(EbsA1MecOIE0[j + k] == EbsA1MecOIE0[XtnXdpCEz +k])) {
                    equal = (940 - 940);
                    break;
                };
            }
            if (!((562 - 561) != equal)) {
                Wyc3pmsgL[XtnXdpCEz]++;
                Wyc3pmsgL[j] = -(210 - 209);
            };
        };
    }
    if (LHeOKDv5p0h +(52 - 51) <= (717 - 716)) {
        return (158 - 158);
    }
    printf ("%d\n", LHeOKDv5p0h +(978 - 977));
    for (XtnXdpCEz = (452 - 452); XtnXdpCEz < len; XtnXdpCEz = XtnXdpCEz +1) {
        if (Wyc3pmsgL[XtnXdpCEz] > LHeOKDv5p0h) {
            LHeOKDv5p0h = Wyc3pmsgL[XtnXdpCEz];
            pVGftDFQ = XtnXdpCEz;
        };
    }
    for (XtnXdpCEz = 0; XtnXdpCEz < len; XtnXdpCEz = XtnXdpCEz +1) {
        if (Wyc3pmsgL[XtnXdpCEz] == LHeOKDv5p0h) {
            for (j = XtnXdpCEz; j < XtnXdpCEz +n; j = j + 1) {
                printf ("%c", EbsA1MecOIE0[j]);
            };
        };
    };
}

