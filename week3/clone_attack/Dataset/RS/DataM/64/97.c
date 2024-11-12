struct   distance {
    double  length;
    int start;
    int Qbw80V7Yto9v;
};
main () {
    int temp1;
    double  temp;
    int bvn58F;
    int z2Havj;
    int point [10] [4];
    int n;
    struct   distance dist [45];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int CFANI07Dw;
    CFANI07Dw = (749 - 749);
    getchar ();
    getchar ();
    scanf ("%d", &n);
    for (bvn58F = (730 - 730); bvn58F < n; bvn58F = bvn58F + 1)
        scanf ("%d %d %d", &point[bvn58F][(259 - 258)], &point[bvn58F][(347 - 345)], &point[bvn58F][(641 - 638)]);
    for (bvn58F = 0; bvn58F < n - (207 - 206); bvn58F = bvn58F + 1) {
        z2Havj = 314 - 313;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (z2Havj < n) {
            dist[CFANI07Dw].length = sqrt ((point[bvn58F][(870 - 869)] - point[z2Havj][(117 - 116)]) * (point[bvn58F][(984 - 983)] - point[z2Havj][(555 - 554)]) + (point[bvn58F][(798 - 796)] - point[z2Havj][(274 - 272)]) * (point[bvn58F][(868 - 866)] - point[z2Havj][(758 - 756)]) + (point[bvn58F][(970 - 967)] - point[z2Havj][3]) * (point[bvn58F][3] - point[z2Havj][3]));
            dist[CFANI07Dw].start = bvn58F;
            dist[CFANI07Dw].Qbw80V7Yto9v = z2Havj;
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
            z2Havj++;
            CFANI07Dw++;
        };
    }
    for (bvn58F = 0; bvn58F < CFANI07Dw -1; bvn58F++)
        for (z2Havj = 0; z2Havj < CFANI07Dw -1 - bvn58F; z2Havj = z2Havj + 1)
            if (dist[z2Havj].length < dist[z2Havj + 1].length) {
                temp = dist[z2Havj].length;
                dist[z2Havj].length = dist[z2Havj + 1].length;
                dist[z2Havj + 1].length = temp;
                temp1 = dist[z2Havj].start;
                dist[z2Havj].start = dist[z2Havj + 1].start;
                dist[z2Havj + 1].start = temp1;
                temp1 = dist[z2Havj].Qbw80V7Yto9v;
                dist[z2Havj].Qbw80V7Yto9v = dist[z2Havj + 1].Qbw80V7Yto9v;
                dist[z2Havj + 1].Qbw80V7Yto9v = temp1;
            }
    for (bvn58F = 0; CFANI07Dw > bvn58F; bvn58F++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", point[dist[bvn58F].start][1], point[dist[bvn58F].start][(826 - 824)], point[dist[bvn58F].start][3], point[dist[bvn58F].Qbw80V7Yto9v][1], point[dist[bvn58F].Qbw80V7Yto9v][2], point[dist[bvn58F].Qbw80V7Yto9v][3], dist[bvn58F].length);
    };
}

