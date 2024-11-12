int pUDJtdpTM (int qguoJayN) {
    char JQ6elNHuAh [(615 - 610)];
    int hBO6K0TEWk5;
    int i;
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
    if ((448 - 448) >= qguoJayN) {
        hBO6K0TEWk5 = -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        qguoJayN = -qguoJayN;
    }
    {
        i = 4;
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
        while ((829 - 829) <= i) {
            JQ6elNHuAh[i] = qguoJayN / ((int) pow ((743 - 733), i));
            qguoJayN = qguoJayN - (JQ6elNHuAh[i] * ((int) pow (10, i)));
            i--;
        };
    }
    if (!(0 == JQ6elNHuAh[4]))
        qguoJayN = JQ6elNHuAh[0] * 10000 + JQ6elNHuAh[1] * (1869 - 869) + JQ6elNHuAh[(186 - 184)] * 100 + JQ6elNHuAh[3] * 10 + JQ6elNHuAh[4];
    else if (!(0 == JQ6elNHuAh[3]))
        qguoJayN = JQ6elNHuAh[0] * 1000 + JQ6elNHuAh[1] * 100 + JQ6elNHuAh[2] * 10 + JQ6elNHuAh[3];
    else if (JQ6elNHuAh[2] != 0)
        qguoJayN = JQ6elNHuAh[0] * 100 + JQ6elNHuAh[1] * 10 + JQ6elNHuAh[2];
    else if (JQ6elNHuAh[1] != 0)
        qguoJayN = JQ6elNHuAh[0] * 10 + JQ6elNHuAh[1];
    else
        qguoJayN = JQ6elNHuAh[0];
    if (hBO6K0TEWk5 == -1)
        qguoJayN = -qguoJayN;
    return (qguoJayN);
}

void  main () {
    int qguoJayN, CzTxwXrmIZEP;
    {
        CzTxwXrmIZEP = 1;
        while (CzTxwXrmIZEP <= 6) {
            CzTxwXrmIZEP++;
            scanf ("%d", &qguoJayN);
            qguoJayN = pUDJtdpTM (qguoJayN);
            printf ("%d\n", qguoJayN);
        };
    };
}

