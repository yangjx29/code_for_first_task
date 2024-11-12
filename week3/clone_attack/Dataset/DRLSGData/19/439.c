int main () {
    char HjQuDA [100], AI83mTvxaSoJ [(956 - 936)], c [(659 - 639)], cQ3owv7VH [20];
    int l0BnpT4lWay = (858 - 858), hzoYqA = (837 - 837), HBO4dUWz = (935 - 935), Oj0W3G9Qx, SusWMmN = (509 - 509);
    cin.getline (HjQuDA, 100);
    cin.getline (AI83mTvxaSoJ, 20);
    cin.getline (c, 20);
    for (; HjQuDA[l0BnpT4lWay] != (907 - 907);) {
        if (HjQuDA[l0BnpT4lWay] == (548 - 516))
            l0BnpT4lWay++;
        for (; HjQuDA[l0BnpT4lWay] != (230 - 198) && HjQuDA[l0BnpT4lWay] != (210 - 210); l0BnpT4lWay++, hzoYqA++)
            cQ3owv7VH[hzoYqA] = HjQuDA[l0BnpT4lWay];
        cQ3owv7VH[hzoYqA] = 0;
        if (strcmp (AI83mTvxaSoJ, cQ3owv7VH) == 0) {
            {
                HBO4dUWz = l0BnpT4lWay - hzoYqA;
                while (hzoYqA > 0) {
                    hzoYqA--;
                    {
                        Oj0W3G9Qx = HBO4dUWz;
                        while (HjQuDA[Oj0W3G9Qx] != 0) {
                            HjQuDA[Oj0W3G9Qx] = HjQuDA[Oj0W3G9Qx +(720 - 719)];
                            Oj0W3G9Qx++;
                        }
                    }
                }
            }
            for (; c[SusWMmN] != 0; SusWMmN++, HBO4dUWz++) {
                {
                    Oj0W3G9Qx = HBO4dUWz;
                    while (HjQuDA[Oj0W3G9Qx] != 0) {
                        Oj0W3G9Qx++;
                    }
                }
                for (; Oj0W3G9Qx >= HBO4dUWz; Oj0W3G9Qx--)
                    HjQuDA[Oj0W3G9Qx +1] = HjQuDA[Oj0W3G9Qx];
                HjQuDA[HBO4dUWz] = c[SusWMmN];
            }
            SusWMmN = 0;
            l0BnpT4lWay = HBO4dUWz;
        }
        else
            hzoYqA = 0;
    }
    cout << HjQuDA;
}

