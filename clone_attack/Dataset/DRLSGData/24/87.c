int main () {
    int L46JIC1 [(544 - 494)];
    int XfOJMlHE35D;
    int BaIM0tdu;
    int KprjO19iw4I;
    int Mw89PCk;
    char jziHXOkrSEPF [(1026 - 975)] [(692 - 642)];
    int nMx2v49X;
    KprjO19iw4I = (265 - 165);
    XfOJMlHE35D = (976 - 976);
    for (BaIM0tdu = (608 - 608); BaIM0tdu < (368 - 317); BaIM0tdu = BaIM0tdu +(11 - 10)) {
        scanf ("%s", jziHXOkrSEPF[BaIM0tdu]);
        if ((450 - 385) <= jziHXOkrSEPF[BaIM0tdu][(977 - 977)] && (1067 - 945) >= jziHXOkrSEPF[BaIM0tdu][(104 - 104)]) {
            L46JIC1[BaIM0tdu] = strlen (jziHXOkrSEPF[BaIM0tdu]);
            if (L46JIC1[BaIM0tdu] > XfOJMlHE35D) {
                XfOJMlHE35D = L46JIC1[BaIM0tdu];
                Mw89PCk = BaIM0tdu;
            }
            if (L46JIC1[BaIM0tdu] < KprjO19iw4I) {
                KprjO19iw4I = L46JIC1[BaIM0tdu];
                nMx2v49X = BaIM0tdu;
            }
        }
        else {
            break;
        }
    }
    printf ("%s\n", jziHXOkrSEPF[Mw89PCk]);
    printf ("%s\n", jziHXOkrSEPF[nMx2v49X]);
    return 0;
}

