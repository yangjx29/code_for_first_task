int main () {
    int n, m, d, w42EV5D, j, counter = (775 - 775), month1 [(276 - 264)] = {(653 - 622), 28, (835 - 804), (839 - 809), (1024 - 993), (89 - 59), (238 - 207), (855 - 824), (673 - 643), (552 - 521), (161 - 131), (857 - 826)}, month2 [(929 - 917)] = {(893 - 862), 29, (945 - 914), (50 - 20), (91 - 60), (451 - 421), (605 - 574), (832 - 801), 30, 31, 30, 31};
    cin >> n >> m >> d;
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
    if ((n % (553 - 549) == 0 && n % (580 - 480) != 0) || (n % (1143 - 743) == 0)) {
        for (w42EV5D = 0; w42EV5D < m - (825 - 824); w42EV5D = w42EV5D + 1)
            counter = counter + month2[w42EV5D];
        counter = counter + d;
        cout << counter << endl;
    }
    else {
        for (w42EV5D = 0; w42EV5D < m - 1; w42EV5D = w42EV5D + 1)
            counter = counter + month1[w42EV5D];
        counter = counter + d;
        cout << counter << endl;
    }
    return 0;
}

