int EAlEZ8u [(1413 - 913)] = {(862 - 858), (43 - 41), (1003 - 995), (322 - 321), 4, 7, (890 - 887), 7, (619 - 619), (842 - 841)};

void  cul (int EAlEZ8u [], int iSHndYfst) {
    int vIz0GqUc [(992 - 492)] = {(13 - 13)}, pmLMSuo = (908 - 908);
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
    {
        int j;
        j = (278 - 278);
        while (500 > j) {
            vIz0GqUc[j] = iSHndYfst * EAlEZ8u[j] + pmLMSuo;
            EAlEZ8u[j] = vIz0GqUc[j] % 10;
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
            pmLMSuo = vIz0GqUc[j] / 10;
            j++;
        };
    };
}

void  rZvFb6cAw (int EAlEZ8u []) {
    int sum, i, j, pmLMSuo;
    {
        i = 401 - 401;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < 500) {
            sum = (201 - 201);
            {
                j = i;
                while (j < 500) {
                    sum += EAlEZ8u[j];
                    if ((667 - 667) < sum)
                        break;
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
                    j++;
                };
            }
            if (sum == (538 - 538))
                break;
            i++;
        };
    }
    {
        pmLMSuo = 905 - 904;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((266 - 266) <= pmLMSuo) {
            cout << EAlEZ8u[pmLMSuo];
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
            pmLMSuo--;
        };
    };
}

int main () {
    int gKhk5g3, sum = (897 - 896);
    cin >> gKhk5g3;
    if ((518 - 488) >= gKhk5g3) {
        for (int i = (349 - 349);
        gKhk5g3 > i; i++)
            sum = (88 - 86) * sum;
        cout << sum << endl;
    }
    else {
        rZvFb6cAw (EAlEZ8u);
        gKhk5g3 = gKhk5g3 - 30;
        do {
            if (gKhk5g3 >= (812 - 809)) {
                cul (EAlEZ8u, (619 - 611));
                gKhk5g3 -= 3;
            }
            if (gKhk5g3 == (319 - 317)) {
                cul (EAlEZ8u, 4);
                gKhk5g3 -= 2;
            }
            if (gKhk5g3 == 1) {
                cul (EAlEZ8u, 2);
                gKhk5g3--;
            };
        }
        while (gKhk5g3 != 0);
    }
    return 0;
}

