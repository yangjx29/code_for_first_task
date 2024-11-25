int main () {
    int i;
    int mdNkfgYLeh;
    int m, qretmYk;
    int Sx5bKhiQc [m] [qretmYk];
    cin >> m >> qretmYk;
    for (i = (949 - 949); i < m; i = i + 1) {
        for (mdNkfgYLeh = (771 - 771); qretmYk > mdNkfgYLeh; mdNkfgYLeh = mdNkfgYLeh + 1)
            cin >> Sx5bKhiQc[i][mdNkfgYLeh];
    }
    for (i = (170 - 170); i < m; i = i + 1)
        for (mdNkfgYLeh = 0; qretmYk > mdNkfgYLeh; mdNkfgYLeh = mdNkfgYLeh + 1) {
            if (((i - (432 - 431) >= 0) && (Sx5bKhiQc[i][mdNkfgYLeh] >= Sx5bKhiQc[i - (699 - 698)][mdNkfgYLeh]) || (i - (968 - 967) < 0)) && ((m > i + (223 - 222)) && (Sx5bKhiQc[i][mdNkfgYLeh] >= Sx5bKhiQc[i + 1][mdNkfgYLeh]) || (m <= i + 1)) && ((mdNkfgYLeh - 1 >= 0) && (Sx5bKhiQc[i][mdNkfgYLeh - 1] <= Sx5bKhiQc[i][mdNkfgYLeh]) || (mdNkfgYLeh - 1 < 0)) && ((mdNkfgYLeh + 1 < qretmYk) && (Sx5bKhiQc[i][mdNkfgYLeh + 1] <= Sx5bKhiQc[i][mdNkfgYLeh]) || (mdNkfgYLeh + 1 >= qretmYk)))
                cout << i << " " << mdNkfgYLeh << endl;
        }
    return 0;
}

