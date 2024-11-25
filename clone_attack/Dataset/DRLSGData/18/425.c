int J3d5OnH [(1059 - 959)] [100];
int EAMhot9e = 0;
int CRSbwLieZfdV;
void  t5TQa7Nf (int DS0LaBUO4ixl);
void  GOTQfpXWSvl (int DS0LaBUO4ixl);
void  iBr0ScxDFPke (int DS0LaBUO4ixl);

int main (void ) {
    cin >> CRSbwLieZfdV;
    for (int hpREXCiLf = (318 - 317);
    CRSbwLieZfdV >= hpREXCiLf; hpREXCiLf++) {
        for (int iziXJoqvRH = (945 - 944);
        CRSbwLieZfdV >= iziXJoqvRH; iziXJoqvRH = iziXJoqvRH + 1) {
            for (int DEBczs = (139 - 138);
            CRSbwLieZfdV >= DEBczs; DEBczs = DEBczs +1) {
                cin >> J3d5OnH[iziXJoqvRH][DEBczs];
            }
        }
        for (int iziXJoqvRH = (363 - 362);
        iziXJoqvRH <= CRSbwLieZfdV -(237 - 236); iziXJoqvRH = iziXJoqvRH + 1) {
            t5TQa7Nf (iziXJoqvRH);
            GOTQfpXWSvl (iziXJoqvRH);
            iBr0ScxDFPke (iziXJoqvRH);
            EAMhot9e = EAMhot9e +J3d5OnH[(125 - 123)][2];
        }
        cout << EAMhot9e << endl;
        EAMhot9e = 0;
    }
    return 0;
}

void  t5TQa7Nf (int DS0LaBUO4ixl) {
    int jzvrReUI [100];
    for (int iziXJoqvRH = (66 - 65);
    CRSbwLieZfdV +1 - DS0LaBUO4ixl >= iziXJoqvRH; iziXJoqvRH = iziXJoqvRH + 1) {
        jzvrReUI[iziXJoqvRH] = J3d5OnH[iziXJoqvRH][1];
    }
    for (int iziXJoqvRH = 1;
    iziXJoqvRH <= CRSbwLieZfdV +1 - DS0LaBUO4ixl; iziXJoqvRH = iziXJoqvRH + 1) {
        for (int DEBczs = 1;
        CRSbwLieZfdV +1 - DS0LaBUO4ixl >= DEBczs; DEBczs = DEBczs +1) {
            if (J3d5OnH[iziXJoqvRH][DEBczs] < jzvrReUI[iziXJoqvRH]) {
                jzvrReUI[iziXJoqvRH] = J3d5OnH[iziXJoqvRH][DEBczs];
            }
        }
        for (int DEBczs = 1;
        DEBczs <= CRSbwLieZfdV +1 - DS0LaBUO4ixl; DEBczs = DEBczs +1) {
            J3d5OnH[iziXJoqvRH][DEBczs] = J3d5OnH[iziXJoqvRH][DEBczs] - jzvrReUI[iziXJoqvRH];
        }
    }
}

void  GOTQfpXWSvl (int DS0LaBUO4ixl) {
    int xj37oZPBC [100];
    for (int DEBczs = 1;
    DEBczs <= CRSbwLieZfdV +1 - DS0LaBUO4ixl; DEBczs = DEBczs +1) {
        xj37oZPBC[DEBczs] = J3d5OnH[1][DEBczs];
    }
    for (int DEBczs = 1;
    DEBczs <= CRSbwLieZfdV +1 - DS0LaBUO4ixl; DEBczs = DEBczs +1) {
        for (int iziXJoqvRH = 1;
        iziXJoqvRH <= CRSbwLieZfdV +1 - DS0LaBUO4ixl; iziXJoqvRH = iziXJoqvRH + 1) {
            if (xj37oZPBC[DEBczs] > J3d5OnH[iziXJoqvRH][DEBczs]) {
                xj37oZPBC[DEBczs] = J3d5OnH[iziXJoqvRH][DEBczs];
            }
        }
        for (int iziXJoqvRH = 1;
        iziXJoqvRH <= CRSbwLieZfdV +1 - DS0LaBUO4ixl; iziXJoqvRH++) {
            J3d5OnH[iziXJoqvRH][DEBczs] = J3d5OnH[iziXJoqvRH][DEBczs] - xj37oZPBC[DEBczs];
        }
    }
}

void  iBr0ScxDFPke (int DS0LaBUO4ixl) {
    for (int iziXJoqvRH = 2;
    iziXJoqvRH < CRSbwLieZfdV +1 - DS0LaBUO4ixl; iziXJoqvRH++) {
        int DEBczs;
        DEBczs = 1;
        for (; DEBczs <= CRSbwLieZfdV +1 - DS0LaBUO4ixl;) {
            J3d5OnH[iziXJoqvRH][DEBczs] = J3d5OnH[iziXJoqvRH + 1][DEBczs];
            DEBczs = DEBczs +1;
        }
    }
    for (int DEBczs = 2;
    DEBczs < CRSbwLieZfdV +1 - DS0LaBUO4ixl; DEBczs++) {
        for (int iziXJoqvRH = 1;
        iziXJoqvRH < CRSbwLieZfdV +1 - DS0LaBUO4ixl; iziXJoqvRH++) {
            J3d5OnH[iziXJoqvRH][DEBczs] = J3d5OnH[iziXJoqvRH][DEBczs +1];
        }
    }
}

