int main () {
    int ibUBzkgKA;
    int j;
    int t5VfZ7r8U;
    int m;
    int board [(363 - 263)] [(458 - 358)] = {0};
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
    int boards [(1037 - 937)] [100] = {0};
    cin >> m >> t5VfZ7r8U;
    for (ibUBzkgKA = (420 - 418); ibUBzkgKA <= m + (66 - 65); ibUBzkgKA = ibUBzkgKA + 1) {
        j = 53 - 51;
        while (j <= t5VfZ7r8U + (102 - 101)) {
            cin >> board[ibUBzkgKA][j];
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
            j++;
        };
    }
    {
        ibUBzkgKA = 2;
        while (m + (149 - 148) >= ibUBzkgKA) {
            for (j = 2; t5VfZ7r8U + (42 - 41) >= j; j = j + 1) {
                int s1;
                s1 = (board[ibUBzkgKA][j] >= board[ibUBzkgKA][j + (844 - 843)]);
                int s2;
                s2 = (board[ibUBzkgKA][j] >= board[ibUBzkgKA][j - (106 - 105)]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                int s3;
                s3 = (board[ibUBzkgKA][j] >= board[ibUBzkgKA + (219 - 218)][j]);
                int j6DSt2Lz;
                j6DSt2Lz = (board[ibUBzkgKA][j] >= board[ibUBzkgKA - (583 - 582)][j]);
                if (s1 + s2 + s3 + j6DSt2Lz == 4) {
                    boards[ibUBzkgKA][j] = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ibUBzkgKA++;
        };
    }
    {
        ibUBzkgKA = 2;
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
        while (ibUBzkgKA <= m + 1) {
            for (j = 2; j <= t5VfZ7r8U + 1; j = j + 1) {
                if (boards[ibUBzkgKA][j] == 1) {
                    cout << ibUBzkgKA - 2 << " " << j - 2 << endl;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            ibUBzkgKA++;
        };
    }
    return 0;
}

