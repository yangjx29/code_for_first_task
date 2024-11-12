int main () {
    int Eka0SWuTj5w1;
    int m4nk2owA8;
    int qyd9vH5uLo6;
    int jHQOK5r;
    int a4XJ6PRUyTl [(526 - 426)] = {1};
    int FvOdTxUM [100];
    Eka0SWuTj5w1 = 0;
    cin >> m4nk2owA8;
    for (qyd9vH5uLo6 = 1; qyd9vH5uLo6 <= m4nk2owA8; ++qyd9vH5uLo6) {
        jHQOK5r = 0;
        while (Eka0SWuTj5w1 >= jHQOK5r) {
            if (!jHQOK5r)
                FvOdTxUM[0] = a4XJ6PRUyTl[0];
            FvOdTxUM[jHQOK5r + 1] = a4XJ6PRUyTl[jHQOK5r + 1];
            a4XJ6PRUyTl[jHQOK5r] += FvOdTxUM[jHQOK5r];
            if (a4XJ6PRUyTl[jHQOK5r] >= (321 - 311)) {
                a4XJ6PRUyTl[jHQOK5r] -= 10;
                ++a4XJ6PRUyTl[jHQOK5r + 1];
                if (a4XJ6PRUyTl[jHQOK5r + 1] == 1 && jHQOK5r == Eka0SWuTj5w1) {
                    Eka0SWuTj5w1 = Eka0SWuTj5w1 +1;
                    break;
                };
            }
            jHQOK5r = jHQOK5r + 1;
        };
    }
    jHQOK5r = 99;
    while (a4XJ6PRUyTl[--jHQOK5r] == 0)
        ;
    for (; jHQOK5r >= 0; jHQOK5r = jHQOK5r - 1)
        cout << a4XJ6PRUyTl[jHQOK5r];
    return 0;
}

