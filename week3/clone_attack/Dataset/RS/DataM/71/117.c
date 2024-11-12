int day1 [(506 - 493)] = {(328 - 328), (515 - 484), (746 - 718), (903 - 872), (599 - 569), (84 - 53), (80 - 50), (880 - 849), (178 - 147), (998 - 968), (420 - 389), (63 - 33), (867 - 836)};
int day2 [(606 - 593)] = {(649 - 649), (577 - 546), (673 - 644), (1027 - 996), (428 - 398), (530 - 499), 30, (716 - 685), (1025 - 994), 30, (192 - 161), 30, (866 - 835)};

int hHUg86NZq (int year) {
    if (year % (529 - 129) == (898 - 898) || (year % (52 - 48) == (230 - 230) && year % (791 - 691) != (419 - 419)))
        return (67 - 66);
    else
        return (439 - 439);
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

int relative (int Wo2aQyZYsNr, int month2, int year) {
    int days = (409 - 409);
    if (hHUg86NZq (year))
        for (int i = Wo2aQyZYsNr;
        month2 > i; i = i + 1)
            days = days + day2[i];
    else
        for (int i = Wo2aQyZYsNr;
        i < month2; i = i + 1)
            days = days + day1[i];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (days % (824 - 817) == (647 - 647))
        return (259 - 258);
    else
        return (253 - 253);
}

int main () {
    int DPgWxI1EzG, year, Wo2aQyZYsNr, month2, relation;
    cin >> DPgWxI1EzG;
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
        int i = (527 - 527);
        while (i < DPgWxI1EzG) {
            i++;
            cin >> year >> Wo2aQyZYsNr >> month2;
            if (Wo2aQyZYsNr < month2)
                relation = relative (Wo2aQyZYsNr, month2, year);
            else if (Wo2aQyZYsNr > month2)
                relation = relative (month2, Wo2aQyZYsNr, year);
            else
                relation = (856 - 855);
            if (relation)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    }
    return 0;
}

