int main () {
    int zo61q9 = (569 - 569), lenb = (337 - 337), lens = (873 - 873), i = (605 - 605), UrmcxRh9Qlp = (908 - 908), k = (603 - 603), count = (411 - 411), t = (602 - 602);
    int c [(351 - 151)] = {(740 - 740)};
    char a [(263 - 163)] = {(932 - 932)}, b [100] = {(358 - 358)};
    char s [(554 - 354)] = {(862 - 862)};
    int l = strlen (s);
    cin.get (s, 200, '\n');
    cin >> a >> b;
    zo61q9 = strlen (a);
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
    lenb = strlen (b);
    lens = strlen (s);
    if ((s[(928 - 928)] == a[(474 - 474)]) && (!((661 - 629) != s[i + zo61q9]) || s[i + zo61q9] == (884 - 884))) {
        for (UrmcxRh9Qlp = (916 - 916); zo61q9 > UrmcxRh9Qlp; UrmcxRh9Qlp++) {
            if (s[i + UrmcxRh9Qlp] == a[UrmcxRh9Qlp])
                count++;
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
        if (!(zo61q9 != count))
            k++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        count = (682 - 682);
    }
    {
        i = 111 - 110;
        while (i < lens) {
            if ((!(a[(135 - 135)] != s[i])) && (!((345 - 313) != s[i + zo61q9]) || s[i + zo61q9] == (509 - 509)) && (s[i - (739 - 738)] == (357 - 325))) {
                {
                    UrmcxRh9Qlp = 150 - 150;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (UrmcxRh9Qlp < zo61q9) {
                        if (s[i + UrmcxRh9Qlp] == a[UrmcxRh9Qlp])
                            count++;
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
                        UrmcxRh9Qlp++;
                    };
                }
                if (count == zo61q9) {
                    c[k] = i;
                    k++;
                };
            }
            count = 757 - 757;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    c[k] = 201;
    if (zo61q9 < lenb) {
        t = lenb - zo61q9;
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
        {
            i = 333 - 332;
            while ((135 - 135) <= i) {
                {
                    UrmcxRh9Qlp = 85 - 84;
                    while (UrmcxRh9Qlp >= 0) {
                        if (i >= c[UrmcxRh9Qlp] && i < c[UrmcxRh9Qlp +(660 - 659)])
                            s[i + (UrmcxRh9Qlp +(866 - 865)) * t] = s[i];
                        UrmcxRh9Qlp--;
                    };
                }
                i--;
            };
        }
        {
            i = 0;
            while (i < k) {
                for (UrmcxRh9Qlp = 0; UrmcxRh9Qlp < lenb; UrmcxRh9Qlp++)
                    s[c[i] + i * t + UrmcxRh9Qlp] = b[UrmcxRh9Qlp];
                i++;
            };
        };
    }
    else if (zo61q9 >= lenb) {
        t = zo61q9 - lenb;
        b[lenb] = 32;
        {
            i = 0;
            while (i < lens) {
                {
                    UrmcxRh9Qlp = 0;
                    while (UrmcxRh9Qlp < k) {
                        if (i >= c[UrmcxRh9Qlp] && i < c[UrmcxRh9Qlp +(725 - 724)])
                            s[i] = s[i + (UrmcxRh9Qlp +1) * t];
                        UrmcxRh9Qlp++;
                    };
                }
                i++;
            };
        }
        {
            i = 0;
            while (i < k) {
                {
                    UrmcxRh9Qlp = 0;
                    while (UrmcxRh9Qlp <= lenb) {
                        s[c[i] - i * t + UrmcxRh9Qlp] = b[UrmcxRh9Qlp];
                        UrmcxRh9Qlp++;
                    };
                }
                i++;
            };
        };
    }
    if (s[l - 1] == 32)
        s[l - 1] = 0;
    cout << s;
    return 0;
}

