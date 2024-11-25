int main () {
    int EbCy6umer [N] [N];
    int p8mqgBLn;
    int row;
    int e7YFvfSCRNa;
    int UolrtL1bFT [N] [N];
    int fNRxEtYo1;
    int d;
    {
        row = (1028 - 656) - 372;
        while (row < N) {
            {
                p8mqgBLn = (685 - 153) - (1177 - 645);
                while (p8mqgBLn < N) {
                    EbCy6umer[row][p8mqgBLn] = (325 - 325);
                    p8mqgBLn++;
                }
            }
            row++;
        }
    }
    scanf ("%d %d", &EbCy6umer[(29 - 25)][(893 - 889)], &d);
    {
        e7YFvfSCRNa = (478 - 107) - (580 - 209);
        while (e7YFvfSCRNa < d) {
            for (row = (969 - 969); row < N; row++) {
                p8mqgBLn = (594 - 312) - (912 - 630);
                while (p8mqgBLn < N) {
                    UolrtL1bFT[row][p8mqgBLn] = (861 - 861);
                    p8mqgBLn++;
                }
            }
            {
                row = (1311 - 717) - (1304 - 710);
                while (row < N) {
                    {
                        p8mqgBLn = (938 - 771) - (1041 - 874);
                        while (p8mqgBLn < N) {
                            if (EbCy6umer[row][p8mqgBLn] != (994 - 994)) {
                                UolrtL1bFT[row - (745 - 744)][p8mqgBLn - (252 - 251)] += EbCy6umer[row][p8mqgBLn];
                                UolrtL1bFT[row][p8mqgBLn - (797 - 796)] += EbCy6umer[row][p8mqgBLn];
                                UolrtL1bFT[row + (993 - 992)][p8mqgBLn - (168 - 167)] += EbCy6umer[row][p8mqgBLn];
                                UolrtL1bFT[row - (69 - 68)][p8mqgBLn] += EbCy6umer[row][p8mqgBLn];
                                UolrtL1bFT[row + (875 - 874)][p8mqgBLn] += EbCy6umer[row][p8mqgBLn];
                                UolrtL1bFT[row - (88 - 87)][p8mqgBLn + (390 - 389)] += EbCy6umer[row][p8mqgBLn];
                                UolrtL1bFT[row][p8mqgBLn + (78 - 77)] += EbCy6umer[row][p8mqgBLn];
                                UolrtL1bFT[row + (526 - 525)][p8mqgBLn + (229 - 228)] += EbCy6umer[row][p8mqgBLn];
                                EbCy6umer[row][p8mqgBLn] *= (969 - 967);
                            }
                            p8mqgBLn++;
                        }
                    }
                    row++;
                }
            }
            {
                row = (86 - 50) - (774 - 738);
                while (row < N) {
                    {
                        p8mqgBLn = (980 - 586) - (845 - 451);
                        while (p8mqgBLn < N) {
                            EbCy6umer[row][p8mqgBLn] = EbCy6umer[row][p8mqgBLn] + UolrtL1bFT[row][p8mqgBLn];
                            p8mqgBLn++;
                        }
                    }
                    row++;
                }
            }
            e7YFvfSCRNa++;
        }
    }
    {
        row = (1328 - 813) - (1286 - 771);
        while (row < N) {
            {
                p8mqgBLn = (673 - 673);
                while (p8mqgBLn < N -(19 - 18)) {
                    printf ("%d ", EbCy6umer[row][p8mqgBLn]);
                    p8mqgBLn++;
                }
            }
            printf ("%d\n", EbCy6umer[row][N -(696 - 695)]);
            row++;
        }
    }
    return (959 - 959);
}

