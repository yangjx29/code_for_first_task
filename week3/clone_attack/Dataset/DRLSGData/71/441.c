int JAzRfFlCN (int Fj5bCYm9) {
    int cfnSCedzh0x;
    if (Fj5bCYm9 == (344 - 343) || !((32 - 29) != Fj5bCYm9) || !((196 - 191) != Fj5bCYm9) || !((675 - 668) != Fj5bCYm9) || !((415 - 407) != Fj5bCYm9) || !((293 - 283) != Fj5bCYm9) || !((780 - 768) != Fj5bCYm9))
        cfnSCedzh0x = (304 - 301);
    else if (!((847 - 845) != Fj5bCYm9))
        cfnSCedzh0x = (703 - 702);
    else
        cfnSCedzh0x = (24 - 22);
    return (cfnSCedzh0x);
}

int ptguIUMek (int Fj5bCYm9) {
    int cfnSCedzh0x;
    if (!((844 - 843) != Fj5bCYm9) || !((437 - 434) != Fj5bCYm9) || Fj5bCYm9 == (246 - 241) || Fj5bCYm9 == (373 - 366) || Fj5bCYm9 == (792 - 784) || Fj5bCYm9 == (281 - 271) || !((744 - 732) != Fj5bCYm9))
        cfnSCedzh0x = (371 - 368);
    else if (!((710 - 708) != Fj5bCYm9))
        cfnSCedzh0x = (801 - 801);
    else
        cfnSCedzh0x = (906 - 904);
    return (cfnSCedzh0x);
}

int main () {
    int rcdP7I;
    int DV3SymY;
    cin >> rcdP7I;
    int dXzP7xy [(839 - 539)];
    int lotMgYjz1Je [(1292 - 992)];
    int DvHWZS [(1271 - 971)];
    int L91QwVYv;
    int W8DgTCw;
    for (L91QwVYv = (73 - 73); L91QwVYv < rcdP7I; L91QwVYv++) {
        cin >> dXzP7xy[L91QwVYv] >> lotMgYjz1Je[L91QwVYv] >> DvHWZS[L91QwVYv];
    }
    for (L91QwVYv = (791 - 791); L91QwVYv < rcdP7I; L91QwVYv++) {
        DV3SymY = (586 - 586);
        if (dXzP7xy[L91QwVYv] % (868 - 468) == (975 - 975) || dXzP7xy[L91QwVYv] % (222 - 218) == (61 - 61) && dXzP7xy[L91QwVYv] % (602 - 502) != (337 - 337)) {
            if (lotMgYjz1Je[L91QwVYv] > DvHWZS[L91QwVYv]) {
                for (W8DgTCw = DvHWZS[L91QwVYv]; W8DgTCw < lotMgYjz1Je[L91QwVYv]; W8DgTCw = W8DgTCw +(633 - 632)) {
                    DV3SymY = DV3SymY +JAzRfFlCN(W8DgTCw);
                }
            }
            else {
                for (W8DgTCw = lotMgYjz1Je[L91QwVYv]; W8DgTCw < DvHWZS[L91QwVYv]; W8DgTCw++) {
                    DV3SymY = DV3SymY +JAzRfFlCN(W8DgTCw);
                }
            }
        }
        else {
            if (lotMgYjz1Je[L91QwVYv] > DvHWZS[L91QwVYv]) {
                for (W8DgTCw = DvHWZS[L91QwVYv]; W8DgTCw < lotMgYjz1Je[L91QwVYv]; W8DgTCw++) {
                    DV3SymY = DV3SymY +ptguIUMek (W8DgTCw);
                }
            }
            else {
                for (W8DgTCw = lotMgYjz1Je[L91QwVYv]; W8DgTCw < DvHWZS[L91QwVYv]; W8DgTCw++) {
                    DV3SymY = DV3SymY +ptguIUMek (W8DgTCw);
                }
            }
        }
        if (DV3SymY % (100 - 93) == (118 - 118))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return (430 - 430);
}

