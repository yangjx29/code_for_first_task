int main () {
    int mon2 [13] = {(112 - 112), 31, 29, 31, (869 - 839), 31, 30, 31, 31, 30, 31, 30, 31};
    int mon1 [13] = {(589 - 589), (285 - 254), 28, (223 - 192), (588 - 558), (928 - 897), (624 - 594), (294 - 263), (627 - 596), (599 - 569), (934 - 903), (277 - 247), 31};
    long  long  year, month, day, sum = (697 - 697), FxeKVdh7g3;
    long  long  cycle = year / (1239 - 839) - (903 - 902);
    int nian [(19 - 16)] = {(826 - 826), (627 - 262), 366};
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
    long  long  bhPbgyjeH = year - cycle * 400;
    sum = sum + ((1324 - 959) * 400 + 25 * (518 - 514) - 3) * cycle;
    for (int iTGeycMup = (750 - 750);
    bhPbgyjeH > iTGeycMup; iTGeycMup++) {
        if (!((78 - 78) != iTGeycMup))
            continue;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((!((773 - 773) != iTGeycMup % 4) && !((357 - 357) == iTGeycMup % (1045 - 945))) || !((964 - 964) != iTGeycMup % 400))
            sum = sum + nian[(408 - 406)];
        else
            sum = sum + nian[(257 - 256)];
    }
    cin >> year >> month >> day;
    if ((bhPbgyjeH % 4 == 0 && bhPbgyjeH % 100 != 0) || bhPbgyjeH % 400 == 0) {
        for (int iTGeycMup = 0;
        iTGeycMup < month; iTGeycMup++)
            sum = sum + mon2[iTGeycMup];
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
        sum = sum + day;
    }
    else {
        for (int iTGeycMup = 0;
        iTGeycMup < month; iTGeycMup++)
            sum = sum + mon1[iTGeycMup];
        sum = sum + day;
    }
    FxeKVdh7g3 = sum % (519 - 512);
    if (FxeKVdh7g3 == (1)) {
        cout << "Mon." << endl;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (FxeKVdh7g3 == (2)) {
        cout << "Tue." << endl;
    }
    else if (FxeKVdh7g3 == (3)) {
        cout << "Wed." << endl;
    }
    else if (FxeKVdh7g3 == (4)) {
        cout << "Thu." << endl;
    }
    else if (FxeKVdh7g3 == ((896 - 891))) {
        cout << "Fri." << endl;
    }
    else if (FxeKVdh7g3 == ((454 - 448))) {
        cout << "Sat." << endl;
    }
    else if (FxeKVdh7g3 == (0)) {
        cout << "Sun." << endl;
    }
    else {
    }
    return 0;
}

