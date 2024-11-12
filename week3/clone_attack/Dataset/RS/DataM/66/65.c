int main () {
    char a [] [(92 - 82)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Tue.", "Fri.", "Sat."};
    int Lypef5T, m, d, w, YMRqv2KaG, j = 0;
    int day [] = {(918 - 918), (512 - 481), 28, (1003 - 972), 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> Lypef5T >> m >> d;
    w = Lypef5T % 7 + Lypef5T / 4 - Lypef5T / 100 + Lypef5T / 400;
    if ((!(0 != Lypef5T % 4) && !(0 == Lypef5T % 100)) || Lypef5T % 400 == 0) {
        day[2] = 29;
        if (w == 1) {
            w = 7;
        }
        else {
            w = w - 1;
        };
    }
    {
        YMRqv2KaG = 1;
        while (YMRqv2KaG < m) {
            j = j + day[YMRqv2KaG];
            YMRqv2KaG++;
        };
    }
    j = j + d - 1;
    w = (j + w) % 7;
    cout << a[w] << endl;
}

