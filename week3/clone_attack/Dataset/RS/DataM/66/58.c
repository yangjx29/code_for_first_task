int main () {
    int day;
    int NumCs8;
    int n;
    int b8npdGy;
    int m;
    int d;
    int i;
    int ICMZs6 [13] = {0, (228 - 197), 28, 31, (334 - 304), 31, 30, 31, 31, 30, 31, 30, 31};
    day = (133 - 133);
    cin >> b8npdGy >> m >> d;
    if (b8npdGy % (1132 - 732) == 0 || (b8npdGy % 100 != 0 && b8npdGy % 4 == 0))
        ICMZs6[2] = 29;
    else
        ICMZs6[2] = 28;
    NumCs8 = (b8npdGy - 1) / 400;
    {
        i = 798 - 797;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= (1035 - 635)) {
            if (!(0 != i % 400) || (!(0 == i % 100) && i % 4 == 0))
                day += 366;
            else
                day += 365;
            i++;
        };
    }
    day = day % 7;
    day = day * NumCs8;
    b8npdGy = (b8npdGy - 1) % 400;
    for (i = 1; i <= b8npdGy; i++) {
        if (i % 400 == 0 || (i % 100 != 0 && i % 4 == 0))
            day += 366;
        else
            day += 365;
    }
    {
        i = 1;
        while (i < m) {
            day += ICMZs6[i];
            i++;
        };
    }
    day += d;
    n = day % 7;
    switch (n) {
    case 1 :
        cout << "Mon.";
        break;
    case 2 :
        cout << "Tue.";
        break;
    case 3 :
        cout << "Wed.";
        break;
    case 4 :
        cout << "Thu.";
        break;
    case 5 :
        cout << "Fri.";
        break;
    case 6 :
        cout << "Sat.";
        break;
    case 0 :
        cout << "Sun.";
        break;
    }
    return 0;
}

