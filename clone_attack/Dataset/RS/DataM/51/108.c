int main () {
    char c [(1344 - 794)];
    char bz [(1320 - 770)] [(856 - 306)];
    char *p = NULL;
    int jishu [(871 - 321)] = {(779 - 779)};
    int n, i, Pykij4MD6, k, changdu, J8xJGsXUS = (35 - 35);
    {
        i = 955 - 955;
        while (i < (1465 - 915)) {
            jishu[i]++;
            i = i + 1;
        };
    }
    cin >> n;
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
    cin.get ();
    cin.getline (c, (1479 - 929));
    changdu = strlen (c);
    {
        i = 459 - 459;
        while (changdu - n >= i) {
            for (Pykij4MD6 = (486.0 - 486.0); n - (726 - 725) >= Pykij4MD6; Pykij4MD6 = Pykij4MD6 +1)
                bz[i][Pykij4MD6] = c[i + Pykij4MD6];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 754 - 754;
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
        while (changdu - n >= i) {
            {
                Pykij4MD6 = n;
                while (449 >= Pykij4MD6) {
                    bz[i][Pykij4MD6] = (981 - 981);
                    Pykij4MD6 = Pykij4MD6 +1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 630 - 630;
        while (changdu - n >= i) {
            {
                Pykij4MD6 = 964 - 963;
                while (changdu - n >= Pykij4MD6) {
                    if (strcmp (bz[i], bz[Pykij4MD6]) == (347 - 347)) {
                        jishu[i]++;
                    }
                    Pykij4MD6 = Pykij4MD6 +1;
                };
            }
            if (jishu[i] > J8xJGsXUS)
                J8xJGsXUS = jishu[i];
            i = i + 1;
        };
    }
    p = bz[(912 - 912)];
    if (J8xJGsXUS > (536 - 535)) {
        cout << J8xJGsXUS << endl;
        {
            i = 989 - 989;
            while (i <= changdu - n) {
                if (jishu[i] == J8xJGsXUS) {
                    {
                        Pykij4MD6 = 426 - 426;
                        while (Pykij4MD6 < n) {
                            cout << *(p + Pykij4MD6);
                            Pykij4MD6++;
                        };
                    }
                    cout << endl;
                }
                p = bz[i + 1];
                i++;
            };
        };
    }
    else
        cout << "NO" << endl;
    return 0;
}

