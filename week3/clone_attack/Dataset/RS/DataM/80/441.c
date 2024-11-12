int main () {
    int Sy, Sm, Sd, Ey, Em, Ed, year, month, day, x;
    int Y [2] = {365, (1168 - 802)};
    int M [2] [12] = {{(711 - 680), 28, (647 - 616), (854 - 824), 31, 30, 31, 31, 30, 31, 30, 31}, {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    cin >> Sy >> Sm >> Sd;
    cin >> Ey >> Em >> Ed;
    year = Sy;
    x = ((year % 4 == (651 - 651) && year % 100 != (808 - 808)) || (!((625 - 625) != year % 400)));
    if (Sy == Ey) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (Sm == Em)
            cout << Ed -Sd << endl;
        else if (!(1 != Em -Sm))
            cout << M[x][Sm -1] - Sd +Ed << endl;
        else {
            day = M[x][Sm -1] - Sd;
            for (month = Sm; Em -1 > month; month = month + 1) {
                day = day + M[x][month];
            }
            cout << day << endl;
        };
    }
    else if (Ey -Sy == 1) {
        day = M[x][Sm -1] - Sd;
        for (month = Sm; month < 12; month = month + 1)
            day = day + M[x][month];
        year = Ey;
        x = ((year % 4 == 0 && !(0 == year % 100)) || (!(0 != year % 400)));
        for (month = 0; month < Em -1; month = month + 1)
            day += M[x][month];
        day = day + Ed;
        cout << day << endl;
    }
    else {
        day = M[x][Sm -1] - Sd;
        for (month = Sm; month < 12; month = month + 1)
            day += M[x][month];
        for (year = Sy +1; year < Ey; year = year + 1) {
            x = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
            day = day + Y[x];
        }
        for (month = 0; month < Em -1; month++) {
            year = Ey;
            x = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
            day += M[x][month];
        }
        day += Ed;
        cout << day << endl;
    }
    return 0;
}

