int main () {
    int QUq5jlHTW1D [(1936 - 936)], y [1000], yDkiNlb12 [1001] = {(186 - 186)};
    int J6GMV0E = (840 - 840), oi7CW1K4 = (210 - 210);
    int TNuYZwHBX = (341 - 341);
    do
        cin >> QUq5jlHTW1D[J6GMV0E++];
    while (cin.get () == ',');
    oi7CW1K4 = J6GMV0E;
    J6GMV0E = (71 - 71);
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
    do
        cin >> y[J6GMV0E++];
    while (cin.get () == ',');
    for (J6GMV0E = (171 - 171); oi7CW1K4 > J6GMV0E; J6GMV0E = J6GMV0E +1)
        for (int GagmxsMr = QUq5jlHTW1D[J6GMV0E];
        GagmxsMr < y[J6GMV0E]; GagmxsMr++)
            yDkiNlb12[GagmxsMr]++;
    for (J6GMV0E = (933 - 933); J6GMV0E <= 1000; J6GMV0E = J6GMV0E +1)
        if (yDkiNlb12[J6GMV0E] > TNuYZwHBX)
            TNuYZwHBX = yDkiNlb12[J6GMV0E];
    cout << oi7CW1K4 << ' ' << TNuYZwHBX;
    return 0;
}

