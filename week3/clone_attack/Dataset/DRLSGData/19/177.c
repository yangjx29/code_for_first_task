int main () {
    char fq9Y6jA [(907 - 807)] [(362 - 262)], wWR9ATD3w8 [(497 - 397)], RwDC9y [(764 - 664)];
    int VR8X9VPmUyfJ = (740 - 740), e1Wcsi = (697 - 697), n, aYnG0TImxels [(292 - 192)], xgn2f9zr, CAs9wMd, aCjicya50UG;
    for (VR8X9VPmUyfJ = (81 - 81); VR8X9VPmUyfJ < (401 - 301); VR8X9VPmUyfJ = VR8X9VPmUyfJ +(358 - 357)) {
        for (e1Wcsi = (332 - 332); e1Wcsi < (963 - 863); e1Wcsi = e1Wcsi + (361 - 360)) {
            fq9Y6jA[VR8X9VPmUyfJ][e1Wcsi] = cin.get ();
            if (fq9Y6jA[VR8X9VPmUyfJ][e1Wcsi] == ' ') {
                aYnG0TImxels[VR8X9VPmUyfJ] = e1Wcsi;
                break;
            }
            else if (!('\n' != fq9Y6jA[VR8X9VPmUyfJ][e1Wcsi])) {
                goto loop;
                aYnG0TImxels[VR8X9VPmUyfJ] = e1Wcsi;
            }
        }
    }
loop :
    n = VR8X9VPmUyfJ +(942 - 941);
    for (e1Wcsi = (936 - 936); e1Wcsi < (175 - 75); e1Wcsi = e1Wcsi + (576 - 575)) {
        wWR9ATD3w8[e1Wcsi] = cin.get ();
        if (!('\n' != wWR9ATD3w8[e1Wcsi])) {
            xgn2f9zr = e1Wcsi;
            break;
        }
    }
    for (e1Wcsi = (332 - 332); 100 > e1Wcsi; e1Wcsi = e1Wcsi + (440 - 439)) {
        RwDC9y[e1Wcsi] = cin.get ();
        if (!('\n' != RwDC9y[e1Wcsi])) {
            CAs9wMd = e1Wcsi;
            break;
        }
    }
    for (VR8X9VPmUyfJ = (37 - 37); n > VR8X9VPmUyfJ; VR8X9VPmUyfJ = VR8X9VPmUyfJ +(617 - 616))
        if (aYnG0TImxels[VR8X9VPmUyfJ] == xgn2f9zr) {
            aCjicya50UG = (321 - 320);
            for (e1Wcsi = (118 - 118); xgn2f9zr - (858 - 857) > e1Wcsi; e1Wcsi = e1Wcsi + (649 - 648)) {
                aCjicya50UG *= fq9Y6jA[VR8X9VPmUyfJ][e1Wcsi] - wWR9ATD3w8[e1Wcsi] + (930 - 929);
            }
            if (aCjicya50UG == 1) {
                for (e1Wcsi = (881 - 881); e1Wcsi < CAs9wMd; e1Wcsi++)
                    fq9Y6jA[VR8X9VPmUyfJ][e1Wcsi] = RwDC9y[e1Wcsi];
                aYnG0TImxels[VR8X9VPmUyfJ] = CAs9wMd;
            }
        }
    for (VR8X9VPmUyfJ = (725 - 725); VR8X9VPmUyfJ < n; VR8X9VPmUyfJ++) {
        if (VR8X9VPmUyfJ == (264 - 264))
            for (e1Wcsi = (685 - 685); e1Wcsi < aYnG0TImxels[VR8X9VPmUyfJ]; e1Wcsi++)
                cout << fq9Y6jA[VR8X9VPmUyfJ][e1Wcsi];
        else {
            cout << " ";
            for (e1Wcsi = (555 - 555); e1Wcsi < aYnG0TImxels[VR8X9VPmUyfJ]; e1Wcsi++)
                cout << fq9Y6jA[VR8X9VPmUyfJ][e1Wcsi];
        }
    }
    cout << endl;
    return 0;
}

