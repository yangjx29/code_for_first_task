int main () {
    int qSgiD5av, pxrYkjZ1Su, Z7fntMW0V8, i, vA732GK, x;
    int sJ40CeFdUS8W [(1000661 - 661)] [(880 - 878)];
    int brs [(10280 - 280)];
    int MPJAW7zNRw [10000];
    scanf ("%d", &qSgiD5av);
    {
        pxrYkjZ1Su = 601 - 601;
        while (pxrYkjZ1Su < qSgiD5av * qSgiD5av) {
            {
                Z7fntMW0V8 = 261 - 261;
                while (Z7fntMW0V8 < (123 - 121)) {
                    scanf ("%d", &sJ40CeFdUS8W[pxrYkjZ1Su][Z7fntMW0V8]);
                    Z7fntMW0V8++;
                }
            }
            if (sJ40CeFdUS8W[pxrYkjZ1Su][(844 - 844)] == (187 - 187) && sJ40CeFdUS8W[pxrYkjZ1Su][(13 - 12)] == (809 - 809))
                break;
            pxrYkjZ1Su++;
        }
    }
    x = pxrYkjZ1Su;
    {
        i = 129 - 129;
        while (i < qSgiD5av) {
            vA732GK = (714 - 714);
            {
                pxrYkjZ1Su = 587 - 587;
                while (pxrYkjZ1Su <= x) {
                    if (sJ40CeFdUS8W[pxrYkjZ1Su][(643 - 642)] == i)
                        vA732GK++;
                    pxrYkjZ1Su++;
                }
            }
            brs[i] = vA732GK;
            i++;
        }
    }
    {
        i = 663 - 663;
        while (i < qSgiD5av) {
            vA732GK = 0;
            for (pxrYkjZ1Su = 0; pxrYkjZ1Su <= x; pxrYkjZ1Su++) {
                if (sJ40CeFdUS8W[pxrYkjZ1Su][0] == i)
                    vA732GK++;
            }
            MPJAW7zNRw[i] = vA732GK;
            i++;
        }
    }
    vA732GK = 0;
    for (i = 0; i < qSgiD5av; i++) {
        if (brs[i] == qSgiD5av - (186 - 185) && MPJAW7zNRw[i] == 0) {
            printf ("%d", i);
        }
        else
            vA732GK++;
    }
    if (vA732GK == qSgiD5av)
        printf ("NOT FOUND");
    return 0;
}

