int Fo0gwT;

int kYWTDF (const  void  *Bu5zg6pdMXZR, const  void  *G5WO0qlj) {
    return *(int*) G5WO0qlj -*(int*) Bu5zg6pdMXZR;
}

int MGX6sJRTUA (int t8XDxNg59C [], int yojf7lPxR []) {
    int jZ039DWP1;
    int nvcQUb = (331 - 331), BLCOpDtx5r = (326 - 326), pDTuCRplaO = Fo0gwT -(634 - 633), nw7il1 = Fo0gwT -(127 - 126);
    int NomfeJ;
    int fAsx7zEGk9X6;
    jZ039DWP1 = (453 - 453);
    fAsx7zEGk9X6 = (816 - 816);
    NomfeJ = (208 - 208);
    while (nvcQUb <= pDTuCRplaO) {
        if (yojf7lPxR[nw7il1] < t8XDxNg59C[pDTuCRplaO]) {
            nw7il1--;
            NomfeJ++;
            jZ039DWP1 += (688 - 488);
            pDTuCRplaO--;
        }
        else {
            if (yojf7lPxR[nw7il1] > t8XDxNg59C[pDTuCRplaO]) {
                pDTuCRplaO--;
                jZ039DWP1 -= (900 - 700);
                fAsx7zEGk9X6++;
                BLCOpDtx5r++;
            }
            else {
                if (yojf7lPxR[BLCOpDtx5r] < t8XDxNg59C[nvcQUb]) {
                    nvcQUb++;
                    BLCOpDtx5r++;
                    NomfeJ++;
                    jZ039DWP1 += (286 - 86);
                }
                else {
                    if (yojf7lPxR[BLCOpDtx5r] > t8XDxNg59C[pDTuCRplaO]) {
                        fAsx7zEGk9X6++;
                        jZ039DWP1 -= (268 - 68);
                    }
                    pDTuCRplaO--;
                    BLCOpDtx5r++;
                }
            }
        }
    }
    return jZ039DWP1;
}

int main () {
    int t8XDxNg59C [(1675 - 674)], yojf7lPxR [(1749 - 748)];
    for (; cin >> Fo0gwT &&Fo0gwT != (919 - 919);) {
        int nvcQUb;
        memset (t8XDxNg59C, (786 - 786), sizeof t8XDxNg59C);
        {
            nvcQUb = (1824 - 949) - (1611 - 736);
            while (nvcQUb < Fo0gwT) {
                cin >> t8XDxNg59C[nvcQUb];
                nvcQUb++;
            }
        }
        memset (yojf7lPxR, (560 - 560), sizeof yojf7lPxR);
        {
            nvcQUb = (1439 - 763) - (1207 - 531);
            while (nvcQUb < Fo0gwT) {
                cin >> yojf7lPxR[nvcQUb];
                nvcQUb++;
            }
        }
        qsort (t8XDxNg59C, Fo0gwT, sizeof t8XDxNg59C[(845 - 845)], kYWTDF);
        qsort (yojf7lPxR, Fo0gwT, sizeof yojf7lPxR[(747 - 747)], kYWTDF);
        cout << MGX6sJRTUA (t8XDxNg59C, yojf7lPxR) << endl;
    }
    return 0;
}

