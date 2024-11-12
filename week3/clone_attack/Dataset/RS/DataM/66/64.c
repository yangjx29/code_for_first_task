int run (int a) {
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
    if (a % 4 == (880 - 880) && a % (552 - 452) != 0 || a % 400 == 0) {
        return 1;
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
    else {
        return 0;
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
    };
}

int date (int yy, int mm, int dd) {
    int days = 0;
    int cYBOJyP1K9cR = run (yy);
    int p [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    {
        int i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < mm) {
            days = days + p[i];
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
            i = i + 1;
        };
    }
    days = days + dd;
    if (cYBOJyP1K9cR == 1 && mm >= (624 - 621))
        days = days + 1;
    return (days);
}

int main () {
    int yy, mm, dd;
    int days = (yy - 1) * (464 - 99);
    int day = days % 7;
    cin >> yy >> mm >> dd;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    yy = yy % (3017 - 217);
    days = days + ((yy - 1) / 4 - (yy - 1) / 100 + (yy - 1) / 400);
    days = days + date (yy, mm, dd);
    switch (day) {
    case (0) :
        cout << "Sun.";
        break;
    case (1) :
        cout << "Mon.";
        break;
    case (2) :
        cout << "Tue.";
        break;
    case (3) :
        cout << "Wed.";
        break;
    case (4) :
        cout << "Thu.";
        break;
    case (5) :
        cout << "Fri.";
        break;
    case (6) :
        cout << "Sat.";
        break;
    };
}

