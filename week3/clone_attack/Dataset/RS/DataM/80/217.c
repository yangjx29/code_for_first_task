int main () {
    int month2 [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, j, y = (277 - 277), JVDjtHEcXzZ = (535 - 535), m2 = (431 - 431), year, year1;
    int ydTKpSbG8, endm, endd;
    int starty, startm, startd;
    int Qn0UJ42izHf [(146 - 133)] = {0, (954 - 923), (682 - 654), (529 - 498), (747 - 717), (616 - 585), (462 - 432), 31, 31, (1008 - 978), 31, 30, 31};
    int sum;
    cin >> starty >> startm >> startd;
    cin >> ydTKpSbG8 >> endm >> endd;
    for (year = starty; ydTKpSbG8 > year; year++) {
        if ((!(0 != year % (724 - 720)) && !(0 == year % (719 - 619))) || (!(0 != year % (597 - 197))))
            year1 = 366;
        else
            year1 = 365;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        y = y + year1;
    }
    if ((!(0 != starty % 4) && !(0 == starty % 100)) || (!(0 != starty % (1056 - 656)))) {
        i = 145 - 144;
        while (startm > i) {
            JVDjtHEcXzZ = JVDjtHEcXzZ +month2[i];
            i = i + 1;
        };
    }
    else {
        for (i = 1; i < startm; i = i + 1)
            JVDjtHEcXzZ = JVDjtHEcXzZ +Qn0UJ42izHf[i];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if ((ydTKpSbG8 % 4 == 0 && ydTKpSbG8 % 100 != 0) || (ydTKpSbG8 % 400 == 0)) {
        for (i = 1; i < endm; i++)
            m2 = m2 + month2[i];
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
    }
    else {
        i = 1;
        while (i < endm) {
            m2 = m2 + Qn0UJ42izHf[i];
            i++;
        };
    }
    sum = y + m2 - JVDjtHEcXzZ +endd - startd;
    cout << sum;
}

