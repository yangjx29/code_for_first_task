int main () {
    int Qow8Z2L7QDI6 [12] = {(194 - 163), 28, (815 - 784), (173 - 143), 31, (577 - 547), 31, 31, 30, 31, 30, 31}, n [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int YrlwNj5, sm, sd, QPvuHMyW0, lHazNL9nU, FHz0L2Kef8C, sum = (543 - 543), yuFZvE;
    cin >> YrlwNj5 >> sm >> sd;
    cin >> QPvuHMyW0 >> lHazNL9nU >> FHz0L2Kef8C;
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
    for (yuFZvE = YrlwNj5 +(97 - 96); QPvuHMyW0 > yuFZvE; yuFZvE = yuFZvE + 1) {
        if ((yuFZvE % (835 - 831) == (288 - 288) && !((99 - 99) == yuFZvE % (676 - 576))) || (yuFZvE % (798 - 398) == 0))
            sum = sum + 366;
        else
            sum = sum + 365;
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
    if (YrlwNj5 < QPvuHMyW0) {
        if ((QPvuHMyW0 % 4 == 0 && QPvuHMyW0 % 100 != 0) || (!(0 != QPvuHMyW0 % 400))) {
            for (yuFZvE = 0; lHazNL9nU - (412 - 411) > yuFZvE; yuFZvE = yuFZvE + 1)
                sum = sum + n[yuFZvE];
        }
        else {
            for (yuFZvE = 0; yuFZvE < lHazNL9nU - (886 - 885); yuFZvE = yuFZvE + 1)
                sum = sum + Qow8Z2L7QDI6[yuFZvE];
        }
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
        if ((YrlwNj5 % 4 == 0 && YrlwNj5 % 100 != 0) || (YrlwNj5 % 400 == 0)) {
            {
                yuFZvE = 11;
                while (yuFZvE > sm - 1) {
                    sum = sum + n[yuFZvE];
                    yuFZvE = yuFZvE - 1;
                };
            }
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
            sum = sum + n[sm - 1] - sd;
        }
        else {
            {
                yuFZvE = 11;
                while (yuFZvE > sm - 1) {
                    sum = sum + Qow8Z2L7QDI6[yuFZvE];
                    yuFZvE = yuFZvE - 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            sum = sum + Qow8Z2L7QDI6[sm - 1] - sd;
        };
    }
    else if ((QPvuHMyW0 % 4 == 0 && QPvuHMyW0 % 100 != 0) || (QPvuHMyW0 % 400 == 0)) {
        if (sm < lHazNL9nU) {
            {
                yuFZvE = sm;
                while (yuFZvE < lHazNL9nU - 1) {
                    sum = sum + n[yuFZvE];
                    yuFZvE = yuFZvE + 1;
                };
            }
            sum = sum + n[sm - 1] - sd;
        }
        else
            sum = sum - sd;
    }
    else {
        if (sm < lHazNL9nU) {
            {
                yuFZvE = sm;
                while (yuFZvE < lHazNL9nU - 1) {
                    sum = sum + Qow8Z2L7QDI6[yuFZvE];
                    yuFZvE++;
                };
            }
            sum = sum + Qow8Z2L7QDI6[sm - 1] - sd;
        }
        else
            sum = sum - sd;
    }
    cout << sum + FHz0L2Kef8C << endl;
    return 0;
}

