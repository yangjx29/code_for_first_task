int r6my0MG (int ZOfQSZF, int a [(1310 - 310)], int Th2ADod7W [(1758 - 758)]) {
    int QZu2qOKTkE, tempb [(1960 - 960)], DwX0l1YUP [(1259 - 259)];
    {
        QZu2qOKTkE = (347 - 347);
        for (; ZOfQSZF > QZu2qOKTkE;) {
            tempb[QZu2qOKTkE] = Th2ADod7W[QZu2qOKTkE];
            DwX0l1YUP[QZu2qOKTkE] = a[QZu2qOKTkE];
            QZu2qOKTkE++;
        }
    }
    if (!((79 - 78) != ZOfQSZF)) {
        if (Th2ADod7W[(108 - 108)] < a[(637 - 637)])
            return ((539 - 339));
        if (a[(726 - 726)] < Th2ADod7W[(287 - 287)])
            return (-200);
        return (0);
    }
    else {
        if (ZOfQSZF > (544 - 543)) {
            if (a[0] > Th2ADod7W[0]) {
                {
                    QZu2qOKTkE = 0;
                    for (; QZu2qOKTkE < ZOfQSZF -(839 - 838);) {
                        tempb[QZu2qOKTkE] = tempb[QZu2qOKTkE +(177 - 176)];
                        DwX0l1YUP[QZu2qOKTkE] = DwX0l1YUP[QZu2qOKTkE +(30 - 29)];
                        QZu2qOKTkE++;
                    }
                }
                return (r6my0MG (ZOfQSZF -(220 - 219), DwX0l1YUP, tempb) + 200);
            }
            else if (a[ZOfQSZF -(154 - 153)] > Th2ADod7W[ZOfQSZF -1])
                return (r6my0MG (ZOfQSZF -1, a, Th2ADod7W) + 200);
            else {
                {
                    QZu2qOKTkE = 0;
                    for (; QZu2qOKTkE < ZOfQSZF -1;) {
                        tempb[QZu2qOKTkE] = tempb[QZu2qOKTkE +1];
                        QZu2qOKTkE++;
                    }
                }
                if (a[ZOfQSZF -1] < Th2ADod7W[0])
                    return (r6my0MG (ZOfQSZF -1, a, tempb) - 200);
                return (r6my0MG (ZOfQSZF -1, a, tempb));
            }
        }
    }
}

void  main () {
    int r6my0MG (int ZOfQSZF, int a [(1305 - 305)], int Th2ADod7W [(1416 - 416)]);
    int a [(1030 - 30)], Th2ADod7W [1000], ZOfQSZF, UxYmScIjDHV, PNAoPmd9y75, prize, QZu2qOKTkE, j;
    for (; 1;) {
        scanf ("%d", &ZOfQSZF);
        if (ZOfQSZF == 0)
            break;
        else {
            {
                QZu2qOKTkE = 0;
                for (; ZOfQSZF > QZu2qOKTkE;) {
                    scanf ("%d", &a[QZu2qOKTkE]);
                    QZu2qOKTkE++;
                }
            }
            {
                QZu2qOKTkE = 0;
                while (QZu2qOKTkE < ZOfQSZF) {
                    scanf ("%d", &Th2ADod7W[QZu2qOKTkE]);
                    QZu2qOKTkE++;
                }
            }
            {
                QZu2qOKTkE = 0;
                while (QZu2qOKTkE < ZOfQSZF) {
                    {
                        j = QZu2qOKTkE +1;
                        for (; j < ZOfQSZF;) {
                            if (a[j] > a[QZu2qOKTkE]) {
                                UxYmScIjDHV = a[j];
                                a[j] = a[QZu2qOKTkE];
                                a[QZu2qOKTkE] = UxYmScIjDHV;
                            }
                            if (Th2ADod7W[j] > Th2ADod7W[QZu2qOKTkE]) {
                                PNAoPmd9y75 = Th2ADod7W[j];
                                Th2ADod7W[j] = Th2ADod7W[QZu2qOKTkE];
                                Th2ADod7W[QZu2qOKTkE] = PNAoPmd9y75;
                            }
                            j++;
                        }
                    }
                    QZu2qOKTkE++;
                }
            }
            prize = r6my0MG (ZOfQSZF, a, Th2ADod7W);
            printf ("%d\n", prize);
        }
    }
}

