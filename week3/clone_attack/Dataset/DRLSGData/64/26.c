int main () {
    int QIVocw9iMR [10];
    int DZTKCP [50] [6];
    int t6MywR9IYEe [10];
    int TDv5HYxVeF7f, Le0ct5gsL, XZSMgQ, fwijde, HrK9q2xvg;
    int PtC2NMGOjdo [10];
    double  v2LGTdmUQ8t4 [50];
    double  a3OTGVIhp6wQ;
    scanf ("%d", &TDv5HYxVeF7f);
    {
        Le0ct5gsL = 0;
        for (; TDv5HYxVeF7f > Le0ct5gsL;) {
            scanf ("%d %d %d", &QIVocw9iMR[Le0ct5gsL], &t6MywR9IYEe[Le0ct5gsL], &PtC2NMGOjdo[Le0ct5gsL]);
            Le0ct5gsL = Le0ct5gsL +1;
        }
    }
    fwijde = 0;
    for (Le0ct5gsL = 0; TDv5HYxVeF7f -1 > Le0ct5gsL; Le0ct5gsL = Le0ct5gsL +1) {
        XZSMgQ = TDv5HYxVeF7f -1;
        for (; Le0ct5gsL < XZSMgQ;) {
            v2LGTdmUQ8t4[fwijde] = sqrt (1.0 * ((QIVocw9iMR[Le0ct5gsL] - QIVocw9iMR[XZSMgQ]) * (QIVocw9iMR[Le0ct5gsL] - QIVocw9iMR[XZSMgQ]) + (t6MywR9IYEe[Le0ct5gsL] - t6MywR9IYEe[XZSMgQ]) * (t6MywR9IYEe[Le0ct5gsL] - t6MywR9IYEe[XZSMgQ]) + (PtC2NMGOjdo[Le0ct5gsL] - PtC2NMGOjdo[XZSMgQ]) * (PtC2NMGOjdo[Le0ct5gsL] - PtC2NMGOjdo[XZSMgQ])));
            DZTKCP[fwijde][0] = QIVocw9iMR[Le0ct5gsL];
            DZTKCP[fwijde][1] = t6MywR9IYEe[Le0ct5gsL];
            DZTKCP[fwijde][2] = PtC2NMGOjdo[Le0ct5gsL];
            DZTKCP[fwijde][3] = QIVocw9iMR[XZSMgQ];
            DZTKCP[fwijde][4] = t6MywR9IYEe[XZSMgQ];
            DZTKCP[fwijde][5] = PtC2NMGOjdo[XZSMgQ];
            XZSMgQ = XZSMgQ -1;
            fwijde = fwijde + 1;
        }
    }
    for (Le0ct5gsL = 1; Le0ct5gsL <= TDv5HYxVeF7f *(TDv5HYxVeF7f -1) / 2; Le0ct5gsL = Le0ct5gsL +1) {
        XZSMgQ = 0;
        for (; XZSMgQ < TDv5HYxVeF7f *(TDv5HYxVeF7f -1) / 2 - Le0ct5gsL;) {
            if (v2LGTdmUQ8t4[XZSMgQ] >= v2LGTdmUQ8t4[XZSMgQ +1]) {
                a3OTGVIhp6wQ = v2LGTdmUQ8t4[XZSMgQ +1];
                v2LGTdmUQ8t4[XZSMgQ +1] = v2LGTdmUQ8t4[XZSMgQ];
                v2LGTdmUQ8t4[XZSMgQ] = a3OTGVIhp6wQ;
                HrK9q2xvg = DZTKCP[XZSMgQ +1][0];
                DZTKCP[XZSMgQ +1][0] = DZTKCP[XZSMgQ][0];
                DZTKCP[XZSMgQ][0] = HrK9q2xvg;
                HrK9q2xvg = DZTKCP[XZSMgQ +1][1];
                DZTKCP[XZSMgQ +1][1] = DZTKCP[XZSMgQ][1];
                DZTKCP[XZSMgQ][1] = HrK9q2xvg;
                HrK9q2xvg = DZTKCP[XZSMgQ +1][2];
                DZTKCP[XZSMgQ +1][2] = DZTKCP[XZSMgQ][2];
                DZTKCP[XZSMgQ][2] = HrK9q2xvg;
                HrK9q2xvg = DZTKCP[XZSMgQ +1][3];
                DZTKCP[XZSMgQ +1][3] = DZTKCP[XZSMgQ][3];
                DZTKCP[XZSMgQ][3] = HrK9q2xvg;
                HrK9q2xvg = DZTKCP[XZSMgQ +1][4];
                DZTKCP[XZSMgQ +1][4] = DZTKCP[XZSMgQ][4];
                DZTKCP[XZSMgQ][4] = HrK9q2xvg;
                HrK9q2xvg = DZTKCP[XZSMgQ +1][5];
                DZTKCP[XZSMgQ +1][5] = DZTKCP[XZSMgQ][5];
                DZTKCP[XZSMgQ][5] = HrK9q2xvg;
            }
            XZSMgQ = XZSMgQ +1;
        }
    }
    for (Le0ct5gsL = TDv5HYxVeF7f *(TDv5HYxVeF7f -1) / 2 - 1; Le0ct5gsL >= 0; Le0ct5gsL = Le0ct5gsL -1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", DZTKCP[Le0ct5gsL][0], DZTKCP[Le0ct5gsL][1], DZTKCP[Le0ct5gsL][2], DZTKCP[Le0ct5gsL][3], DZTKCP[Le0ct5gsL][4], DZTKCP[Le0ct5gsL][5], v2LGTdmUQ8t4[Le0ct5gsL]);
    }
    return 0;
}

