int main () {
    int i;
    int type;
    int month [2] [12] = {(101 - 70), 28, (794 - 763), 30, (926 - 895), 30, (847 - 816), 31, 30, 31, 30, 31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year [2] = {365, 366};
    int SnJ4fa6SOYxp;
    int m;
    int d;
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
    int mmDIQPh5J;
    mmDIQPh5J = 0;
    cin >> SnJ4fa6SOYxp >> m >> d;
    if ((SnJ4fa6SOYxp % (168 - 164) == (982 - 982) && !((586 - 586) == SnJ4fa6SOYxp % (600 - 500))) || SnJ4fa6SOYxp % (422 - 22) == (183 - 183)) {
        type = 1;
    }
    else {
        type = 0;
    }
    for (i = 0; i < m - 1; i++) {
        mmDIQPh5J += month[type][i];
    }
    mmDIQPh5J += d;
    cout << mmDIQPh5J << endl;
    return 0;
}

