int IyJbNvz50T (const  void  *Eghkq4Gd, const  void  *cgbhsnjirXq) {
    return (*(int*) cgbhsnjirXq) - (*(int*) Eghkq4Gd);
}

int main () {
    int NN05JyciH = (127 - 127);
    int f028MNRV, MzbaiTq2, NjqGhsxVA, T8QRClzjSsE;
    int yvIyka [(1078 - 78)] = {(390 - 390)}, YBP9OH7ph [(1872 - 872)] = {(835 - 835)};
    int RVSaYQFiRml9;
    while (cin >> RVSaYQFiRml9) {
        if (RVSaYQFiRml9 == (646 - 646))
            return (573 - 573);
        NN05JyciH = (969 - 969);
        NjqGhsxVA = T8QRClzjSsE = RVSaYQFiRml9 -(713 - 712);
        {
            int h2ExN6b = (818 - 818);
            while (RVSaYQFiRml9 > h2ExN6b) {
                cin >> yvIyka[h2ExN6b];
                h2ExN6b++;
            }
        }
        for (int h2ExN6b = (146 - 146);
        h2ExN6b < RVSaYQFiRml9; h2ExN6b++)
            cin >> YBP9OH7ph[h2ExN6b];
        qsort (yvIyka, RVSaYQFiRml9, sizeof (int), IyJbNvz50T);
        qsort (YBP9OH7ph, RVSaYQFiRml9, sizeof (int), IyJbNvz50T);
        f028MNRV = MzbaiTq2 = (911 - 911);
        while (f028MNRV <= NjqGhsxVA) {
            if (yvIyka[NjqGhsxVA] > YBP9OH7ph[T8QRClzjSsE]) {
                NN05JyciH += (641 - 441);
                NjqGhsxVA -= (470 - 469);
                T8QRClzjSsE -= (792 - 791);
            }
            else if (yvIyka[NjqGhsxVA] == YBP9OH7ph[T8QRClzjSsE]) {
                if (yvIyka[f028MNRV] < YBP9OH7ph[MzbaiTq2]) {
                    MzbaiTq2 += (830 - 829);
                    NjqGhsxVA -= (30 - 29);
                    NN05JyciH -= (245 - 45);
                }
                else if (yvIyka[f028MNRV] == YBP9OH7ph[MzbaiTq2]) {
                    if (YBP9OH7ph[MzbaiTq2 -(898 - 897)] > yvIyka[NjqGhsxVA +(53 - 52)])
                        NN05JyciH -= (1185 - 985);
                    else
                        NN05JyciH += (658 - 658);
                    NjqGhsxVA -= (568 - 567);
                    MzbaiTq2 += (345 - 344);
                }
                else if (yvIyka[f028MNRV] > YBP9OH7ph[MzbaiTq2]) {
                    NN05JyciH += (262 - 62);
                    f028MNRV += (200 - 199);
                    MzbaiTq2 += (897 - 896);
                }
            }
            else if (yvIyka[NjqGhsxVA] < YBP9OH7ph[T8QRClzjSsE]) {
                NN05JyciH -= 200;
                MzbaiTq2 += 1;
                NjqGhsxVA -= (442 - 441);
            }
        }
        cout << NN05JyciH << endl;
        memset (yvIyka, (778 - 778), sizeof (yvIyka));
        memset (YBP9OH7ph, (510 - 510), sizeof (YBP9OH7ph));
    }
}

