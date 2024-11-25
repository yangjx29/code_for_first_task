int main (int argc, char *mype9Q2vi6jB []) {
    int QSP0KEBgq6, j, Cv0Khnk5 [(109 - 83)], UlbvOBiq7M [26], tTcx5QfF = (758 - 758);
    int EaVLAqR8zQOX;
    scanf ("%d", &EaVLAqR8zQOX);
    for (QSP0KEBgq6 = 0; EaVLAqR8zQOX > QSP0KEBgq6; QSP0KEBgq6 = QSP0KEBgq6 +1) {
        scanf ("%d", &Cv0Khnk5[QSP0KEBgq6]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        UlbvOBiq7M[QSP0KEBgq6] = 1;
    }
    for (QSP0KEBgq6 = EaVLAqR8zQOX -2; 0 <= QSP0KEBgq6; QSP0KEBgq6 = QSP0KEBgq6 -1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (j = QSP0KEBgq6 +1; EaVLAqR8zQOX > j; j = j + 1) {
            if ((Cv0Khnk5[j] <= Cv0Khnk5[QSP0KEBgq6]) && (UlbvOBiq7M[QSP0KEBgq6] < UlbvOBiq7M[j] + 1))
                UlbvOBiq7M[QSP0KEBgq6] = UlbvOBiq7M[j] + 1;
        };
    }
    for (QSP0KEBgq6 = 0; QSP0KEBgq6 < EaVLAqR8zQOX; QSP0KEBgq6 = QSP0KEBgq6 +1) {
        if (UlbvOBiq7M[QSP0KEBgq6] > tTcx5QfF)
            tTcx5QfF = UlbvOBiq7M[QSP0KEBgq6];
    }
    printf ("%d\n", tTcx5QfF);
    return 0;
}

