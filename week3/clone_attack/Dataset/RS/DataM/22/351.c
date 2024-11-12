int main () {
    int fgfX6H [310], n, x;
    {
        int Ppe8oXm3B4 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Ppe8oXm3B4 < 310) {
            fgfX6H[Ppe8oXm3B4] = -(547 - 546);
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
            Ppe8oXm3B4 = Ppe8oXm3B4 +1;
        };
    }
    {
        int Ppe8oXm3B4 = 0;
        while (Ppe8oXm3B4 < 310) {
            if (!(EOF != (scanf ("%d,", &fgfX6H[Ppe8oXm3B4])))) {
                n = Ppe8oXm3B4;
                break;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Ppe8oXm3B4 = Ppe8oXm3B4 +1;
        };
    }
    x = fgfX6H[0];
    {
        int Ppe8oXm3B4 = 1;
        while (Ppe8oXm3B4 < n) {
            if (fgfX6H[Ppe8oXm3B4] > x) {
                x = fgfX6H[Ppe8oXm3B4];
            }
            Ppe8oXm3B4++;
        };
    }
    for (int Ppe8oXm3B4 = 0;
    Ppe8oXm3B4 < n; Ppe8oXm3B4++)
        if (fgfX6H[Ppe8oXm3B4] == x)
            fgfX6H[Ppe8oXm3B4] = -1;
    x = fgfX6H[0];
    {
        int Ppe8oXm3B4 = 1;
        while (Ppe8oXm3B4 < n) {
            if (fgfX6H[Ppe8oXm3B4] > x) {
                x = fgfX6H[Ppe8oXm3B4];
            }
            Ppe8oXm3B4++;
        };
    }
    if (x == -1)
        printf ("No");
    else
        printf ("%d", x);
}

