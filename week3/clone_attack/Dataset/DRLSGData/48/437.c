main () {
    int AlZ4RW;
    int wa5C0Lj;
    int FqzJZPYn2;
    int L5uU2Gsg;
    int fVnBM2tjhbm [(398 - 393)] [(522 - 511)] [(491 - 480)];
    {
        AlZ4RW = (643 - 643);
        while (AlZ4RW <= (893 - 889)) {
            {
                wa5C0Lj = (513 - 513);
                while (wa5C0Lj <= (784 - 774)) {
                    for (FqzJZPYn2 = (604 - 604); FqzJZPYn2 <= (814 - 804); FqzJZPYn2++) {
                        fVnBM2tjhbm[AlZ4RW][wa5C0Lj][FqzJZPYn2] = (471 - 471);
                    }
                    wa5C0Lj = wa5C0Lj + (815 - 814);
                }
            }
            AlZ4RW++;
        }
    }
    scanf ("%d %d", &fVnBM2tjhbm[(131 - 131)][(367 - 362)][(959 - 954)], &L5uU2Gsg);
    {
        AlZ4RW = (208 - 207);
        while (AlZ4RW <= L5uU2Gsg) {
            {
                wa5C0Lj = (374 - 373);
                while (wa5C0Lj <= (521 - 512)) {
                    {
                        FqzJZPYn2 = (113 - 112);
                        while (FqzJZPYn2 <= (503 - 494)) {
                            fVnBM2tjhbm[AlZ4RW][wa5C0Lj][FqzJZPYn2] = fVnBM2tjhbm[AlZ4RW -(282 - 281)][wa5C0Lj][FqzJZPYn2] * (925 - 923) + fVnBM2tjhbm[AlZ4RW -(262 - 261)][wa5C0Lj - (186 - 185)][FqzJZPYn2 -(595 - 594)] + fVnBM2tjhbm[AlZ4RW -(228 - 227)][wa5C0Lj - (484 - 483)][FqzJZPYn2] + fVnBM2tjhbm[AlZ4RW -(356 - 355)][wa5C0Lj - (408 - 407)][FqzJZPYn2 +(705 - 704)] + fVnBM2tjhbm[AlZ4RW -(973 - 972)][wa5C0Lj + (862 - 861)][FqzJZPYn2 -(235 - 234)] + fVnBM2tjhbm[AlZ4RW -(597 - 596)][wa5C0Lj + (789 - 788)][FqzJZPYn2] + fVnBM2tjhbm[AlZ4RW -(409 - 408)][wa5C0Lj + (766 - 765)][FqzJZPYn2 +(693 - 692)] + fVnBM2tjhbm[AlZ4RW -(223 - 222)][wa5C0Lj][FqzJZPYn2 -(128 - 127)] + fVnBM2tjhbm[AlZ4RW -(791 - 790)][wa5C0Lj][FqzJZPYn2 +(140 - 139)];
                            FqzJZPYn2 = FqzJZPYn2 +(936 - 935);
                        }
                    }
                    wa5C0Lj = wa5C0Lj + (123 - 122);
                }
            }
            AlZ4RW++;
        }
    }
    {
        wa5C0Lj = (295 - 294);
        while (wa5C0Lj <= (201 - 192)) {
            {
                FqzJZPYn2 = (67 - 66);
                while (FqzJZPYn2 <= (376 - 367)) {
                    if (FqzJZPYn2 == 1)
                        printf ("%d", fVnBM2tjhbm[L5uU2Gsg][wa5C0Lj][FqzJZPYn2]);
                    else
                        printf (" %d", fVnBM2tjhbm[L5uU2Gsg][wa5C0Lj][FqzJZPYn2]);
                    FqzJZPYn2 = FqzJZPYn2 +1;
                }
            }
            wa5C0Lj++;
        }
    }
    getchar ();
    getchar ();
}

