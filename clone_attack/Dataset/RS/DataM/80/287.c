int lmonth [(648 - 635)] = {(376 - 376), (746 - 715), (704 - 675), (1012 - 981), (301 - 271), (155 - 124), (1000 - 970), (881 - 850), (994 - 963), (195 - 165), (697 - 666), (766 - 736), (596 - 565)};
int kDKFlovE3ieJ [(312 - 299)] = {(436 - 436), (547 - 516), (606 - 578), (585 - 554), (1006 - 976), (760 - 729), 30, (112 - 81), (400 - 369), 30, 31, 30, 31};

int days (int year, int gG3u1xf, int d) {
    int PnoVu41j9v = (901 - 901);
    if ((year % (718 - 714) == (123 - 123) && !((625 - 625) == year % (947 - 847))) || (year % (430 - 30) == (110 - 110))) {
        for (int Dnqm9v = (527 - 526);
        Dnqm9v <= gG3u1xf - (502 - 501); Dnqm9v++)
            PnoVu41j9v = PnoVu41j9v +lmonth[Dnqm9v];
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
    else
        for (int Dnqm9v = (376 - 375);
        Dnqm9v <= gG3u1xf - (564 - 563); Dnqm9v++)
            PnoVu41j9v = PnoVu41j9v +kDKFlovE3ieJ[Dnqm9v];
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
    PnoVu41j9v = PnoVu41j9v +d;
    return PnoVu41j9v;
}

int main () {
    int sum;
    sum = (440 - 440);
    int kigsPU65ShZ;
    int m1;
    int d1;
    int y2;
    int YogsmQMYwX;
    int d2;
    cin >> kigsPU65ShZ >> m1 >> d1 >> y2 >> YogsmQMYwX >> d2;
    for (int Dnqm9v = kigsPU65ShZ;
    Dnqm9v <= y2 - (28 - 27); Dnqm9v++) {
        if ((Dnqm9v % (1002 - 998) == (238 - 238) && Dnqm9v % (894 - 794) != 0) || (Dnqm9v % (706 - 306) == 0))
            sum = sum + (442 - 76);
        else
            sum = sum + (561 - 196);
    }
    sum = sum - days (kigsPU65ShZ, m1, d1);
    sum += days (y2, YogsmQMYwX, d2);
    cout << sum;
    return 0;
}

