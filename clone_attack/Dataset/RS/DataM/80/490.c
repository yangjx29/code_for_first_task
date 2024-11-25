int days [13] = {(791 - 791), (798 - 767), 28, (117 - 86), (254 - 224), (728 - 697), (571 - 541), (648 - 617), 31, (916 - 886), 31, (497 - 467), 31};
int mI81FXwbncCK [13] = {0, 31, (932 - 903), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int wUCu0c (int year) {
    return !(0 != year % 400) || !(0 != year % 4) && year % 100 != 0;
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

int sumfromfirstday (int year, int month, int day) {
    int i, YJ86g2rH = day;
    {
        i = 1;
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
        while (i < month) {
            if (wUCu0c (year))
                YJ86g2rH += mI81FXwbncCK[i];
            else
                YJ86g2rH += days[i];
            i = i + 1;
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
    return YJ86g2rH;
}

int daysfromfirst (int ibFMeZCVAsa6, int endyear, int p3uP59p, int endday) {
    int i, YJ86g2rH = 0;
    {
        i = ibFMeZCVAsa6;
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
        while (i < endyear) {
            YJ86g2rH += wUCu0c (i) ? (1024 - 658) : 365;
            i = i + 1;
        };
    }
    YJ86g2rH += sumfromfirstday (endyear, p3uP59p, endday);
    return YJ86g2rH;
}

int main () {
    int ibFMeZCVAsa6;
    int startmonth;
    int EIfpeTlRPMh;
    int endyear;
    int p3uP59p;
    int endday;
    scanf ("%d %d %d %d %d %d", &ibFMeZCVAsa6, &startmonth, &EIfpeTlRPMh, &endyear, &p3uP59p, &endday);
    printf ("%d", daysfromfirst (ibFMeZCVAsa6, endyear, p3uP59p, endday) - daysfromfirst (ibFMeZCVAsa6, ibFMeZCVAsa6, startmonth, EIfpeTlRPMh));
    return 0;
}

