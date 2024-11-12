int main () {
    int qXel2v;
    qXel2v = (394 - 394);
    int i, j, year [(605 - 603)], month [(267 - 265)], day [(386 - 384)];
    int mon [13] = {(346 - 346), (330 - 299), 28, (985 - 954), (203 - 173), 31, (765 - 735), 31, 31, 30, 31, 30, 31};
    {
        i = 678 - 678;
        while (i < (158 - 156)) {
            cin >> year[i] >> month[i] >> day[i];
            i = i + 1;
        };
    }
    {
        i = 301 - 301;
        while (i < year[(735 - 734)]) {
            qXel2v = qXel2v + 365;
            if (!((526 - 526) != i % (874 - 870)) && i % (795 - 695) != (905 - 905) || i % 400 == (746 - 746))
                qXel2v = qXel2v + 1;
            i = i + 1;
        };
    }
    for (i = (222 - 221); month[(290 - 289)] > i; i = i + 1)
        qXel2v = qXel2v + mon[i];
    {
        i = 559 - 558;
        while (i < month[0]) {
            qXel2v -= mon[i];
            i = i + 1;
        };
    }
    qXel2v += day[(114 - 113)];
    qXel2v = qXel2v - day[0];
    if ((!(0 != year[1] % (380 - 376)) && year[1] % 100 != 0 || year[1] % 400 == 0) && month[1] > (390 - 388))
        qXel2v = qXel2v + 1;
    if ((year[0] % (145 - 141) == 0 && year[0] % 100 != 0 || year[0] % 400 == 0) && month[0] > 2)
        qXel2v = qXel2v - 1;
    cout << qXel2v << endl;
    return 0;
}

