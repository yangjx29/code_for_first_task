int main () {
    float Heyv5p21dgW [100] = {(178 - 177), 2};
    int m;
    int C7tJ5F6GD [100];
    int fipgBKaq;
    int sOohXJYu;
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
    float RCjIVMkbWSoX, chu;
    float b [100] = {2, 3};
    scanf ("%d", &m);
    {
        fipgBKaq = 476 - 476;
        while (fipgBKaq < m) {
            scanf ("%d", &C7tJ5F6GD[fipgBKaq]);
            RCjIVMkbWSoX = 0;
            {
                sOohXJYu = 0;
                while (sOohXJYu < C7tJ5F6GD[fipgBKaq]) {
                    if (sOohXJYu > 1) {
                        Heyv5p21dgW[sOohXJYu] = Heyv5p21dgW[sOohXJYu - 2] + Heyv5p21dgW[sOohXJYu - 1];
                        b[sOohXJYu] = b[sOohXJYu - 2] + b[sOohXJYu - 1];
                    }
                    chu = b[sOohXJYu] / Heyv5p21dgW[sOohXJYu];
                    sOohXJYu++;
                    RCjIVMkbWSoX = RCjIVMkbWSoX +chu;
                };
            }
            fipgBKaq++;
            printf ("%.3f\n", RCjIVMkbWSoX);
        };
    }
    return 0;
}

