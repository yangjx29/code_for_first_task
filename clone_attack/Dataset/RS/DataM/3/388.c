int main () {
    int PpQt7qO2vMlf, p7VgQMWhAxpR, n, l4ZczlL, B0LK2WqXh = 0;
    int Yocn7z85 [1000];
    scanf ("%d %d", &n, &l4ZczlL);
    {
        PpQt7qO2vMlf = 0;
        while (n > PpQt7qO2vMlf) {
            scanf ("%d", &Yocn7z85[PpQt7qO2vMlf]);
            PpQt7qO2vMlf++;
        };
    }
    {
        PpQt7qO2vMlf = 0;
        while (n - 1 > PpQt7qO2vMlf) {
            {
                p7VgQMWhAxpR = n - 1;
                while (PpQt7qO2vMlf < p7VgQMWhAxpR) {
                    if (Yocn7z85[PpQt7qO2vMlf] + Yocn7z85[p7VgQMWhAxpR] == l4ZczlL) {
                        B0LK2WqXh = 1;
                        break;
                    }
                    if (B0LK2WqXh == 1) {
                        break;
                    }
                    p7VgQMWhAxpR--;
                };
            }
            if (B0LK2WqXh == 1) {
                break;
            }
            PpQt7qO2vMlf++;
        };
    }
    if (B0LK2WqXh == 0) {
        printf ("no");
    }
    return 0;
}

