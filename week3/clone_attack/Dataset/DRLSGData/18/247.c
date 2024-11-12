int main () {
    int lgZ7NJ;
    int ACqon2Qm [101] = {0};
    int UGS7iJ5D [101] [101] = {0};
    int ChqnJRkGUFs = 0;
    int apFwVZ4, MBnqhEzF, M5ailh, tSr3qUw6;
    cin >> lgZ7NJ;
    {
        apFwVZ4 = 1;
        for (; apFwVZ4 <= lgZ7NJ;) {
            apFwVZ4 = apFwVZ4 + 1;
            for (MBnqhEzF = 1; lgZ7NJ >= MBnqhEzF; MBnqhEzF = MBnqhEzF +1)
                for (M5ailh = 1; lgZ7NJ >= M5ailh; M5ailh = M5ailh +1)
                    cin >> UGS7iJ5D[MBnqhEzF][M5ailh];
            ChqnJRkGUFs = 0;
            for (MBnqhEzF = 1; MBnqhEzF <= lgZ7NJ - 1; MBnqhEzF = MBnqhEzF +1) {
                for (M5ailh = 1; lgZ7NJ - MBnqhEzF +1 >= M5ailh; M5ailh = M5ailh +1)
                    ACqon2Qm[M5ailh] = UGS7iJ5D[M5ailh][1];
                for (M5ailh = 1; M5ailh <= lgZ7NJ - MBnqhEzF +1; M5ailh = M5ailh +1) {
                    tSr3qUw6 = 1;
                    while (lgZ7NJ - MBnqhEzF +1 >= tSr3qUw6) {
                        if (UGS7iJ5D[M5ailh][tSr3qUw6] < ACqon2Qm[M5ailh])
                            ACqon2Qm[M5ailh] = UGS7iJ5D[M5ailh][tSr3qUw6];
                        tSr3qUw6 = tSr3qUw6 + 1;
                    }
                }
                for (M5ailh = 1; M5ailh <= lgZ7NJ - MBnqhEzF +1; M5ailh = M5ailh +1) {
                    tSr3qUw6 = 1;
                    while (tSr3qUw6 <= lgZ7NJ - MBnqhEzF +1) {
                        UGS7iJ5D[M5ailh][tSr3qUw6] = UGS7iJ5D[M5ailh][tSr3qUw6] - ACqon2Qm[M5ailh];
                        tSr3qUw6 = tSr3qUw6 + 1;
                    }
                }
                {
                    M5ailh = 1;
                    while (M5ailh <= lgZ7NJ - MBnqhEzF +1) {
                        ACqon2Qm[M5ailh] = UGS7iJ5D[1][M5ailh];
                        M5ailh = M5ailh +1;
                    }
                }
                for (tSr3qUw6 = 1; tSr3qUw6 <= lgZ7NJ - MBnqhEzF +1; tSr3qUw6 = tSr3qUw6 + 1) {
                    M5ailh = 1;
                    for (; M5ailh <= lgZ7NJ - MBnqhEzF +1;) {
                        if (UGS7iJ5D[M5ailh][tSr3qUw6] < ACqon2Qm[tSr3qUw6])
                            ACqon2Qm[tSr3qUw6] = UGS7iJ5D[M5ailh][tSr3qUw6];
                        M5ailh = M5ailh +1;
                    }
                }
                {
                    tSr3qUw6 = 1;
                    while (tSr3qUw6 <= lgZ7NJ - MBnqhEzF +1) {
                        for (M5ailh = 1; M5ailh <= lgZ7NJ - MBnqhEzF +1; M5ailh = M5ailh +1)
                            UGS7iJ5D[M5ailh][tSr3qUw6] = UGS7iJ5D[M5ailh][tSr3qUw6] - ACqon2Qm[tSr3qUw6];
                        tSr3qUw6 = tSr3qUw6 + 1;
                    }
                }
                ChqnJRkGUFs = ChqnJRkGUFs +UGS7iJ5D[2][2];
                for (M5ailh = 2; M5ailh <= lgZ7NJ - MBnqhEzF +1; M5ailh = M5ailh +1)
                    for (tSr3qUw6 = 1; tSr3qUw6 <= lgZ7NJ - MBnqhEzF +1; tSr3qUw6 = tSr3qUw6 + 1)
                        UGS7iJ5D[M5ailh][tSr3qUw6] = UGS7iJ5D[M5ailh +1][tSr3qUw6];
                for (M5ailh = 1; M5ailh <= lgZ7NJ - MBnqhEzF +1; M5ailh = M5ailh +1)
                    for (tSr3qUw6 = 2; tSr3qUw6 <= lgZ7NJ - MBnqhEzF +1; tSr3qUw6 = tSr3qUw6 + 1)
                        UGS7iJ5D[M5ailh][tSr3qUw6] = UGS7iJ5D[M5ailh][tSr3qUw6 + 1];
            }
            cout << ChqnJRkGUFs << '\n';
        }
    }
    return 0;
}

