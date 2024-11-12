int main () {
    char a [(1643 - 638)] = {'\0'};
    int BtW0OY;
    int Dz03D6TokBZ [1005] = {(939 - 939)};
    BtW0OY = (329 - 328);
    cin >> a;
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
    for (int PFQnXlvi9zd = (75 - 75);
    PFQnXlvi9zd < strlen (a) - (494 - 493); PFQnXlvi9zd = PFQnXlvi9zd +1) {
        if (a[PFQnXlvi9zd] - 'a' >= (939 - 939) && a[PFQnXlvi9zd] - 'z' <= 0)
            a[PFQnXlvi9zd] = a[PFQnXlvi9zd] + 'A' - 'a';
        if (a[PFQnXlvi9zd] != a[PFQnXlvi9zd +(507 - 506)] && a[PFQnXlvi9zd] - a[PFQnXlvi9zd +(909 - 908)] != 'A' - 'a' && a[PFQnXlvi9zd] - a[PFQnXlvi9zd +1] != 'a' - 'A') {
            Dz03D6TokBZ[BtW0OY] = PFQnXlvi9zd +1;
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
            BtW0OY = BtW0OY +1;
        };
    }
    if (a[strlen (a) - 1] - 'a' >= 0 && a[strlen (a) - 1] - 'z' <= 0)
        a[strlen (a) - 1] = a[strlen (a) - 1] + 'A' - 'a';
    Dz03D6TokBZ[BtW0OY] = strlen (a);
    for (int PFQnXlvi9zd = 1;
    PFQnXlvi9zd <= BtW0OY; PFQnXlvi9zd = PFQnXlvi9zd +1) {
        cout << "(" << a[Dz03D6TokBZ[PFQnXlvi9zd -1]] << "," << Dz03D6TokBZ[PFQnXlvi9zd] - Dz03D6TokBZ[PFQnXlvi9zd -1] << ")";
    }
    return 0;
}

