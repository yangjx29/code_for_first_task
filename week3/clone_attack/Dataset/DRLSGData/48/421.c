int a [(237 - 226)] [(345 - 334)] = {(735 - 735)};
int no6tnEZImdz;
int LP6YoD;

void  ANBpmk (int a [] [(311 - 300)], int Iru7lvAs) {
    int nmSLRKuqH [(233 - 222)] [(119 - 108)];
    for (int OT32PVzY = (940 - 939);
    OT32PVzY <= (282 - 273); OT32PVzY = OT32PVzY +(740 - 739))
        for (int PaunXQ1s7Fe = (759 - 758);
        PaunXQ1s7Fe <= (972 - 963); PaunXQ1s7Fe = PaunXQ1s7Fe +(868 - 867))
            nmSLRKuqH[OT32PVzY][PaunXQ1s7Fe] = (256 - 256);
    for (int OT32PVzY = (58 - 57);
    OT32PVzY <= (933 - 924); OT32PVzY = OT32PVzY +(63 - 62))
        for (int PaunXQ1s7Fe = (431 - 430);
        PaunXQ1s7Fe <= (92 - 83); PaunXQ1s7Fe = PaunXQ1s7Fe +(269 - 268)) {
            if (a[OT32PVzY][PaunXQ1s7Fe] != (742 - 742)) {
                nmSLRKuqH[OT32PVzY][PaunXQ1s7Fe] += (326 - 324) * a[OT32PVzY][PaunXQ1s7Fe];
                nmSLRKuqH[OT32PVzY +(719 - 718)][PaunXQ1s7Fe] += a[OT32PVzY][PaunXQ1s7Fe];
                nmSLRKuqH[OT32PVzY -(206 - 205)][PaunXQ1s7Fe] += a[OT32PVzY][PaunXQ1s7Fe];
                nmSLRKuqH[OT32PVzY][PaunXQ1s7Fe +(124 - 123)] += a[OT32PVzY][PaunXQ1s7Fe];
                nmSLRKuqH[OT32PVzY][PaunXQ1s7Fe -(240 - 239)] += a[OT32PVzY][PaunXQ1s7Fe];
                nmSLRKuqH[OT32PVzY +(933 - 932)][PaunXQ1s7Fe +(383 - 382)] += a[OT32PVzY][PaunXQ1s7Fe];
                nmSLRKuqH[OT32PVzY +(829 - 828)][PaunXQ1s7Fe -(67 - 66)] += a[OT32PVzY][PaunXQ1s7Fe];
                nmSLRKuqH[OT32PVzY -(814 - 813)][PaunXQ1s7Fe +(52 - 51)] += a[OT32PVzY][PaunXQ1s7Fe];
                nmSLRKuqH[OT32PVzY -(632 - 631)][PaunXQ1s7Fe -(540 - 539)] += a[OT32PVzY][PaunXQ1s7Fe];
            }
        }
    {
        int OT32PVzY = (470 - 469);
        while (OT32PVzY <= (479 - 470)) {
            for (int PaunXQ1s7Fe = (910 - 909);
            PaunXQ1s7Fe <= (358 - 349); PaunXQ1s7Fe = PaunXQ1s7Fe +(586 - 585))
                a[OT32PVzY][PaunXQ1s7Fe] = nmSLRKuqH[OT32PVzY][PaunXQ1s7Fe];
            OT32PVzY = OT32PVzY +1;
        }
    }
    if (Iru7lvAs == LP6YoD) {
        int OT32PVzY = (315 - 314);
        while (OT32PVzY <= (47 - 38)) {
            cout << a[OT32PVzY][(140 - 139)];
            for (int PaunXQ1s7Fe = (935 - 933);
            PaunXQ1s7Fe <= (836 - 827); PaunXQ1s7Fe = PaunXQ1s7Fe +1) {
                cout << " " << a[OT32PVzY][PaunXQ1s7Fe];
            }
            cout << endl;
            ++OT32PVzY;
        }
    }
    else
        ANBpmk (a, Iru7lvAs +(59 - 58));
}

int main () {
    cin >> no6tnEZImdz >> LP6YoD;
    a[(58 - 53)][(200 - 195)] = no6tnEZImdz;
    ANBpmk (a, (348 - 347));
    return (129 - 129);
}

