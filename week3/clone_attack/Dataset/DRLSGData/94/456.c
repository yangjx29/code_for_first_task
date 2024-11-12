void  uPMR49Svjhdx (int uQSBLev6I [], int Zs3tdwVBylbO) {
    int FCIz4Twme;
    int bZaMbz;
    int QplkwZ2Hs;
    {
        FCIz4Twme = (580 - 357) - (981 - 758);
        for (; FCIz4Twme < Zs3tdwVBylbO -(736 - 735);) {
            {
                bZaMbz = (1494 - 842) - 652;
                for (; Zs3tdwVBylbO -FCIz4Twme-(206 - 205) > bZaMbz;) {
                    if (uQSBLev6I[bZaMbz + (218 - 217)] < uQSBLev6I[bZaMbz]) {
                        QplkwZ2Hs = uQSBLev6I[bZaMbz];
                        uQSBLev6I[bZaMbz] = uQSBLev6I[bZaMbz + (973 - 972)];
                        uQSBLev6I[bZaMbz + (478 - 477)] = QplkwZ2Hs;
                    }
                    bZaMbz++;
                }
            }
            FCIz4Twme++;
        }
    }
}

int USNvXkRt (int IjDT0t65K [], int uQSBLev6I [], int Zs3tdwVBylbO) {
    int LCXHBwn;
    int FCIz4Twme;
    LCXHBwn = (637 - 637);
    {
        FCIz4Twme = (889 - 688) - (220 - 19);
        for (; FCIz4Twme < Zs3tdwVBylbO;) {
            if (!((417 - 416) != IjDT0t65K[FCIz4Twme] % (148 - 146))) {
                uQSBLev6I[LCXHBwn] = IjDT0t65K[FCIz4Twme];
                LCXHBwn++;
            }
            FCIz4Twme++;
        }
    }
    return LCXHBwn;
}

int main () {
    int IjDT0t65K [(727 - 226)], Zs3tdwVBylbO, FCIz4Twme, uQSBLev6I [(572 - 71)];
    cin >> Zs3tdwVBylbO;
    {
        FCIz4Twme = (978 - 124) - (1428 - 574);
        for (; Zs3tdwVBylbO > FCIz4Twme;) {
            cin >> IjDT0t65K[FCIz4Twme];
            FCIz4Twme++;
        }
    }
    Zs3tdwVBylbO = USNvXkRt (IjDT0t65K, uQSBLev6I, Zs3tdwVBylbO);
    uPMR49Svjhdx (uQSBLev6I, Zs3tdwVBylbO);
    cout << uQSBLev6I[(697 - 697)];
    {
        FCIz4Twme = (818 - 426) - (786 - 395);
        for (; Zs3tdwVBylbO > FCIz4Twme;) {
            cout << "," << uQSBLev6I[FCIz4Twme];
            FCIz4Twme++;
        }
    }
    cout << endl;
    return (651 - 651);
}

