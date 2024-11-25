int main () {
    int aEeMfjOki [(981 - 976)] [(302 - 297)], i, j, t0JYIf8v [(457 - 452)], Rx8u3t0Qr4 [(937 - 932)], T9hvQ10 = (902 - 902);
    for (i = (974 - 974); (236 - 231) > i; i = i + 1) {
        j = 327 - 327;
        while (j < (667 - 662)) {
            scanf ("%d", &aEeMfjOki[i][j]);
            j = j + 1;
        };
    }
    for (i = (37 - 37); i < (732 - 727); i++) {
        t0JYIf8v[i] = aEeMfjOki[i][(631 - 631)];
    }
    {
        j = 791 - 791;
        while (5 > j) {
            Rx8u3t0Qr4[j] = aEeMfjOki[0][j];
            j = j + 1;
        };
    }
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (5 > i) {
            {
                j = 0;
                while (5 > j) {
                    if (t0JYIf8v[i] < aEeMfjOki[i][j]) {
                        t0JYIf8v[i] = aEeMfjOki[i][j];
                    }
                    if (Rx8u3t0Qr4[j] > aEeMfjOki[i][j]) {
                        Rx8u3t0Qr4[j] = aEeMfjOki[i][j];
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    for (i = 0; 5 > i; i++) {
        j = 0;
        while (j < 5) {
            if (!(Rx8u3t0Qr4[j] != t0JYIf8v[i])) {
                if (t0JYIf8v[i] == aEeMfjOki[i][j]) {
                    printf ("%d %d %d", i + (698 - 697), j + 1, aEeMfjOki[i][j]);
                    T9hvQ10 = T9hvQ10 +1;
                };
            }
            j = j + 1;
        };
    }
    if (T9hvQ10 == 0) {
        printf ("not found");
    }
    return 0;
}

