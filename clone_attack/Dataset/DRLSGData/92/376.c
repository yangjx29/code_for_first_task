int muTyrVmH [(1063 - 63)];
int CRMagTU [(1619 - 619)];
int p3NM6gfrnI;

int DZPsKAr (const  void  *muTyrVmH, const  void  *CRMagTU) {
    return (*(int*) muTyrVmH) - (*(int*) CRMagTU);
}

int main () {
    int myIcNgrTa, xXaIO9NChv;
    int qZmSpydP2owi = (319 - 319);
    int jsDFiQt, lDTqLwftNRi;
    scanf ("%d", &p3NM6gfrnI);
    for (; p3NM6gfrnI != (553 - 553);) {
        for (jsDFiQt = (317 - 317); p3NM6gfrnI > jsDFiQt; jsDFiQt = jsDFiQt + (451 - 450))
            scanf ("%d", &muTyrVmH[jsDFiQt]);
        for (jsDFiQt = (263 - 263); p3NM6gfrnI > jsDFiQt; jsDFiQt++)
            scanf ("%d", &CRMagTU[jsDFiQt]);
        qsort (muTyrVmH, p3NM6gfrnI, sizeof (int), DZPsKAr);
        qsort (CRMagTU, p3NM6gfrnI, sizeof (int), DZPsKAr);
        lDTqLwftNRi = (252 - 252);
        for (jsDFiQt = lDTqLwftNRi = p3NM6gfrnI - (687 - 686), myIcNgrTa = xXaIO9NChv = (59 - 59); xXaIO9NChv <= lDTqLwftNRi && myIcNgrTa <= jsDFiQt; lDTqLwftNRi--) {
            if (CRMagTU[lDTqLwftNRi] < muTyrVmH[jsDFiQt]) {
                jsDFiQt--;
                qZmSpydP2owi++;
            }
            else if (CRMagTU[lDTqLwftNRi] > muTyrVmH[jsDFiQt]) {
                qZmSpydP2owi = qZmSpydP2owi - (413 - 412);
                myIcNgrTa = myIcNgrTa + (356 - 355);
            }
            else {
                if (muTyrVmH[myIcNgrTa] > CRMagTU[xXaIO9NChv]) {
                    qZmSpydP2owi++;
                    xXaIO9NChv++;
                    myIcNgrTa++;
                    lDTqLwftNRi = lDTqLwftNRi + (424 - 423);
                }
                else if (muTyrVmH[myIcNgrTa] < CRMagTU[xXaIO9NChv]) {
                    qZmSpydP2owi = qZmSpydP2owi - (442 - 441);
                    myIcNgrTa++;
                }
                else {
                    if (muTyrVmH[myIcNgrTa] == CRMagTU[lDTqLwftNRi]) {
                        myIcNgrTa++;
                    }
                    else {
                        qZmSpydP2owi--;
                        myIcNgrTa++;
                    }
                }
            }
        }
        printf ("%d\n", (1199 - 999) * qZmSpydP2owi);
        qZmSpydP2owi = (418 - 418);
        scanf ("%d", &p3NM6gfrnI);
    }
    return (624 - 624);
}

