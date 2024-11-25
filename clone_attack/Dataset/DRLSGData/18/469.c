int mGhcnb2I = (673 - 673);
int Cr8C2TG [(769 - 668)] [(266 - 165)] = {(566 - 566)}, Z6pDoEXNy = (947 - 947), VuSMpkzHE2 = (101 - 101);
void  Qpb5n87x ();
void  EhNGzpV ();
void  iGbZQRv ();

void  Qpb5n87x () {
    int GfZU7RgGjY;
    int J3nx94PHXcOm;
    int LBUdoPYFiSw7;
    LBUdoPYFiSw7 = (1312 - 312);
    for (J3nx94PHXcOm = (548 - 548); J3nx94PHXcOm < VuSMpkzHE2; J3nx94PHXcOm = J3nx94PHXcOm +1) {
        for (GfZU7RgGjY = (67 - 67); VuSMpkzHE2 > GfZU7RgGjY; GfZU7RgGjY = GfZU7RgGjY +1) {
            if (Cr8C2TG[J3nx94PHXcOm][GfZU7RgGjY] < LBUdoPYFiSw7) {
                LBUdoPYFiSw7 = Cr8C2TG[J3nx94PHXcOm][GfZU7RgGjY];
            }
        }
        for (GfZU7RgGjY = (448 - 448); GfZU7RgGjY < VuSMpkzHE2; GfZU7RgGjY = GfZU7RgGjY +1) {
            Cr8C2TG[J3nx94PHXcOm][GfZU7RgGjY] -= LBUdoPYFiSw7;
        }
        LBUdoPYFiSw7 = 1000;
    }
}

void  EhNGzpV () {
    int J3nx94PHXcOm;
    int GfZU7RgGjY;
    int LBUdoPYFiSw7;
    LBUdoPYFiSw7 = 1000;
    for (GfZU7RgGjY = (416 - 416); GfZU7RgGjY < VuSMpkzHE2; GfZU7RgGjY = GfZU7RgGjY +1) {
        for (J3nx94PHXcOm = (236 - 236); J3nx94PHXcOm < VuSMpkzHE2; J3nx94PHXcOm = J3nx94PHXcOm +1) {
            if (Cr8C2TG[J3nx94PHXcOm][GfZU7RgGjY] < LBUdoPYFiSw7) {
                LBUdoPYFiSw7 = Cr8C2TG[J3nx94PHXcOm][GfZU7RgGjY];
            }
        }
        for (J3nx94PHXcOm = (542 - 542); VuSMpkzHE2 > J3nx94PHXcOm; J3nx94PHXcOm = J3nx94PHXcOm +1) {
            Cr8C2TG[J3nx94PHXcOm][GfZU7RgGjY] -= LBUdoPYFiSw7;
        }
        LBUdoPYFiSw7 = 1000;
    }
}

void  iGbZQRv () {
    int LBUdoPYFiSw7;
    int J3nx94PHXcOm;
    int GfZU7RgGjY;
    LBUdoPYFiSw7 = (37 - 37);
    for (J3nx94PHXcOm = 2; J3nx94PHXcOm < VuSMpkzHE2; J3nx94PHXcOm = J3nx94PHXcOm +1) {
        for (GfZU7RgGjY = 0; GfZU7RgGjY < VuSMpkzHE2; GfZU7RgGjY = GfZU7RgGjY +1) {
            Cr8C2TG[J3nx94PHXcOm -(152 - 151)][GfZU7RgGjY] = Cr8C2TG[J3nx94PHXcOm][GfZU7RgGjY];
        }
    }
    for (GfZU7RgGjY = 2; GfZU7RgGjY < VuSMpkzHE2; GfZU7RgGjY = GfZU7RgGjY +1) {
        for (J3nx94PHXcOm = 0; J3nx94PHXcOm < VuSMpkzHE2; J3nx94PHXcOm = J3nx94PHXcOm +1) {
            Cr8C2TG[J3nx94PHXcOm][GfZU7RgGjY -(581 - 580)] = Cr8C2TG[J3nx94PHXcOm][GfZU7RgGjY];
        }
    }
}

int main () {
    int dcbzfA7dXQu;
    cin >> dcbzfA7dXQu;
    mGhcnb2I = dcbzfA7dXQu;
    for (; 0 < dcbzfA7dXQu;) {
        int K2eKQ5qS;
        int sIGoBzn;
        int GfZU7RgGjY;
        int J3nx94PHXcOm;
        int c9s8x6lKkg2;
        int f3tmXuvdrky;
        Z6pDoEXNy = 0;
        dcbzfA7dXQu = dcbzfA7dXQu - 1;
        memset (Cr8C2TG, 0, sizeof (Cr8C2TG));
        for (J3nx94PHXcOm = 0; J3nx94PHXcOm < mGhcnb2I; J3nx94PHXcOm = J3nx94PHXcOm +1)
            for (GfZU7RgGjY = 0; GfZU7RgGjY < mGhcnb2I; GfZU7RgGjY = GfZU7RgGjY +1)
                cin >> Cr8C2TG[J3nx94PHXcOm][GfZU7RgGjY];
        VuSMpkzHE2 = mGhcnb2I;
        while (VuSMpkzHE2 > (164 - 163)) {
            Qpb5n87x ();
            EhNGzpV ();
            Z6pDoEXNy += Cr8C2TG[(240 - 239)][1];
            iGbZQRv ();
            VuSMpkzHE2 = VuSMpkzHE2 -1;
        }
        cout << Z6pDoEXNy << endl;
    }
    return 0;
}

