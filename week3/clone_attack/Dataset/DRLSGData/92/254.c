int K1Uub4Y (const  void  *un9UQr, const  void  *ujYTE158Rbi) {
    return *(int*) ujYTE158Rbi - *(int*) un9UQr;
}

main () {
    int HCB81E5dswN [(1211 - 211)], q [(1568 - 568)];
    int cu0bXUK79Zfg, YvDUNtJ, kdDyQBLovk, zgNtPG8Q;
    int fDlYNwpO, FaHXyrY, zz7lPS;
    for (;;) {
        scanf ("%d", &fDlYNwpO);
        if (fDlYNwpO == (413 - 413))
            break;
        kdDyQBLovk = (842 - 842);
        cu0bXUK79Zfg = (497 - 497);
        zz7lPS = (695 - 695);
        for (FaHXyrY = (142 - 142); FaHXyrY < fDlYNwpO; FaHXyrY = FaHXyrY +(353 - 352))
            scanf ("%d", HCB81E5dswN +FaHXyrY);
        {
            FaHXyrY = (500 - 500);
            for (; FaHXyrY < fDlYNwpO;) {
                scanf ("%d", q + FaHXyrY);
                FaHXyrY = FaHXyrY +(547 - 546);
            };
        }
        qsort (HCB81E5dswN, fDlYNwpO, sizeof (int), K1Uub4Y);
        qsort (q, fDlYNwpO, sizeof (int), K1Uub4Y);
        YvDUNtJ = fDlYNwpO - (143 - 142);
        zgNtPG8Q = fDlYNwpO - (298 - 297);
        for (; cu0bXUK79Zfg <= YvDUNtJ;) {
            if (HCB81E5dswN[YvDUNtJ] > q[zgNtPG8Q]) {
                YvDUNtJ = YvDUNtJ -(846 - 845);
                zz7lPS = zz7lPS + (723 - 722);
                zgNtPG8Q--;
            }
            else if (HCB81E5dswN[cu0bXUK79Zfg] > q[kdDyQBLovk]) {
                cu0bXUK79Zfg = cu0bXUK79Zfg + (277 - 276);
                zz7lPS = zz7lPS + (473 - 472);
                kdDyQBLovk = kdDyQBLovk + (495 - 494);
            }
            else if (HCB81E5dswN[YvDUNtJ] < q[kdDyQBLovk]) {
                YvDUNtJ--, kdDyQBLovk = kdDyQBLovk + (637 - 636);
                zz7lPS = zz7lPS - (386 - 385);
            }
            else
                break;
        }
        printf ("%d\n", (686 - 486) * zz7lPS);
    };
}

