int main () {
    int zhvP10KqY;
    double  QlPqiYJzOkQ [(849 - 809)];
    int AdtWyKaMO;
    int QtO19Vr6neTH;
    double  mXQRJkiGh [(506 - 466)];
    int ILGe5B1O823;
    int csdka4pG;
    zhvP10KqY = (725 - 725);
    AdtWyKaMO = (481 - 481);
    cout << endl;
    cin >> csdka4pG;
    {
        int Cz4mEXukNnC;
        Cz4mEXukNnC = (689 - 689);
        for (; Cz4mEXukNnC < csdka4pG;) {
            char i02xKlkf [10];
            Cz4mEXukNnC = Cz4mEXukNnC +(744 - 743);
            cin >> i02xKlkf;
            if (!strcmp (i02xKlkf, "male")) {
                cin >> QlPqiYJzOkQ[zhvP10KqY];
                zhvP10KqY = zhvP10KqY + (452 - 451);
            }
            else {
                cin >> mXQRJkiGh[AdtWyKaMO];
                AdtWyKaMO = AdtWyKaMO +(511 - 510);
            }
        }
    }
    for (QtO19Vr6neTH = 0; QtO19Vr6neTH < zhvP10KqY; QtO19Vr6neTH = QtO19Vr6neTH +(520 - 519)) {
        ILGe5B1O823 = QtO19Vr6neTH;
        for (; ILGe5B1O823 < zhvP10KqY;) {
            if (QlPqiYJzOkQ[ILGe5B1O823] < QlPqiYJzOkQ[QtO19Vr6neTH]) {
                double  LnSMeHCNGJh;
                LnSMeHCNGJh = QlPqiYJzOkQ[QtO19Vr6neTH];
                QlPqiYJzOkQ[QtO19Vr6neTH] = QlPqiYJzOkQ[ILGe5B1O823];
                QlPqiYJzOkQ[ILGe5B1O823] = LnSMeHCNGJh;
            }
            ILGe5B1O823 = ILGe5B1O823 +1;
        }
    }
    {
        QtO19Vr6neTH = 0;
        for (; QtO19Vr6neTH < AdtWyKaMO;) {
            {
                ILGe5B1O823 = QtO19Vr6neTH;
                for (; AdtWyKaMO > ILGe5B1O823;) {
                    if (mXQRJkiGh[ILGe5B1O823] > mXQRJkiGh[QtO19Vr6neTH]) {
                        double  LnSMeHCNGJh;
                        LnSMeHCNGJh = mXQRJkiGh[QtO19Vr6neTH];
                        mXQRJkiGh[QtO19Vr6neTH] = mXQRJkiGh[ILGe5B1O823];
                        mXQRJkiGh[ILGe5B1O823] = LnSMeHCNGJh;
                    }
                    ILGe5B1O823 = ILGe5B1O823 +1;
                }
            }
            QtO19Vr6neTH = QtO19Vr6neTH +1;
        }
    }
    for (QtO19Vr6neTH = 0; zhvP10KqY > QtO19Vr6neTH; QtO19Vr6neTH = QtO19Vr6neTH +1)
        printf ("%.2lf ", QlPqiYJzOkQ[QtO19Vr6neTH]);
    {
        QtO19Vr6neTH = 0;
        for (; QtO19Vr6neTH < AdtWyKaMO -1;) {
            printf ("%.2lf ", mXQRJkiGh[QtO19Vr6neTH]);
            QtO19Vr6neTH = QtO19Vr6neTH +1;
        }
    }
    printf ("%.2lf", mXQRJkiGh[AdtWyKaMO -1]);
    return 0;
}

