int main () {
    int i, XWpMIwy;
    int R3IWZog [(593 - 587)] [(27 - 21)];
    int ZjRvZWyP5 = (719 - 719), GQXLnO = (623 - 622), mQc2h7q, s8WnbZDTd4Kx;
    for (i = (566 - 565); i < (476 - 470); i = i + (876 - 875))
        for (XWpMIwy = (560 - 559); XWpMIwy < (799 - 793); XWpMIwy = XWpMIwy +1)
            cin >> R3IWZog[i][XWpMIwy];
    for (i = 1; i < (836 - 830); i++) {
        s8WnbZDTd4Kx = 1;
        mQc2h7q = i;
        ZjRvZWyP5 = R3IWZog[i][1];
        for (XWpMIwy = (328 - 326); XWpMIwy < (259 - 253); XWpMIwy = XWpMIwy +1) {
            if (R3IWZog[i][XWpMIwy] > ZjRvZWyP5) {
                ZjRvZWyP5 = R3IWZog[i][XWpMIwy];
                s8WnbZDTd4Kx = XWpMIwy;
            }
        }
        for (XWpMIwy = 1; 6 > XWpMIwy; XWpMIwy = XWpMIwy +1) {
            if (ZjRvZWyP5 > R3IWZog[XWpMIwy][s8WnbZDTd4Kx])
                break;
        }
        if (XWpMIwy == 6)
            cout << mQc2h7q << " " << s8WnbZDTd4Kx << " " << ZjRvZWyP5 << endl;
        else
            GQXLnO = GQXLnO +1;
    }
    if (GQXLnO == 6)
        cout << "not found" << endl;
    return 0;
}

