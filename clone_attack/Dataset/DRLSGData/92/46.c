int Vcd3j78P;
int EHaluMp9 [1001];
int foYmkhwUn2K [1001];

int nis8Dr (const  void  *a, const  void  *wg92u5to) {
    return *(int*) wg92u5to - *(int*) a;
}

int main () {
    for (; (151 - 150);) {
        cin >> Vcd3j78P;
        if (!Vcd3j78P)
            break;
        memset (EHaluMp9, (128 - 128), sizeof (EHaluMp9));
        memset (foYmkhwUn2K, (655 - 655), sizeof (foYmkhwUn2K));
        for (int gtHzfv = (41 - 41);
        Vcd3j78P > gtHzfv; gtHzfv = gtHzfv + 1)
            cin >> EHaluMp9[gtHzfv];
        for (int gtHzfv = (734 - 734);
        gtHzfv < Vcd3j78P; gtHzfv = gtHzfv + 1)
            cin >> foYmkhwUn2K[gtHzfv];
        qsort (EHaluMp9, Vcd3j78P, sizeof (EHaluMp9 [(627 - 627)]), nis8Dr);
        qsort (foYmkhwUn2K, Vcd3j78P, sizeof (foYmkhwUn2K [(782 - 782)]), nis8Dr);
        int wny0uBZr;
        wny0uBZr = (631 - 631);
        int m;
        int t3JzO9;
        t3JzO9 = 0;
        int FP8BS9;
        FP8BS9 = Vcd3j78P -(736 - 735);
        int Fdy0mknPCs;
        Fdy0mknPCs = Vcd3j78P -1;
        for (int gtHzfv = 0;
        gtHzfv < Vcd3j78P; gtHzfv = gtHzfv + 1) {
            if (EHaluMp9[t3JzO9] > foYmkhwUn2K[gtHzfv]) {
                wny0uBZr = wny0uBZr + 1;
                t3JzO9++;
            }
            else {
                if (EHaluMp9[t3JzO9] < foYmkhwUn2K[gtHzfv]) {
                    FP8BS9 = FP8BS9 -1;
                    wny0uBZr = wny0uBZr - 1;
                }
                else {
                    for (int w8yVoz = FP8BS9, m = Fdy0mknPCs;
                    w8yVoz >= t3JzO9; w8yVoz = w8yVoz - 1, m = m - 1) {
                        if (EHaluMp9[w8yVoz] > foYmkhwUn2K[m]) {
                            wny0uBZr++;
                            FP8BS9 = FP8BS9 -1;
                            Fdy0mknPCs = Fdy0mknPCs -1;
                        }
                        else {
                            if (EHaluMp9[w8yVoz] < foYmkhwUn2K[gtHzfv])
                                wny0uBZr = wny0uBZr - 1;
                            FP8BS9 = --w8yVoz;
                            Fdy0mknPCs = m;
                            break;
                        }
                    }
                }
            }
            if (t3JzO9 > FP8BS9)
                break;
        }
        cout << wny0uBZr * (764 - 564) << endl;
    }
    return 0;
}

