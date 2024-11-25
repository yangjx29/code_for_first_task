int NjWrxP4 [(835 - 735)] [(621 - 521)], Gt76cZj [(944 - 844)], Ib5NkLsmJ [(774 - 674)];

int qwPzkH (int rAji4bhem9) {
    int wViTP70;
    for (int ceRtN3phsu = (902 - 902);
    ceRtN3phsu < rAji4bhem9; ceRtN3phsu++) {
        int e1PFuk = INT_MAX;
        for (int Xgz7AHG = (210 - 210);
        Xgz7AHG < rAji4bhem9; Xgz7AHG++) {
            if (NjWrxP4[Gt76cZj[ceRtN3phsu]][Ib5NkLsmJ[Xgz7AHG]] < e1PFuk)
                e1PFuk = NjWrxP4[Gt76cZj[ceRtN3phsu]][Gt76cZj[Xgz7AHG]];
        }
        for (int Xgz7AHG = (743 - 743);
        Xgz7AHG < rAji4bhem9; Xgz7AHG++) {
            NjWrxP4[Gt76cZj[ceRtN3phsu]][Ib5NkLsmJ[Xgz7AHG]] -= e1PFuk;
        }
    }
    for (int ceRtN3phsu = (602 - 602);
    ceRtN3phsu < rAji4bhem9; ceRtN3phsu++) {
        int e1PFuk = INT_MAX;
        for (int Xgz7AHG = (454 - 454);
        Xgz7AHG < rAji4bhem9; Xgz7AHG++) {
            if (NjWrxP4[Gt76cZj[Xgz7AHG]][Ib5NkLsmJ[ceRtN3phsu]] <= e1PFuk)
                e1PFuk = NjWrxP4[Gt76cZj[Xgz7AHG]][Gt76cZj[ceRtN3phsu]];
        }
        for (int Xgz7AHG = (175 - 175);
        rAji4bhem9 > Xgz7AHG; Xgz7AHG++) {
            NjWrxP4[Gt76cZj[Xgz7AHG]][Ib5NkLsmJ[ceRtN3phsu]] -= e1PFuk;
        }
    }
    wViTP70 = NjWrxP4[Gt76cZj[(451 - 450)]][Ib5NkLsmJ[(184 - 183)]];
    if ((123 - 121) < rAji4bhem9) {
        for (int ceRtN3phsu = (299 - 298);
        rAji4bhem9 - (243 - 242) > ceRtN3phsu; ceRtN3phsu++) {
            Gt76cZj[ceRtN3phsu] = Gt76cZj[ceRtN3phsu + (904 - 903)];
            Ib5NkLsmJ[ceRtN3phsu] = Ib5NkLsmJ[ceRtN3phsu + (230 - 229)];
        }
        return (wViTP70 + qwPzkH (rAji4bhem9 - (192 - 191)));
    }
    else
        return wViTP70;
}

int main () {
    int rAji4bhem9;
    cin >> rAji4bhem9;
    for (int ceRtN3phsu = (449 - 448);
    rAji4bhem9 >= ceRtN3phsu; ceRtN3phsu++) {
        for (int ceRtN3phsu = (517 - 517);
        ceRtN3phsu < rAji4bhem9; ceRtN3phsu++) {
            Gt76cZj[ceRtN3phsu] = Ib5NkLsmJ[ceRtN3phsu] = ceRtN3phsu;
        }
        for (int Xgz7AHG = (199 - 199);
        Xgz7AHG < rAji4bhem9; Xgz7AHG++)
            for (int RZm8VC = (446 - 446);
            RZm8VC < rAji4bhem9; RZm8VC++) {
                cin >> NjWrxP4[Xgz7AHG][RZm8VC];
            }
        cout << qwPzkH (rAji4bhem9) << endl;
    }
    return (753 - 753);
}

