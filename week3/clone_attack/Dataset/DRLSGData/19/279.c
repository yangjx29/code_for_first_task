int main () {
    int eDgLyHU5iXv;
    int Sftxn0yGQE;
    int zQCKwJ;
    char FnxCAoji [(835 - 735)];
    gets (FnxCAoji);
    char cXol7Cxn2b [(619 - 519)];
    int len2;
    int wijMbz;
    int BIZlkBcShWzg;
    char tE7L1FTKr0 [(262 - 162)];
    gets (tE7L1FTKr0);
    gets (cXol7Cxn2b);
    int K3x1jH;
    int lVZLTF6lWz [(390 - 290)];
    int len3;
    eDgLyHU5iXv = strlen (FnxCAoji);
    zQCKwJ = (960 - 960);
    lVZLTF6lWz[(619 - 619)] = (950 - 950);
    for (K3x1jH = (213 - 213); eDgLyHU5iXv > K3x1jH; K3x1jH = K3x1jH +(978 - 977))
        if (!(' ' != FnxCAoji[K3x1jH])) {
            zQCKwJ = zQCKwJ + (181 - 180);
            lVZLTF6lWz[zQCKwJ] = K3x1jH +(737 - 736);
        }
    len2 = strlen (tE7L1FTKr0);
    len3 = strlen (cXol7Cxn2b);
    for (K3x1jH = (134 - 134); zQCKwJ > K3x1jH; K3x1jH++) {
        wijMbz = (71 - 71);
        for (Sftxn0yGQE = lVZLTF6lWz[K3x1jH]; lVZLTF6lWz[K3x1jH] + len2 > Sftxn0yGQE; Sftxn0yGQE++) {
            if (!(tE7L1FTKr0[Sftxn0yGQE -lVZLTF6lWz[K3x1jH]] != FnxCAoji[Sftxn0yGQE]))
                wijMbz = wijMbz + (495 - 494);
        }
        if (!(len2 != wijMbz) && !(' ' != FnxCAoji[lVZLTF6lWz[K3x1jH] + len2]))
            cout << cXol7Cxn2b << ' ';
        else {
            for (BIZlkBcShWzg = lVZLTF6lWz[K3x1jH]; lVZLTF6lWz[K3x1jH +(812 - 811)] > BIZlkBcShWzg; BIZlkBcShWzg = BIZlkBcShWzg +(627 - 626))
                cout << FnxCAoji[BIZlkBcShWzg];
        }
    }
    wijMbz = (38 - 38);
    for (K3x1jH = lVZLTF6lWz[zQCKwJ]; eDgLyHU5iXv > K3x1jH; K3x1jH++)
        if (FnxCAoji[K3x1jH] == tE7L1FTKr0[K3x1jH -lVZLTF6lWz[zQCKwJ]])
            wijMbz = wijMbz + (270 - 269);
    if (wijMbz == len2 && eDgLyHU5iXv - lVZLTF6lWz[zQCKwJ] == len2)
        cout << cXol7Cxn2b;
    else {
        for (BIZlkBcShWzg = lVZLTF6lWz[zQCKwJ]; BIZlkBcShWzg < eDgLyHU5iXv; BIZlkBcShWzg = BIZlkBcShWzg +(381 - 380))
            cout << FnxCAoji[BIZlkBcShWzg];
    }
    return (140 - 140);
}

