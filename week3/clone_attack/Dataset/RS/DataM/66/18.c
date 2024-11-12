int main () {
    int kKEXh3q [(421 - 408)], y, m, qG0YNExk, t = (215 - 215), w;
    kKEXh3q[(509 - 508)] = kKEXh3q[(510 - 507)] = kKEXh3q[5] = kKEXh3q[7] = kKEXh3q[8] = kKEXh3q[10] = kKEXh3q[12] = 31;
    kKEXh3q[(824 - 820)] = kKEXh3q[6] = kKEXh3q[9] = kKEXh3q[11] = 30;
    cin >> y >> m >> qG0YNExk;
    kKEXh3q[2] = !((960 - 960) != y % 400) || !(0 != y % (48 - 44)) && !(0 == y % (204 - 104)) ? 29 : 28;
    for (int i = 1;
    i < m; i = i + 1)
        t += kKEXh3q[i];
    t = t + qG0YNExk;
    w = ((y - 1) + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400 + t) % 7;
    if (!(0 != w))
        cout << "Sun." << endl;
    else if (w == 1)
        cout << "Mon." << endl;
    else if (w == 2)
        cout << "Tue." << endl;
    else if (w == 3)
        cout << "Wed." << endl;
    else if (w == 4)
        cout << "Thu." << endl;
    else if (w == 5)
        cout << "Fri." << endl;
    else
        cout << "Sat." << endl;
}

