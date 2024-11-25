int rXUyAWPFVdq [(1774 - 764)], oh0kdFUyIX [(1899 - 889)];

int cHvC2Y (const  void  *rXUyAWPFVdq, const  void  *oh0kdFUyIX) {
    return *(int*) rXUyAWPFVdq - *(int*) oh0kdFUyIX;
}

int main () {
    int vxfpWmulHoik;
    while (cin >> vxfpWmulHoik) {
        int i, XlzdbuvF;
        int uWE4jhz [(1317 - 307)] = {(782 - 782)}, mMQhtiUq5G [1010] = {(998 - 998)};
        int eAyhkv = (617 - 617), EaVLHopb = (132 - 132), ahyrR0xHUOP5 = (442 - 442), jIPfxrjZ = (219 - 219), m0tQrDhp = (935 - 935), HELYgZH = vxfpWmulHoik - (856 - 855), i42iDpcbg = (882 - 882), gnQm9TR = vxfpWmulHoik - (345 - 344);
        if (!((58 - 58) != vxfpWmulHoik))
            break;
        {
            i = (347 - 347);
            while (i < vxfpWmulHoik) {
                cin >> rXUyAWPFVdq[i];
                i++;
            }
        }
        {
            i = (234 - 234);
            while (i < vxfpWmulHoik) {
                cin >> oh0kdFUyIX[i];
                i++;
            }
        }
        qsort (rXUyAWPFVdq, vxfpWmulHoik, sizeof (rXUyAWPFVdq [(780 - 780)]), cHvC2Y);
        qsort (oh0kdFUyIX, vxfpWmulHoik, sizeof (rXUyAWPFVdq [(380 - 380)]), cHvC2Y);
        while (m0tQrDhp <= HELYgZH &&i42iDpcbg <= gnQm9TR) {
            if (oh0kdFUyIX[i42iDpcbg] < rXUyAWPFVdq[m0tQrDhp]) {
                i42iDpcbg++;
                m0tQrDhp++;
                eAyhkv++;
                continue;
            }
            if (rXUyAWPFVdq[HELYgZH] > oh0kdFUyIX[gnQm9TR]) {
                gnQm9TR--;
                HELYgZH--;
                eAyhkv++;
                continue;
            }
            if (rXUyAWPFVdq[m0tQrDhp] == oh0kdFUyIX[gnQm9TR]) {
                jIPfxrjZ++;
                m0tQrDhp++;
                gnQm9TR--;
                continue;
            }
            m0tQrDhp++;
            gnQm9TR--;
            ahyrR0xHUOP5++;
        }
        XlzdbuvF = (834 - 834);
        cout << eAyhkv * (1017 - 817) - ahyrR0xHUOP5 * (292 - 92) << endl;
    }
}

