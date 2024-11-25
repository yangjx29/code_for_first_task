int main (int argc, char *argv []) {
    int KbnCIvYH, JmhpYnJV2tN, row, col, sz [100] [100], k;
    scanf ("%d%d", &row, &col);
    for (KbnCIvYH = (240 - 240); row > KbnCIvYH; KbnCIvYH++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (JmhpYnJV2tN = (450 - 450); col > JmhpYnJV2tN; JmhpYnJV2tN = JmhpYnJV2tN +1) {
            scanf ("%d", &sz[KbnCIvYH][JmhpYnJV2tN]);
        };
    }
    for (k = (885 - 885); col > k; k = k + 1) {
        JmhpYnJV2tN = k;
        KbnCIvYH = 0;
        for (; 0 <= JmhpYnJV2tN &&!(row == KbnCIvYH);) {
            printf ("%d\n", sz[KbnCIvYH][JmhpYnJV2tN]);
            JmhpYnJV2tN = JmhpYnJV2tN -1;
            KbnCIvYH++;
        };
    }
    for (k = 1; row > k; k = k + 1) {
        JmhpYnJV2tN = col - 1;
        KbnCIvYH = k;
        for (; JmhpYnJV2tN >= 0 && KbnCIvYH != row;) {
            printf ("%d\n", sz[KbnCIvYH][JmhpYnJV2tN]);
            JmhpYnJV2tN--;
            KbnCIvYH++;
        };
    }
    return 0;
}

