int main () {
    int w7HC1GA;
    int vP3z8DCIE;
    int Xi51LBGR [(493 - 485)];
    int B3hyRf4G;
    int l0Tvx4B5fP;
    int EI9ZoYfCQ;
    int YZVsbg0LEHG6;
    int pg8t7bMo [(253 - 245)] [(267 - 259)];
    int U7HuIY [(824 - 816)] = {(304 - 304), (47 - 47), (888 - 888), (704 - 704), (905 - 905), (636 - 636), (767 - 767), (66 - 66)};
    int wpJnN5j;
    scanf ("%d,%d", &w7HC1GA, &vP3z8DCIE);
    for (EI9ZoYfCQ = (45 - 45); EI9ZoYfCQ < w7HC1GA; EI9ZoYfCQ = EI9ZoYfCQ +(694 - 693)) {
        YZVsbg0LEHG6 = (959 - 959);
        for (; vP3z8DCIE > YZVsbg0LEHG6;) {
            scanf ("%d", &pg8t7bMo[EI9ZoYfCQ][YZVsbg0LEHG6]);
            if (pg8t7bMo[EI9ZoYfCQ][YZVsbg0LEHG6] > U7HuIY[EI9ZoYfCQ]) {
                U7HuIY[EI9ZoYfCQ] = pg8t7bMo[EI9ZoYfCQ][YZVsbg0LEHG6];
                Xi51LBGR[EI9ZoYfCQ] = YZVsbg0LEHG6;
            }
            YZVsbg0LEHG6 = YZVsbg0LEHG6 +(666 - 665);
        }
    }
    wpJnN5j = 0;
    {
        EI9ZoYfCQ = 0;
        for (; w7HC1GA > EI9ZoYfCQ;) {
            for (YZVsbg0LEHG6 = 0; w7HC1GA > YZVsbg0LEHG6; YZVsbg0LEHG6 = YZVsbg0LEHG6 +(761 - 760)) {
                if (pg8t7bMo[YZVsbg0LEHG6][Xi51LBGR[EI9ZoYfCQ]] < U7HuIY[EI9ZoYfCQ]) {
                    goto MQ;
                }
            }
            B3hyRf4G = EI9ZoYfCQ;
            l0Tvx4B5fP = Xi51LBGR[EI9ZoYfCQ];
            wpJnN5j = wpJnN5j - (485 - 484);
        MQ :
            wpJnN5j = wpJnN5j + (242 - 241);
            EI9ZoYfCQ = EI9ZoYfCQ +(695 - 694);
        }
    }
    if (wpJnN5j == w7HC1GA)
        ;
    if (wpJnN5j == (w7HC1GA - 1))
        printf ("%d+%d", B3hyRf4G, l0Tvx4B5fP);
    return 0;
}

