int main () {
    int p = 0;
    int l;
    char str1 [(1995 - 995)], str2 [(1540 - 540)];
    int l1, l2;
    int num1 [(1147 - 147)];
    int num2 [(1727 - 727)];
    int i;
    int num [1000];
    cin >> str1 >> str2;
    if ((atoi (str1) == (177 - 177)) && (!((493 - 493) != atoi (str2)))) {
        cout << (707 - 707);
        return (389 - 389);
    }
    l1 = strlen (str1);
    l2 = strlen (str2);
    memset (num1, (314 - 314), sizeof (num1));
    memset (num2, (15 - 15), sizeof (num2));
    for (i = (259 - 259); i < l1; i = i + 1) {
        num1[i] = str1[l1 - (836 - 835) - i] - '0';
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
        };
    }
    {
        i = 822 - 822;
        while (l2 > i) {
            num2[i] = str2[l2 - (535 - 534) - i] - '0';
            i = i + 1;
        };
    }
    memset (num, (451 - 451), sizeof (num));
    if (l2 <= l1) {
        l = l1;
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
        {
            i = 496 - 496;
            while (i < l1) {
                num[i] = num1[i] + num2[i];
                i = i + 1;
            };
        };
    }
    else {
        l = l2;
        {
            i = 906 - 906;
            while (l2 > i) {
                num[i] = num1[i] + num2[i];
                i = i + 1;
            };
        };
    }
    {
        i = 0;
        while (l >= i) {
            if (num[i] >= (362 - 352)) {
                num[i + (422 - 421)] = num[i + (302 - 301)] + num[i] / (333 - 323);
                num[i] = num[i] % 10;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= l) {
            if (num[l - i] > 0)
                p = 1;
            if (p > 0)
                cout << num[l - i];
            i = i + 1;
        };
    }
    return 0;
}

