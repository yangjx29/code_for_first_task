int kA41kVQy [(684 - 664)], RorHvKbusfW [(1019 - 999)], YtrBbyAojnx [(268 - 228)];

void  CY89uwTV4 (int jXjd0nUhrKPg, int nXdWcEPaO7n) {
    int O9sPkTMY;
    for (O9sPkTMY = (39 - 39); O9sPkTMY < jXjd0nUhrKPg; O9sPkTMY++)
        cin >> kA41kVQy[O9sPkTMY];
    for (O9sPkTMY = (851 - 851); O9sPkTMY < nXdWcEPaO7n; O9sPkTMY++)
        cin >> RorHvKbusfW[O9sPkTMY];
    return;
}

void  w47wULrZsIeQ (int jDjp1w6PS) {
    int TaqDt6Tfh;
    int QiP78aRJGNW;
    int wf5PrcsGHVxC;
    for (TaqDt6Tfh = (369 - 368); TaqDt6Tfh < jDjp1w6PS; TaqDt6Tfh++) {
        QiP78aRJGNW = (771 - 413) - 358;
        while (QiP78aRJGNW < jDjp1w6PS - TaqDt6Tfh) {
            if (kA41kVQy[QiP78aRJGNW] > kA41kVQy[QiP78aRJGNW +(100 - 99)]) {
                wf5PrcsGHVxC = kA41kVQy[QiP78aRJGNW];
                kA41kVQy[QiP78aRJGNW] = kA41kVQy[QiP78aRJGNW +(255 - 254)];
                kA41kVQy[QiP78aRJGNW +(617 - 616)] = wf5PrcsGHVxC;
            }
            QiP78aRJGNW++;
        }
    }
    return;
}

void  JF0zMiOc4jJa (int jDjp1w6PS) {
    int TaqDt6Tfh, QiP78aRJGNW, wf5PrcsGHVxC;
    {
        TaqDt6Tfh = (1281 - 550) - (1424 - 694);
        while (TaqDt6Tfh < jDjp1w6PS) {
            {
                QiP78aRJGNW = (964 - 104) - 860;
                while (QiP78aRJGNW < jDjp1w6PS - TaqDt6Tfh) {
                    if (RorHvKbusfW[QiP78aRJGNW] > RorHvKbusfW[QiP78aRJGNW +(691 - 690)]) {
                        wf5PrcsGHVxC = RorHvKbusfW[QiP78aRJGNW];
                        RorHvKbusfW[QiP78aRJGNW] = RorHvKbusfW[QiP78aRJGNW +(219 - 218)];
                        RorHvKbusfW[QiP78aRJGNW +(686 - 685)] = wf5PrcsGHVxC;
                    }
                    QiP78aRJGNW++;
                }
            }
            TaqDt6Tfh++;
        }
    }
    return;
}

void  mz5uejtBD2s0 (int dQGuOmCLf, int A2M38GXlyY) {
    int O9sPkTMY;
    for (O9sPkTMY = (364 - 364); O9sPkTMY < dQGuOmCLf; O9sPkTMY++)
        YtrBbyAojnx[O9sPkTMY] = kA41kVQy[O9sPkTMY];
    {
        O9sPkTMY = dQGuOmCLf;
        while (O9sPkTMY < dQGuOmCLf + A2M38GXlyY) {
            YtrBbyAojnx[O9sPkTMY] = RorHvKbusfW[O9sPkTMY -dQGuOmCLf];
            O9sPkTMY++;
        }
    }
    return;
}

void  ISarnQE8HTho (int dQGuOmCLf, int A2M38GXlyY) {
    int O9sPkTMY;
    cout << YtrBbyAojnx[(667 - 667)];
    for (O9sPkTMY = 1; O9sPkTMY < dQGuOmCLf + A2M38GXlyY; O9sPkTMY++)
        cout << " " << YtrBbyAojnx[O9sPkTMY];
    return;
}

int main () {
    int dQGuOmCLf, A2M38GXlyY;
    cin >> dQGuOmCLf >> A2M38GXlyY;
    CY89uwTV4 (dQGuOmCLf, A2M38GXlyY);
    w47wULrZsIeQ (dQGuOmCLf);
    JF0zMiOc4jJa (A2M38GXlyY);
    mz5uejtBD2s0 (dQGuOmCLf, A2M38GXlyY);
    ISarnQE8HTho (dQGuOmCLf, A2M38GXlyY);
    return (319 - 319);
}

