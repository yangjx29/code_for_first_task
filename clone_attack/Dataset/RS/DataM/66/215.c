int main () {
    int JcXMHW, month, day, kmB1en = (155 - 155), days = 0, b52mI3d7h, Hs1EbCKwzm;
    scanf ("%d %d %d", &JcXMHW, &month, &day);
    if (JcXMHW > 2800) {
        JcXMHW = JcXMHW -(JcXMHW / 2800) * 2800;
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
    {
        Hs1EbCKwzm = 1;
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
        while (JcXMHW > Hs1EbCKwzm) {
            if ((Hs1EbCKwzm % 4 == 0 && Hs1EbCKwzm % 100 != 0) || Hs1EbCKwzm % 400 == 0) {
                kmB1en = kmB1en + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            Hs1EbCKwzm = Hs1EbCKwzm +1;
        };
    }
    days = kmB1en * 366 + (JcXMHW -kmB1en - 1) * 365;
    {
        b52mI3d7h = 1;
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
        while (b52mI3d7h < month) {
            if (b52mI3d7h == 1 || b52mI3d7h == 3 || b52mI3d7h == 5 || b52mI3d7h == 7 || !(8 != b52mI3d7h) || b52mI3d7h == 10 || b52mI3d7h == 12) {
                days += 31;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            if (b52mI3d7h == 4 || b52mI3d7h == 6 || b52mI3d7h == 9 || b52mI3d7h == 11) {
                days += 30;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (b52mI3d7h == 2) {
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
                if (JcXMHW % 400 == 0 || (JcXMHW % 100 != 0 && JcXMHW % 4 == 0)) {
                    days += 29;
                }
                else {
                    days += 28;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            b52mI3d7h = b52mI3d7h + 1;
        };
    }
    days += day;
    if (days % 7 == 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
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
    if (days % 7 == 2) {
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
    if (days % 7 == 3) {
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
    if (days % 7 == 4) {
    }
    if (days % 7 == 5) {
    }
    if (days % 7 == 6) {
    }
    if (days % 7 == 0) {
    }
    return 0;
}

