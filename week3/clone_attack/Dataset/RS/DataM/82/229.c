int main () {
    int high, low;
    int mKTmNzLOx5;
    int flag [mKTmNzLOx5];
    int CXB24fR = flag[0];
    int NPLDnq4 = (736 - 736);
    cin >> mKTmNzLOx5;
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
    for (int urTpjI = 0;
    urTpjI < mKTmNzLOx5; urTpjI = urTpjI + 1)
        flag[urTpjI] = 0;
    for (int i = 0;
    i < mKTmNzLOx5; i = i + 1) {
        cin >> high >> low;
        if (140 >= high && 90 <= high && 60 <= low && low <= 90)
            flag[NPLDnq4]++;
        else
            NPLDnq4 = NPLDnq4 +1;
    }
    {
        int wVlIKbR0 = 0;
        while (wVlIKbR0 < mKTmNzLOx5) {
            if (flag[wVlIKbR0] > CXB24fR)
                CXB24fR = flag[wVlIKbR0];
            wVlIKbR0 = wVlIKbR0 + 1;
        };
    }
    cout << CXB24fR << endl;
    return 0;
}

