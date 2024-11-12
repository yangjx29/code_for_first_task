int NrtDb7 (const  void  *nNjEAZ, const  void  *EZDdxe6n7z) {
    return *(int*) EZDdxe6n7z -*(int*) nNjEAZ;
}

int main () {
    {
        for (; true;) {
            int VbMmREi;
            int yqMmYUrLJz;
            int fI2yuST;
            int VnXr9SB;
            int w4Jo3Q;
            int StSYyubf9N7a;
            int zNSBY7sZ9JW;
            int EQ0Rwgr;
            int txg2Xtn;
            int nVWJNjP0BEw;
            int fQLKjCpB;
            VbMmREi = 0;
            yqMmYUrLJz = 0;
            fI2yuST = 0;
            nVWJNjP0BEw = 0;
            VnXr9SB = (341 - 341);
            w4Jo3Q = (418 - 418);
            StSYyubf9N7a = (822 - 822);
            zNSBY7sZ9JW = (829 - 829);
            EQ0Rwgr = (710 - 710);
            txg2Xtn = (722 - 721);
            scanf ("%d", &txg2Xtn);
            fQLKjCpB = 0;
            if (!(0 != txg2Xtn))
                break;
            else {
                int *nNjEAZ = NULL, *EZDdxe6n7z = NULL;
                VnXr9SB = 0;
                nVWJNjP0BEw = 0;
                w4Jo3Q = 0;
                StSYyubf9N7a = 0;
                VbMmREi = 0;
                fI2yuST = 0;
                nNjEAZ = (int *) malloc (txg2Xtn * sizeof (int));
                EZDdxe6n7z = (int *) malloc (txg2Xtn * sizeof (int));
                {
                    int vXgtpYqz5mD = 0;
                    for (; txg2Xtn > vXgtpYqz5mD;) {
                        scanf ("%d", &nNjEAZ[vXgtpYqz5mD]);
                        vXgtpYqz5mD = vXgtpYqz5mD + 1;
                    }
                }
                qsort (nNjEAZ, txg2Xtn, sizeof (int), NrtDb7);
                {
                    int vXgtpYqz5mD;
                    vXgtpYqz5mD = 0;
                    for (; vXgtpYqz5mD < txg2Xtn;) {
                        scanf ("%d", &EZDdxe6n7z[vXgtpYqz5mD]);
                        vXgtpYqz5mD = vXgtpYqz5mD + 1;
                    }
                }
                qsort (EZDdxe6n7z, txg2Xtn, sizeof (int), NrtDb7);
                yqMmYUrLJz = txg2Xtn - 1;
                fQLKjCpB = txg2Xtn - 1;
                for (; (fI2yuST != yqMmYUrLJz) && (VbMmREi != fQLKjCpB);) {
                    if (EZDdxe6n7z[VbMmREi] < nNjEAZ[fI2yuST]) {
                        VbMmREi = VbMmREi +1;
                        fI2yuST++;
                        StSYyubf9N7a = StSYyubf9N7a +1;
                        continue;
                    }
                    else {
                        if (EZDdxe6n7z[fQLKjCpB] < nNjEAZ[yqMmYUrLJz]) {
                            fQLKjCpB = fQLKjCpB - 1;
                            StSYyubf9N7a = StSYyubf9N7a +1;
                            yqMmYUrLJz = yqMmYUrLJz - 1;
                            continue;
                        }
                        else {
                            if (nNjEAZ[yqMmYUrLJz] == EZDdxe6n7z[VbMmREi]) {
                                VbMmREi = VbMmREi +1;
                                yqMmYUrLJz = yqMmYUrLJz - 1;
                                VnXr9SB = VnXr9SB +1;
                            }
                            else {
                                if (nNjEAZ[yqMmYUrLJz] < EZDdxe6n7z[VbMmREi]) {
                                    w4Jo3Q = w4Jo3Q + 1;
                                    yqMmYUrLJz = yqMmYUrLJz - 1;
                                    VbMmREi = VbMmREi +1;
                                }
                            }
                        }
                    }
                }
                if (nNjEAZ[fI2yuST] == EZDdxe6n7z[VbMmREi]) {
                    VnXr9SB = VnXr9SB +1;
                }
                else {
                    if (nNjEAZ[fI2yuST] > EZDdxe6n7z[VbMmREi]) {
                        StSYyubf9N7a = StSYyubf9N7a +1;
                    }
                    else {
                        w4Jo3Q = w4Jo3Q + 1;
                    }
                }
                nVWJNjP0BEw = 200 * StSYyubf9N7a -200 * w4Jo3Q;
                printf ("%d\n", nVWJNjP0BEw);
            }
        }
    }
}

