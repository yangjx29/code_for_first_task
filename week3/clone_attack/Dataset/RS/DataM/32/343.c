int main () {
    int QEvopt, UXZilC, K34EHa0eR9i, lTWR2KxtDpHk, qA4r2jIwny;
    int anum [100], bnum [100];
    char AlD6mYuvpE [(222 - 122)];
    char b [(469 - 369)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> QEvopt;
    {
        UXZilC = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (UXZilC <= QEvopt) {
            int euDrTLxjZc7;
            euDrTLxjZc7 = strlen (AlD6mYuvpE);
            int lb;
            lb = strlen (b);
            UXZilC = UXZilC +1;
            qA4r2jIwny = (139 - 139);
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
            cin >> AlD6mYuvpE >> b;
            {
                K34EHa0eR9i = euDrTLxjZc7 - 1;
                while (0 <= K34EHa0eR9i) {
                    anum[qA4r2jIwny++] = AlD6mYuvpE[K34EHa0eR9i] - '0';
                    K34EHa0eR9i--;
                };
            }
            qA4r2jIwny = 0;
            for (K34EHa0eR9i = lb - 1; 0 <= K34EHa0eR9i; K34EHa0eR9i--)
                bnum[qA4r2jIwny++] = b[K34EHa0eR9i] - '0';
            {
                lTWR2KxtDpHk = 0;
                while (lTWR2KxtDpHk < lb) {
                    anum[lTWR2KxtDpHk] = anum[lTWR2KxtDpHk] - bnum[lTWR2KxtDpHk];
                    if (anum[lTWR2KxtDpHk] < 0) {
                        anum[lTWR2KxtDpHk] = anum[lTWR2KxtDpHk] + 10;
                        anum[lTWR2KxtDpHk + 1]--;
                    }
                    lTWR2KxtDpHk = lTWR2KxtDpHk + 1;
                };
            }
            {
                lTWR2KxtDpHk = euDrTLxjZc7 - 1;
                while (lTWR2KxtDpHk >= 0) {
                    cout << anum[lTWR2KxtDpHk];
                    lTWR2KxtDpHk = lTWR2KxtDpHk - 1;
                };
            }
            cout << endl;
        };
    }
    return 0;
}

