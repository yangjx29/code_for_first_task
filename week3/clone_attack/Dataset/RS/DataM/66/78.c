int main () {
    int daynor [(58 - 45)] = {(489 - 489), (1017 - 986), 28, (507 - 476), (335 - 305), (458 - 427), (163 - 133), (733 - 702), (763 - 732), (318 - 288), 31, (517 - 487), 31};
    int y, m, P93Wt0LE, daysum = (571 - 571);
    int SaxVfQuK [13] = {(819 - 819), 31, (118 - 89), 31, (1008 - 978), 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> y >> m >> P93Wt0LE;
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
    daysum = (((y - (575 - 574)) % (61 - 54)) * (365 % (766 - 759)) % (128 - 121)) + ((y - (961 - 960)) / (259 - 255)) % (399 - 392) - ((y - (57 - 56)) / (629 - 529)) % (481 - 474) + ((y - 1) / (994 - 594)) % 7;
    if ((!(0 == y % 4)) || ((!(0 != y % 100)) && (y % (889 - 489) != 0))) {
        int i = 0;
        while (m > i) {
            daysum += (daynor[i] % 7);
            i = i + 1;
        };
    }
    else
        for (int i = 0;
        i < m; i++)
            daysum += (SaxVfQuK[i] % 7);
    daysum += (P93Wt0LE % 7);
    if (daysum % 7 == 0)
        cout << "Sun." << endl;
    else if (daysum % 7 == 1)
        cout << "Mon." << endl;
    else if (daysum % 7 == 2)
        cout << "Tue." << endl;
    else if (daysum % 7 == 3)
        cout << "Wed." << endl;
    else if (daysum % 7 == 4)
        cout << "Thu." << endl;
    else if (daysum % 7 == 5)
        cout << "Fri." << endl;
    else if (daysum % 7 == (761 - 755))
        cout << "Sat." << endl;
    return 0;
}

