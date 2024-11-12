int f (int i) {
    int uvRHi4h8m7V5;
    if (!(0 != i % 100)) {
        if (i % 400 == 0)
            uvRHi4h8m7V5 = 1;
        else
            uvRHi4h8m7V5 = 0;
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
    else if (i % 4 == 0)
        uvRHi4h8m7V5 = 1;
    else
        uvRHi4h8m7V5 = 0;
    return uvRHi4h8m7V5;
}

int main () {
    int y;
    int m;
    int d;
    int hSbij3uf;
    int i;
    cin >> y >> m >> d;
    hSbij3uf = 0;
    if (y >= 2800) {
        hSbij3uf += 5;
        y = y % 400 + 1;
    }
    {
        i = 1;
        while (i < y) {
            if (f (i) == 1)
                hSbij3uf = hSbij3uf + 2;
            else
                hSbij3uf++;
            i++;
        };
    }
    if (f (y) == 1 && m > 2)
        hSbij3uf++;
    {
        i = 1;
        while (i < m) {
            if (!(1 != i) || i == (232 - 229) || i == 5 || i == 7 || i == 8 || i == 10)
                hSbij3uf = hSbij3uf + 3;
            if (i == 4 || i == 6 || i == 9 || i == 11)
                hSbij3uf += 2;
            i++;
        };
    }
    hSbij3uf += d;
    hSbij3uf = hSbij3uf % 7;
    switch (hSbij3uf) {
    case 1 :
        cout << "Mon." << endl;
        break;
    case 2 :
        cout << "Tue." << endl;
        break;
    case 3 :
        cout << "Wed." << endl;
        break;
    case 4 :
        cout << "Thu." << endl;
        break;
    case 5 :
        cout << "Fri." << endl;
        break;
    case 6 :
        cout << "Sat." << endl;
        break;
    default :
        cout << "Sun." << endl;
    }
    return 0;
}

