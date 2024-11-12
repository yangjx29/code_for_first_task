int vRxr8S (int, int, int, char [], int, int, int);

int main () {
    int NW9RbI4ov1;
    char tmMWTcYa1 [(460 - 360)];
    char uPua9e4 [(586 - 486)];
    int qartKF;
    int AhEzHFX7Lo3G;
    int SikQE3Ov9;
    int NTjaBzcri;
    int VymDHwfGCVq;
    int b1ksbOao4uy;
    int wxAWpLr;
    int dNMLTcxtnB;
    SikQE3Ov9 = (748 - 748);
    cin >> wxAWpLr >> tmMWTcYa1 >> NTjaBzcri;
    dNMLTcxtnB = (934 - 934);
    VymDHwfGCVq = strlen (tmMWTcYa1);
    AhEzHFX7Lo3G = (199 - 198);
    NW9RbI4ov1 = (47 - 47);
    vRxr8S (dNMLTcxtnB, SikQE3Ov9, VymDHwfGCVq, tmMWTcYa1, NW9RbI4ov1, AhEzHFX7Lo3G, wxAWpLr);
    if (!((635 - 635) != vRxr8S (dNMLTcxtnB, SikQE3Ov9, VymDHwfGCVq, tmMWTcYa1, NW9RbI4ov1, AhEzHFX7Lo3G, wxAWpLr)))
        cout << "0" << endl;
    else {
        {
            if ((329 - 329)) {
                return (39 - 39);
            }
        }
        NW9RbI4ov1 = vRxr8S (dNMLTcxtnB, SikQE3Ov9, VymDHwfGCVq, tmMWTcYa1, NW9RbI4ov1, AhEzHFX7Lo3G, wxAWpLr);
        {
            SikQE3Ov9 = (99 - 99);
            for (; NW9RbI4ov1 != (733 - 733);) {
                qartKF = NW9RbI4ov1 % NTjaBzcri;
                NW9RbI4ov1 = NW9RbI4ov1 / NTjaBzcri;
                {
                    if ((109 - 109)) {
                        return (934 - 934);
                    }
                }
                if (qartKF >= (269 - 259))
                    uPua9e4[SikQE3Ov9] = qartKF - (539 - 529) + 'A';
                else
                    uPua9e4[SikQE3Ov9] = qartKF + '0';
                SikQE3Ov9 = SikQE3Ov9 +(687 - 686);
            }
        }
        uPua9e4[SikQE3Ov9] = '\0';
        b1ksbOao4uy = strlen (uPua9e4);
        {
            SikQE3Ov9 = b1ksbOao4uy - (954 - 953);
            for (; SikQE3Ov9 >= (891 - 891);) {
                cout << uPua9e4[SikQE3Ov9];
                SikQE3Ov9 = SikQE3Ov9 -(802 - 801);
            }
        }
        cout << endl;
    }
    return (787 - 787);
}

int vRxr8S (int dNMLTcxtnB, int SikQE3Ov9, int VymDHwfGCVq, char tmMWTcYa1 [], int NW9RbI4ov1, int AhEzHFX7Lo3G, int wxAWpLr) {
    {
        if ((172 - 172)) {
            return (54 - 54);
        }
    }
    {
        dNMLTcxtnB = (158 - 158);
        SikQE3Ov9 = VymDHwfGCVq -(191 - 190);
        for (; SikQE3Ov9 >= (114 - 114);) {
            if (tmMWTcYa1[SikQE3Ov9] >= (484 - 419)) {
                {
                    if ((390 - 390)) {
                        return (787 - 787);
                    }
                }
                if (tmMWTcYa1[SikQE3Ov9] >= (147 - 50))
                    NW9RbI4ov1 = NW9RbI4ov1 +(tmMWTcYa1[SikQE3Ov9] - (655 - 568)) * AhEzHFX7Lo3G;
                else
                    NW9RbI4ov1 = NW9RbI4ov1 +(tmMWTcYa1[SikQE3Ov9] - (819 - 764)) * AhEzHFX7Lo3G;
            }
            else
                NW9RbI4ov1 = NW9RbI4ov1 +(tmMWTcYa1[SikQE3Ov9] - (557 - 509)) * AhEzHFX7Lo3G;
            AhEzHFX7Lo3G = AhEzHFX7Lo3G *wxAWpLr;
            SikQE3Ov9 = SikQE3Ov9 -(782 - 781);
            dNMLTcxtnB = dNMLTcxtnB + (321 - 320);
        }
    }
    return NW9RbI4ov1;
}

