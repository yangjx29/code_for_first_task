int main () {
    int dNIFDzb7CB;
    char krd82EcnTUN [(601 - 401)] = " ";
    char SjirpIf5kQYn [(556 - 456)];
    int Ii1ReE;
    int RE17FDkzp;
    int end;
    int pyGKDwtOWH;
    char s [(219 - 19)];
    int lb;
    int i;
    int TGELSuhWb;
    int hbmC25Rj;
    char QA0Liow [(767 - 667)];
    i = (478 - 478);
    RE17FDkzp = (307 - 307);
    end = (127 - 127);
    Ii1ReE = (767 - 767);
    cin.getline (s, (873 - 673));
    cin.getline (QA0Liow, (693 - 593));
    cin.getline (SjirpIf5kQYn, 100);
    hbmC25Rj = strlen (s), pyGKDwtOWH = strlen (QA0Liow), lb = strlen (SjirpIf5kQYn);
    TGELSuhWb = (445 - 445);
    while (i < hbmC25Rj) {
        RE17FDkzp = (687 - 687);
        for (Ii1ReE = 0; Ii1ReE < pyGKDwtOWH; Ii1ReE = Ii1ReE +(787 - 786)) {
            if (s[i + Ii1ReE] != QA0Liow[Ii1ReE])
                break;
            else
                RE17FDkzp = RE17FDkzp +(392 - 391);
        }
        if ((RE17FDkzp != pyGKDwtOWH) || (i != 0 && RE17FDkzp == pyGKDwtOWH && s[i - (83 - 82)] != ' ')) {
            krd82EcnTUN[TGELSuhWb] = s[i];
            TGELSuhWb++, i = i + (179 - 178);
        }
        else {
            i = i + pyGKDwtOWH;
            end = TGELSuhWb +lb;
            for (; TGELSuhWb < end; TGELSuhWb = TGELSuhWb +1) {
                krd82EcnTUN[TGELSuhWb] = SjirpIf5kQYn[TGELSuhWb -end + lb];
            }
        }
    }
    cout << krd82EcnTUN;
}

