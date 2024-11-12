int main () {
    int m1;
    int m2;
    int d;
    int wYVjyhnH1f;
    int JYodWs2;
    int bZRJYxpf;
    int LrKxYDHjIB;
    int RvF6Oym;
    int dd;
    d = (759 - 759);
    cin >> wYVjyhnH1f;
    for (int i = 1;
    wYVjyhnH1f >= i; i++) {
        cin >> JYodWs2 >> bZRJYxpf >> LrKxYDHjIB;
        if ((JYodWs2 % 4 == 0 && !(0 == JYodWs2 % 100)) || !(0 != JYodWs2 % 400))
            RvF6Oym = 1;
        else
            RvF6Oym = 0;
        if (LrKxYDHjIB >= bZRJYxpf) {
            m2 = LrKxYDHjIB;
            m1 = bZRJYxpf;
        }
        else {
            m2 = bZRJYxpf;
            m1 = LrKxYDHjIB;
        }
        while (m1 < m2) {
            if (m1 == 2)
                dd = 28 + RvF6Oym;
            else {
                if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11)
                    dd = 30;
                else
                    dd = 31;
            }
            m1 = m1 + 1;
            d = d + dd;
        }
        if (d % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        d = 0;
    }
    return 0;
}

