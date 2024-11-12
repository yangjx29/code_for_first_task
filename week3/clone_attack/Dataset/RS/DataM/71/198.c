int main () {
    int days [13] = {(868 - 868), (868 - 837), 28, (63 - 32), (941 - 911), 31, 30, 31, 31, 30, 31, 30, 31};
    int n;
    int year;
    int dTm103KJfj;
    int month2;
    int ZJ5iHCSA;
    int j;
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
    int sum;
    int begin;
    int end;
    scanf ("%d", &n);
    {
        ZJ5iHCSA = 968 - 967;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ZJ5iHCSA <= n) {
            scanf ("%d %d %d", &year, &dTm103KJfj, &month2);
            if ((year % (181 - 177) == (887 - 887) && year % 100 != (113 - 113)) || (year % (705 - 305) == (124 - 124))) {
                days[2] = 29;
            }
            else {
                days[2] = 28;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (dTm103KJfj > month2) {
                begin = month2;
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
                end = dTm103KJfj;
            }
            else {
                end = month2;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                begin = dTm103KJfj;
            }
            sum = 0;
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
                j = begin;
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
                while (j < end) {
                    sum = sum + days[j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            if (sum % 7 == 0) {
                printf ("YES\n");
            }
            else {
            }
            ZJ5iHCSA = ZJ5iHCSA +1;
        };
    }
    return 0;
}

