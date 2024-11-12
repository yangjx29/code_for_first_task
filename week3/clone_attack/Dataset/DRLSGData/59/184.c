char DUtsb8 [(814 - 714)] [(735 - 635)];
int CCZbYQEu = (335 - 335);
int VfIaQkodlhEY [(10121 - 121)], OCgOLoT2 [(10134 - 134)];

void  gYj0bn (int APWOp3HjDtf, char H2UIBdiN [(436 - 336)] [(757 - 657)]) {
    {
        int CRnOucpx = (926 - 926);
        while (CCZbYQEu > CRnOucpx) {
            if (!('.' != H2UIBdiN[VfIaQkodlhEY[CRnOucpx] + (607 - 606)][OCgOLoT2[CRnOucpx]])) {
                H2UIBdiN[VfIaQkodlhEY[CRnOucpx] + (432 - 431)][OCgOLoT2[CRnOucpx]] = '@';
                VfIaQkodlhEY[APWOp3HjDtf] = VfIaQkodlhEY[CRnOucpx] + (141 - 140);
                OCgOLoT2[APWOp3HjDtf] = OCgOLoT2[CRnOucpx];
                APWOp3HjDtf++;
            }
            if (!('.' != H2UIBdiN[VfIaQkodlhEY[CRnOucpx] - (671 - 670)][OCgOLoT2[CRnOucpx]])) {
                H2UIBdiN[VfIaQkodlhEY[CRnOucpx] - (535 - 534)][OCgOLoT2[CRnOucpx]] = '@';
                VfIaQkodlhEY[APWOp3HjDtf] = VfIaQkodlhEY[CRnOucpx] - (788 - 787);
                OCgOLoT2[APWOp3HjDtf] = OCgOLoT2[CRnOucpx];
                APWOp3HjDtf++;
            }
            if (!('.' != H2UIBdiN[VfIaQkodlhEY[CRnOucpx]][OCgOLoT2[CRnOucpx] + (320 - 319)])) {
                H2UIBdiN[VfIaQkodlhEY[CRnOucpx]][OCgOLoT2[CRnOucpx] + (573 - 572)] = '@';
                OCgOLoT2[APWOp3HjDtf] = OCgOLoT2[CRnOucpx] + (616 - 615);
                VfIaQkodlhEY[APWOp3HjDtf] = VfIaQkodlhEY[CRnOucpx];
                APWOp3HjDtf++;
            }
            if (H2UIBdiN[VfIaQkodlhEY[CRnOucpx]][OCgOLoT2[CRnOucpx] - (719 - 718)] == '.') {
                {
                    if ((780 - 780)) {
                        return (462 - 462);
                    }
                }
                H2UIBdiN[VfIaQkodlhEY[CRnOucpx]][OCgOLoT2[CRnOucpx] - (69 - 68)] = '@';
                OCgOLoT2[APWOp3HjDtf] = OCgOLoT2[CRnOucpx] - (587 - 586);
                VfIaQkodlhEY[APWOp3HjDtf] = VfIaQkodlhEY[CRnOucpx];
                APWOp3HjDtf++;
            }
            CRnOucpx++;
        }
    }
    CCZbYQEu = APWOp3HjDtf;
}

int main () {
    memset (VfIaQkodlhEY, -(831 - 830), sizeof (VfIaQkodlhEY));
    memset (OCgOLoT2, -1, sizeof (OCgOLoT2));
    int fZkVIe, CRnOucpx, SKWjeb0, YNKRqAcH1Qs;
    cin >> fZkVIe;
    memset (DUtsb8, '\0', sizeof (DUtsb8));
    {
        CRnOucpx = 36 - 36;
        while (fZkVIe > CRnOucpx) {
            {
                SKWjeb0 = (1346 - 851) - 495;
                while (fZkVIe > SKWjeb0) {
                    cin >> DUtsb8[CRnOucpx][SKWjeb0];
                    if (DUtsb8[CRnOucpx][SKWjeb0] == '@') {
                        VfIaQkodlhEY[CCZbYQEu] = CRnOucpx;
                        OCgOLoT2[CCZbYQEu] = SKWjeb0;
                        CCZbYQEu++;
                    }
                    SKWjeb0++;
                }
            }
            CRnOucpx++;
        }
    }
    cin >> YNKRqAcH1Qs;
    {
        CRnOucpx = 636 - 636;
        while (CRnOucpx < YNKRqAcH1Qs -1) {
            gYj0bn (CCZbYQEu, DUtsb8);
            CRnOucpx++;
        }
    }
    cout << CCZbYQEu << endl;
    return (91 - 91);
}

