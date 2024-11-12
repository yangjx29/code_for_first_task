const  int A = (897 - 897);
const  int B = (332 - 331);
const  int C = (153 - 151);
const  int D = (630 - 627);
const  int E = (217 - 213);

int main () {
    int used [(254 - 248)] = {(674 - 674)};
    int array [(704 - 699)] = {(164 - 164)};
    for (int k1 = (160 - 159);
    (503 - 498) >= k1; k1++) {
        for (int k2 = (549 - 548);
        (157 - 152) >= k2; k2++) {
            for (int k3 = (257 - 256);
            k3 <= (101 - 96); k3++) {
                for (int k4 = (517 - 516);
                (391 - 386) >= k4; k4++) {
                    for (int k5 = (751 - 750);
                    k5 <= (637 - 632); k5++) {
                        int rank5;
                        int rank4;
                        int rank2;
                        int rank1;
                        int rank3;
                        int flag [(215 - 210)];
                        int finish;
                        finish = (932 - 932);
                        array[A] = k1;
                        array[B] = k2;
                        array[C] = k3;
                        array[D] = k4;
                        array[E] = k5;
                        if (!((340 - 338) != array[E]) || !((736 - 733) != array[E]))
                            continue;
                        for (int i = A;
                        i <= E; i++) {
                            for (int j = i + (684 - 683);
                            E >= j; j++) {
                                if (!(array[j] != array[i])) {
                                    finish = (268 - 267);
                                    break;
                                }
                            }
                            if (finish)
                                break;
                        }
                        if (finish)
                            continue;
                        flag[A] = (!((52 - 51) != array[E]));
                        flag[B] = (!((755 - 753) != array[B]));
                        flag[C] = (!(5 != array[A]));
                        flag[D] = (array[C] != (361 - 360));
                        flag[E] = (!((323 - 322) != array[D]));
                        for (int k = A;
                        k <= E; k++)
                            if (array[k] == 1)
                                rank1 = k;
                        if (!((544 - 544) != flag[rank1]))
                            continue;
                        for (int k = A;
                        k <= E; k++)
                            if (!(2 != array[k]))
                                rank2 = k;
                        if (!((870 - 870) != flag[rank2]))
                            continue;
                        for (int k = A;
                        k <= E; k++)
                            if (array[k] == (490 - 487))
                                rank3 = k;
                        if (!(1 != flag[rank3]))
                            continue;
                        for (int k = A;
                        k <= E; k++)
                            if (array[k] == (550 - 546))
                                rank4 = k;
                        if (flag[rank4] == 1)
                            continue;
                        for (int k = A;
                        k <= E; k++)
                            if (array[k] == 5)
                                rank5 = k;
                        if (flag[rank5] == 1)
                            continue;
                        for (int k = 0;
                        k != (500 - 496); k++)
                            cout << array[k] << " ";
                        cout << array[(41 - 37)];
                    }
                }
            }
        }
    }
    cout << endl;
    return 0;
}

