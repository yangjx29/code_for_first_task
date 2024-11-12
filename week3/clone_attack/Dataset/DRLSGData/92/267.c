int tzEKhXa (const  void  *L5rj0RWPO6, const  void  *y) {
    return *(int*) y - *(int*) L5rj0RWPO6;
}

int main () {
    for (; (76 - 75);) {
        int F0RIzxoQ, x6msE14zx, QNiCa7P = (851 - 851), XxTXVDpm, temp = (637 - 637), z0P3voR = (85 - 85), we7Lr5H3v = (582 - 582), luz4MhE8nQ, VaFbC4Qnzk = (16 - 16), qZVaN1C0OG;
        scanf ("%d", &F0RIzxoQ);
        if (!((815 - 815) != F0RIzxoQ))
            return (152 - 152);
        else {
            int LTauVwBbMPm [(1986 - 985)] = {(829 - 829)}, d29q6E [(1117 - 116)] = {(135 - 135)};
            {
                x6msE14zx = 868 - 868;
                for (; x6msE14zx < F0RIzxoQ;) {
                    scanf ("%d", &LTauVwBbMPm[x6msE14zx]);
                    x6msE14zx++;
                }
            }
            {
                x6msE14zx = 813 - 813;
                for (; x6msE14zx < F0RIzxoQ;) {
                    scanf ("%d", &d29q6E[x6msE14zx]);
                    x6msE14zx++;
                }
            }
            qsort (LTauVwBbMPm, F0RIzxoQ, sizeof (LTauVwBbMPm [(100 - 100)]), tzEKhXa);
            qsort (d29q6E, F0RIzxoQ, sizeof (d29q6E [(948 - 948)]), tzEKhXa);
            luz4MhE8nQ = F0RIzxoQ -(177 - 176);
            qZVaN1C0OG = F0RIzxoQ -(968 - 967);
            {
                x6msE14zx = 446 - 446;
                for (; x6msE14zx < F0RIzxoQ;) {
                    if (d29q6E[VaFbC4Qnzk] < LTauVwBbMPm[we7Lr5H3v]) {
                        temp++;
                        we7Lr5H3v++;
                        VaFbC4Qnzk++;
                    }
                    else if (LTauVwBbMPm[we7Lr5H3v] < d29q6E[VaFbC4Qnzk]) {
                        temp--;
                        luz4MhE8nQ--;
                        VaFbC4Qnzk++;
                    }
                    else if (d29q6E[qZVaN1C0OG] < LTauVwBbMPm[luz4MhE8nQ]) {
                        temp++;
                        luz4MhE8nQ--;
                        qZVaN1C0OG--;
                    }
                    else if (LTauVwBbMPm[luz4MhE8nQ] < d29q6E[qZVaN1C0OG]) {
                        temp--;
                        luz4MhE8nQ--;
                        VaFbC4Qnzk++;
                    }
                    else if (LTauVwBbMPm[luz4MhE8nQ] < d29q6E[VaFbC4Qnzk]) {
                        temp--;
                        luz4MhE8nQ--;
                        VaFbC4Qnzk++;
                    }
                    else if (LTauVwBbMPm[luz4MhE8nQ] == d29q6E[VaFbC4Qnzk])
                        break;
                    x6msE14zx++;
                }
            }
            printf ("%d\n", temp * (798 - 598));
        }
    }
}

