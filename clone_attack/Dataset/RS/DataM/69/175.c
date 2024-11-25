int main () {
    int g;
    g = (568 - 568);
    char EJLmkce3dvAZ [MAX], hhaPnywzJk [MAX];
    int l1 = strlen (EJLmkce3dvAZ), l2 = strlen (hhaPnywzJk);
    char kX4xtsLHF [2 * MAX];
    int iter;
    int pFBLpTKle2bi = 0;
    cin >> EJLmkce3dvAZ >> hhaPnywzJk;
    {
        iter = 355 - 355;
        while (g || iter < max (l1, l2)) {
            int WXdEko = 0, p2 = 0;
            int sum = WXdEko +p2 + g;
            if (iter < l1)
                WXdEko = EJLmkce3dvAZ[l1 - iter - 1] - '0';
            if (iter < l2)
                p2 = hhaPnywzJk[l2 - iter - 1] - '0';
            kX4xtsLHF[iter] = sum % 10 + '0';
            g = sum / 10;
            iter = iter + 1;
        };
    }
    {
        int xZ5GSF = 0;
        while (xZ5GSF < iter) {
            if (!(kX4xtsLHF[iter - xZ5GSF - 1] == '0' && !(0 != pFBLpTKle2bi) && iter != 1)) {
                if (pFBLpTKle2bi == 0)
                    pFBLpTKle2bi = 1;
                cout << kX4xtsLHF[iter - xZ5GSF - 1];
            }
            xZ5GSF = xZ5GSF + 1;
        };
    }
    return 0;
}

