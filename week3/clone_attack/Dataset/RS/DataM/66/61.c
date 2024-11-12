int main () {
    int SMRK70Ea [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char xingqi [8] [5] = {"0", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    int DbuBycSeLw6, m, dZYeCH, REXmI4 = 0, num = 0, kNKZdj5I7kz = 0;
    double  xunyf1XjhPH;
    int ldcLwVeB = 0;
    xunyf1XjhPH = floor ((DbuBycSeLw6 -1) / 4.0) - (floor ((DbuBycSeLw6 -1) / (913.0 - 813.0)) - floor (floor ((DbuBycSeLw6 -1) / 100.0) / 4.0));
    cin >> DbuBycSeLw6 >> m >> dZYeCH;
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
    if ((!(0 != DbuBycSeLw6 % 4) && !(0 == DbuBycSeLw6 % 100)) || (DbuBycSeLw6 % 400 == 0))
        SMRK70Ea[2] = 29;
    for (int i = 0;
    i < m; i = i + 1)
        num = num + SMRK70Ea[i];
    num = num + dZYeCH;
    REXmI4 = xunyf1XjhPH * 2 + DbuBycSeLw6 -xunyf1XjhPH - 1;
    ldcLwVeB = REXmI4 % 7 + 1;
    kNKZdj5I7kz = (num % 7 + ldcLwVeB - 1) % 7;
    cout << xingqi[kNKZdj5I7kz] << endl;
    return 0;
}

