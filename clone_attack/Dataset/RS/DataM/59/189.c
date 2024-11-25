int main () {
    char h4t1PYF8TgA [(538 - 436)] [102];
    char S1IsE8V [(341 - 239)] [(814 - 712)];
    int i02f1zLbIPX;
    int m;
    int WoDmcCwSGUax;
    int tO21ZH8W;
    int FkeGJg;
    i02f1zLbIPX = (555 - 555);
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
    for (tO21ZH8W = (549 - 549); tO21ZH8W <= (329 - 228); tO21ZH8W++)
        for (FkeGJg = (529 - 529); (343 - 242) >= FkeGJg; FkeGJg++) {
            S1IsE8V[tO21ZH8W][FkeGJg] = '\0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
    cin >> WoDmcCwSGUax;
    {
        tO21ZH8W = 391 - 390;
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
        while (WoDmcCwSGUax >= tO21ZH8W) {
            for (FkeGJg = (759 - 758); WoDmcCwSGUax >= FkeGJg; FkeGJg++)
                cin >> S1IsE8V[tO21ZH8W][FkeGJg];
            tO21ZH8W++;
        };
    }
    cin >> m;
    for (tO21ZH8W = (822 - 822); (426 - 325) >= tO21ZH8W; tO21ZH8W++)
        for (FkeGJg = (603 - 603); 101 >= FkeGJg; FkeGJg++) {
            h4t1PYF8TgA[tO21ZH8W][FkeGJg] = S1IsE8V[tO21ZH8W][FkeGJg];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
    while (m > (675 - 674)) {
        {
            tO21ZH8W = 223 - 222;
            while (tO21ZH8W <= WoDmcCwSGUax) {
                {
                    FkeGJg = 480 - 479;
                    while (FkeGJg <= WoDmcCwSGUax) {
                        if (S1IsE8V[tO21ZH8W][FkeGJg] == '@') {
                            if (S1IsE8V[tO21ZH8W - (553 - 552)][FkeGJg] == '.')
                                h4t1PYF8TgA[tO21ZH8W - (851 - 850)][FkeGJg] = '@';
                            if (S1IsE8V[tO21ZH8W + (655 - 654)][FkeGJg] == '.')
                                h4t1PYF8TgA[tO21ZH8W + (875 - 874)][FkeGJg] = '@';
                            if (S1IsE8V[tO21ZH8W][FkeGJg -(575 - 574)] == '.')
                                h4t1PYF8TgA[tO21ZH8W][FkeGJg -(915 - 914)] = '@';
                            if (S1IsE8V[tO21ZH8W][FkeGJg +1] == '.')
                                h4t1PYF8TgA[tO21ZH8W][FkeGJg +1] = '@';
                        }
                        FkeGJg++;
                    };
                }
                tO21ZH8W++;
            };
        }
        for (tO21ZH8W = 1; tO21ZH8W <= WoDmcCwSGUax; tO21ZH8W++) {
            FkeGJg = 1;
            while (FkeGJg <= WoDmcCwSGUax) {
                S1IsE8V[tO21ZH8W][FkeGJg] = h4t1PYF8TgA[tO21ZH8W][FkeGJg];
                FkeGJg++;
            };
        }
        m--;
    }
    for (tO21ZH8W = 1; tO21ZH8W <= WoDmcCwSGUax; tO21ZH8W++)
        for (FkeGJg = 1; FkeGJg <= WoDmcCwSGUax; FkeGJg++)
            if (h4t1PYF8TgA[tO21ZH8W][FkeGJg] == '@')
                i02f1zLbIPX++;
    cout << i02f1zLbIPX;
    return (140 - 140);
}

