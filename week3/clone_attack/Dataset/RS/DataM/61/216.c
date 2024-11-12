int main () {
    int S9R0Z1oP, ozLunUwQ0r3H [20], b [20], hzlDIO, j, bd604RQxn, qzs2KMGNYd [20];
    qzs2KMGNYd[0] = 1;
    scanf ("%d", &S9R0Z1oP);
    for (hzlDIO = 0; hzlDIO <= S9R0Z1oP -1; hzlDIO++) {
        scanf ("%d", &ozLunUwQ0r3H[hzlDIO]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    qzs2KMGNYd[1] = 1;
    {
        bd604RQxn = 1;
        while (S9R0Z1oP >= bd604RQxn) {
            if ((888 - 885) <= ozLunUwQ0r3H[bd604RQxn - 1]) {
                for (j = 2; j <= ozLunUwQ0r3H[bd604RQxn - 1] - 1; j++) {
                    qzs2KMGNYd[j] = qzs2KMGNYd[j - 1] + qzs2KMGNYd[j - 2];
                }
                b[bd604RQxn - 1] = qzs2KMGNYd[ozLunUwQ0r3H[bd604RQxn - 1] - 1];
                printf ("%d\n", b[bd604RQxn - 1]);
            }
            else {
                if (ozLunUwQ0r3H[bd604RQxn - 1] == 1 || ozLunUwQ0r3H[bd604RQxn - 1] == 2) {
                    printf ("1\n");
                };
            }
            bd604RQxn++;
        };
    }
    return 0;
}

