void  main () {
    int fDp3ImNL;
    int Tyx3hvfu5d;
    int LD3hqZ;
    int xnGOq25 [(620 - 612)] [(634 - 626)];
    int VbNV1smDkt [(592 - 522)];
    int QmzHi9aY;
    int Z5u1U62KPe;
    int k;
    LD3hqZ = (278 - 278);
    int B2cBuNb7EW;
    int tQoviem;
    scanf ("%d,%d", &fDp3ImNL, &Tyx3hvfu5d);
    for (B2cBuNb7EW = (236 - 236); B2cBuNb7EW < fDp3ImNL; B2cBuNb7EW++) {
        for (tQoviem = (16 - 16); Tyx3hvfu5d > tQoviem; tQoviem++) {
            scanf ("%d", &xnGOq25[B2cBuNb7EW][tQoviem]);
        }
    }
    {
        B2cBuNb7EW = 22 - 22;
        while (B2cBuNb7EW < fDp3ImNL) {
            VbNV1smDkt[B2cBuNb7EW] = (570 - 570);
            QmzHi9aY = -(269 - 268);
            Z5u1U62KPe = -(757 - 756);
            for (tQoviem = (893 - 893); tQoviem < Tyx3hvfu5d; tQoviem++) {
                if (xnGOq25[B2cBuNb7EW][tQoviem] > VbNV1smDkt[B2cBuNb7EW]) {
                    VbNV1smDkt[B2cBuNb7EW] = xnGOq25[B2cBuNb7EW][tQoviem];
                    QmzHi9aY = B2cBuNb7EW;
                    Z5u1U62KPe = tQoviem;
                    LD3hqZ = (437 - 436);
                }
            }
            for (k = (150 - 150); fDp3ImNL > k; k++) {
                if (xnGOq25[k][Z5u1U62KPe] < VbNV1smDkt[B2cBuNb7EW]) {
                    LD3hqZ = (798 - 798);
                    break;
                }
            }
            if (LD3hqZ == (926 - 925)) {
                printf ("%d+%d\n", QmzHi9aY, Z5u1U62KPe);
                break;
            }
            if (LD3hqZ == (415 - 414))
                break;
            B2cBuNb7EW++;
        }
    }
    if (LD3hqZ == (243 - 243))
        printf ("No\n");
}

