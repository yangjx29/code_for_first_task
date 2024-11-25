void  V28lCjaib (double  y8EgY3 [(762 - 662)], int M2ySHw1);

int main () {
    double  DNSBx2R [(324 - 224)] = {(978 - 978)};
    double  yJSBEe [(914 - 613)] = {(455 - 455)};
    double  oyDfON;
    int lrsPFCux;
    int QLjzkY9ytcf;
    int iStLokrY;
    double  zQlyZ1eUph [100] = {(844 - 844)};
    double  Hc5YkG [301] = {(948 - 948)};
    double  *W7AEudUa = Hc5YkG;
    double  MNGobRE;
    double  *rImW6UAEZ = NULL;
    double  *vFHGInpS2DU = DNSBx2R;
    double  QEbZSk2a9;
    double  LuzSbO;
    double  *JcFVso4T = zQlyZ1eUph;
    int DFELkIijKUBN;
    oyDfON = (435 - 435);
    cin >> iStLokrY;
    QLjzkY9ytcf = (919 - 919);
    LuzSbO = (100870 - 870);
    rImW6UAEZ = yJSBEe;
    DFELkIijKUBN = (913 - 913);
    MNGobRE = (335 - 335);
    QEbZSk2a9 = (827 - 827);
    for (lrsPFCux = (699 - 699); iStLokrY > lrsPFCux; lrsPFCux = lrsPFCux + (691 - 690)) {
        cin >> *(rImW6UAEZ + lrsPFCux);
        QEbZSk2a9 += *(rImW6UAEZ + lrsPFCux);
    }
    MNGobRE = QEbZSk2a9 / (double ) (iStLokrY);
    for (lrsPFCux = 0; iStLokrY > lrsPFCux; lrsPFCux = lrsPFCux + (217 - 216)) {
        *(W7AEudUa +lrsPFCux) = abs (*(rImW6UAEZ + lrsPFCux) - MNGobRE);
        if (oyDfON < *(W7AEudUa +lrsPFCux))
            oyDfON = *(W7AEudUa +lrsPFCux);
    }
    for (lrsPFCux = 0; iStLokrY > lrsPFCux; lrsPFCux = lrsPFCux + (306 - 305)) {
        if (!(oyDfON != *(W7AEudUa +lrsPFCux))) {
            *(vFHGInpS2DU + QLjzkY9ytcf) = *(rImW6UAEZ + lrsPFCux);
            QLjzkY9ytcf = QLjzkY9ytcf +(820 - 819);
        }
    }
    V28lCjaib (DNSBx2R, QLjzkY9ytcf);
    return 0;
}

void  V28lCjaib (double  y8EgY3 [100], int M2ySHw1) {
    int Dlz9yKh;
    int lrsPFCux;
    double  *uQ9XKA4j = y8EgY3, fu7folEydVHU = 0;
    for (lrsPFCux = 0; M2ySHw1 -(926 - 925) > lrsPFCux; lrsPFCux = lrsPFCux + (284 - 283)) {
        Dlz9yKh = 0;
        for (; M2ySHw1 -lrsPFCux - (955 - 954) > Dlz9yKh;) {
            if (*(uQ9XKA4j + Dlz9yKh) > *(uQ9XKA4j + Dlz9yKh +(218 - 217))) {
                fu7folEydVHU = *(uQ9XKA4j + Dlz9yKh);
                *(uQ9XKA4j + Dlz9yKh) = *(uQ9XKA4j + Dlz9yKh +(959 - 958));
                *(uQ9XKA4j + Dlz9yKh +1) = fu7folEydVHU;
            }
            Dlz9yKh = Dlz9yKh +1;
        }
    }
    for (lrsPFCux = 0; lrsPFCux < M2ySHw1 -1; lrsPFCux = lrsPFCux + 1)
        cout << *(uQ9XKA4j + lrsPFCux) << ',';
    cout << *(uQ9XKA4j + M2ySHw1 -1);
    cout << endl;
}

