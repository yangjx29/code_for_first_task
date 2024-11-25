int main () {
    int woK5yRY98Lj, XiXWMqPs, XNsfrbuMvqE8, sum = 0, i;
    int monthday_run [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int monthday_ping [13] = {(582 - 582), 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    struct   cal {
        int WxlfU48;
        int VbznTu0krY;
        int IdGUsz;
    }
    date [2];
    cin >> date[0].WxlfU48 >> date[0].VbznTu0krY >> date[0].IdGUsz;
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
    cin >> date[(752 - 751)].WxlfU48 >> date[1].VbznTu0krY >> date[1].IdGUsz;
    if (0 < date[1].WxlfU48 - date[0].WxlfU48) {
        if (1 < date[1].WxlfU48 - date[0].WxlfU48) {
            sum = 365 * (date[1].WxlfU48 - date[0].WxlfU48 - 1);
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
        for (i = date[0].VbznTu0krY; 12 >= i; i = i + 1) {
            sum = sum + monthday_ping[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        sum = sum - date[0].IdGUsz;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 1; date[1].VbznTu0krY > i; i = i + 1) {
            sum = sum + monthday_ping[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        sum = sum + date[1].IdGUsz;
    }
    else if (date[1].VbznTu0krY > date[0].VbznTu0krY) {
        for (i = date[0].VbznTu0krY; date[1].VbznTu0krY > i; i = i + 1) {
            sum = sum + monthday_ping[i];
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
        sum = sum - date[0].IdGUsz + date[1].IdGUsz;
    }
    else
        sum = date[1].IdGUsz - date[0].IdGUsz;
    for (i = date[0].WxlfU48 + 1; date[1].WxlfU48 > i; i = i + 1) {
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
        if ((!(0 != i % 4) && i % 100 != 0) || (!(0 != i % 400))) {
            sum = sum + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    if ((!(0 != date[0].WxlfU48 % 4) && date[0].WxlfU48 % 100 != 0) || (date[0].WxlfU48 % 400 == 0)) {
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
        if ((date[0].VbznTu0krY < 2) || (date[0].VbznTu0krY = 2 && date[0].IdGUsz != 29)) {
            sum = sum + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    if ((date[1].WxlfU48 % 4 == 0 && date[1].WxlfU48 % 100 != 0) || (date[1].WxlfU48 % 400 == 0)) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if ((date[1].VbznTu0krY = 2) || (date[1].VbznTu0krY = 2 && date[1].IdGUsz != 29)) {
            sum = sum + 1;
        };
    }
    cout << sum;
    return 0;
}

