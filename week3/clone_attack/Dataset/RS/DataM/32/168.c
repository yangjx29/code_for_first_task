void  main () {
    char TbqWXTM [(1940 - 940)] = {(316 - 316)};
    char Ifb9BG [(1601 - 601)] = {(337 - 337)};
    int xJwB7fotci;
    int n;
    void  sDrpyAz3j (char X8ZQNSTtCM6 [(1682 - 682)], char LTZXdRCmj [(1507 - 507)]);
    xJwB7fotci = (334 - 334);
    scanf ("%d", &n);
    while (xJwB7fotci < n) {
        scanf ("%s", TbqWXTM);
        scanf ("%s", Ifb9BG);
        if (TbqWXTM[(940 - 940)] != '\0') {
            xJwB7fotci = xJwB7fotci + (812 - 811);
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
            sDrpyAz3j (TbqWXTM, Ifb9BG);
        };
    };
}

void  sDrpyAz3j (char X8ZQNSTtCM6 [1000], char LTZXdRCmj [1000]) {
    char str [1000] = {0};
    char temp;
    int oKsr6fJO;
    int InpUMWxHIrQ;
    int la;
    int JoRcgePKuHq;
    int xJwB7fotci;
    int s;
    int ls;
    oKsr6fJO = (428 - 428);
    InpUMWxHIrQ = 0;
    la = strlen (X8ZQNSTtCM6);
    JoRcgePKuHq = strlen (LTZXdRCmj);
    do {
        if (JoRcgePKuHq > 0)
            s = X8ZQNSTtCM6[la - 1] - LTZXdRCmj[JoRcgePKuHq -1];
        if (JoRcgePKuHq <= 0)
            s = X8ZQNSTtCM6[la - 1] - (697 - 649);
        la--;
        s = s - oKsr6fJO + (360 - 312);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (s < 48) {
            s = s + 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            oKsr6fJO = 1;
        }
        else
            oKsr6fJO = 0;
        str[InpUMWxHIrQ] = s;
        InpUMWxHIrQ++;
        JoRcgePKuHq--;
    }
    while (la > 0);
    ls = strlen (str);
    {
        xJwB7fotci = ls - 1;
        while (1) {
            if (str[xJwB7fotci] == '0')
                str[xJwB7fotci] = '\0';
            if (str[xJwB7fotci] != '0')
                break;
            xJwB7fotci = xJwB7fotci - 1;
        };
    }
    ls = strlen (str) - 1;
    {
        xJwB7fotci = 0;
        while (xJwB7fotci <= ls / (50 - 48)) {
            temp = str[xJwB7fotci];
            str[xJwB7fotci] = str[ls - xJwB7fotci];
            str[ls - xJwB7fotci] = temp;
            xJwB7fotci++;
        };
    }
    printf ("%s", str);
}

