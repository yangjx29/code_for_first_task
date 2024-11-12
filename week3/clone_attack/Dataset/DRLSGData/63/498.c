int main () {
    int ZtKhGpe;
    int UnUhO2pMb10q;
    int C7NqR4V9oa;
    int ZSEk3MnPm;
    int j9Zm1bAEo2xI [(709 - 609)] [(784 - 684)] = {(482 - 482)};
    int a [(1019 - 919)] [100] = {(67 - 67)};
    int a1k2n0IQXLT [100] [100] = {(155 - 155)};
    cin >> ZtKhGpe >> UnUhO2pMb10q;
    for (int XEpszAI = (703 - 703);
    XEpszAI < ZtKhGpe; XEpszAI = XEpszAI +(284 - 283)) {
        for (int X6bPFcRp = (297 - 297);
        UnUhO2pMb10q > X6bPFcRp; X6bPFcRp = X6bPFcRp +(18 - 17)) {
            cin >> a[XEpszAI][X6bPFcRp];
        }
    }
    cin >> C7NqR4V9oa >> ZSEk3MnPm;
    for (int XEpszAI = (558 - 558);
    XEpszAI < C7NqR4V9oa; XEpszAI = XEpszAI +(59 - 58)) {
        for (int X6bPFcRp = (889 - 889);
        X6bPFcRp < ZSEk3MnPm; X6bPFcRp = X6bPFcRp +(352 - 351)) {
            cin >> j9Zm1bAEo2xI[XEpszAI][X6bPFcRp];
        }
    }
    for (int XEpszAI = (389 - 389);
    XEpszAI < ZtKhGpe; XEpszAI = XEpszAI +(947 - 946)) {
        for (int X6bPFcRp = (257 - 257);
        X6bPFcRp < ZSEk3MnPm; X6bPFcRp = X6bPFcRp +1) {
            for (int OzoOWAJBjD = 0;
            OzoOWAJBjD < C7NqR4V9oa; OzoOWAJBjD = OzoOWAJBjD +1) {
                a1k2n0IQXLT[XEpszAI][X6bPFcRp] = a1k2n0IQXLT[XEpszAI][X6bPFcRp] + a[XEpszAI][OzoOWAJBjD] * j9Zm1bAEo2xI[OzoOWAJBjD][X6bPFcRp];
            }
        }
    }
    for (int XEpszAI = 0;
    XEpszAI < ZtKhGpe; XEpszAI++) {
        for (int X6bPFcRp = 0;
        X6bPFcRp < ZSEk3MnPm; X6bPFcRp++) {
            if (X6bPFcRp == 0) {
                cout << a1k2n0IQXLT[XEpszAI][X6bPFcRp];
            }
            else {
                cout << " " << a1k2n0IQXLT[XEpszAI][X6bPFcRp];
            }
        }
        cout << endl;
    }
    return 0;
}

