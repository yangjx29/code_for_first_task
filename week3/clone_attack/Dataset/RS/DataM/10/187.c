main () {
    int yMFyxLo3VW29 [100], B4Bt6yAPNf, Hz1cNWAuKf, j, hJEH6xgfnW7 [100], sum [100], W1CrqmoiN;
    W1CrqmoiN = (150 - 150);
    scanf ("%d", &B4Bt6yAPNf);
    for (Hz1cNWAuKf = 0; B4Bt6yAPNf > Hz1cNWAuKf; Hz1cNWAuKf = Hz1cNWAuKf +1)
        scanf ("%d", &yMFyxLo3VW29[Hz1cNWAuKf]);
    hJEH6xgfnW7[B4Bt6yAPNf -1] = yMFyxLo3VW29[B4Bt6yAPNf -1];
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
    for (Hz1cNWAuKf = 0; Hz1cNWAuKf < B4Bt6yAPNf; Hz1cNWAuKf++)
        sum[Hz1cNWAuKf] = 0;
    sum[B4Bt6yAPNf -(277 - 276)] = 1;
    for (Hz1cNWAuKf = B4Bt6yAPNf -2; 0 <= Hz1cNWAuKf; Hz1cNWAuKf--) {
        sum[Hz1cNWAuKf] = sum[B4Bt6yAPNf -1];
        hJEH6xgfnW7[Hz1cNWAuKf] = hJEH6xgfnW7[B4Bt6yAPNf -1];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = B4Bt6yAPNf -1; Hz1cNWAuKf < j; j--) {
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
            if (yMFyxLo3VW29[Hz1cNWAuKf] >= hJEH6xgfnW7[j] && sum[Hz1cNWAuKf] <= sum[j] + 1) {
                sum[Hz1cNWAuKf] = sum[j] + 1;
                hJEH6xgfnW7[Hz1cNWAuKf] = yMFyxLo3VW29[Hz1cNWAuKf];
            };
        }
        if (sum[Hz1cNWAuKf] == 1 && yMFyxLo3VW29[Hz1cNWAuKf] < hJEH6xgfnW7[Hz1cNWAuKf])
            hJEH6xgfnW7[Hz1cNWAuKf] = yMFyxLo3VW29[Hz1cNWAuKf];
    }
    {
        Hz1cNWAuKf = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (Hz1cNWAuKf < B4Bt6yAPNf) {
            if (W1CrqmoiN <= sum[Hz1cNWAuKf])
                W1CrqmoiN = sum[Hz1cNWAuKf];
            Hz1cNWAuKf = Hz1cNWAuKf +1;
        };
    }
    printf ("%d", W1CrqmoiN);
}

