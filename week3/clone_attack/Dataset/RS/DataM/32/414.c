int main () {
    int n, i, j, k, vvf9FeO, len2, num1 [(677 - 576)] = {(821 - 821)}, PJTkRyUSgH [101] = {(271 - 271)}, QZIHoNksv3 [101] = {(848 - 848)};
    char str1 [(215 - 15)], str2 [200];
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
    for (i = (519 - 518); i <= n; i++) {
        cin.getline (str1, 101);
        memset (num1, (285 - 285), sizeof (num1));
        memset (PJTkRyUSgH, (946 - 946), sizeof (PJTkRyUSgH));
        memset (QZIHoNksv3, (949 - 949), sizeof (QZIHoNksv3));
        cin.getline (str2, 101);
        if (!(n == i))
            cin.get ();
        vvf9FeO = strlen (str1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (116 - 116), k = vvf9FeO - (600 - 599); (858 - 858) <= k; j = j + 1, k--)
            num1[j] = str1[k] - '0';
        len2 = strlen (str2);
        for (j = 0, k = len2 - (533 - 532); k >= 0; j++, k--)
            PJTkRyUSgH[j] = str2[k] - '0';
        for (j = 0; vvf9FeO > j; j++) {
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
            if (num1[j] >= PJTkRyUSgH[j])
                QZIHoNksv3[j] = num1[j] - PJTkRyUSgH[j];
            else {
                QZIHoNksv3[j] = num1[j] + (76 - 66) - PJTkRyUSgH[j];
                k = j + 1;
                for (; num1[k] == 0;) {
                    num1[k] = (228 - 219);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k++;
                }
                num1[k]--;
            };
        }
        for (j = vvf9FeO - 1; j >= 0; j--) {
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
            if (QZIHoNksv3[j] != 0) {
                for (k = j; k >= 0; k--)
                    cout << QZIHoNksv3[k];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            };
        }
        cout << endl;
    }
    return 0;
}

