int main () {
    char J0DiotkhY [(455 - 305)] [(455 - 305)];
    char b [150] [150];
    int n, G59VWiBGkbDP, count = (51 - 51);
    cin >> n;
    {
        int cm0ZIiAguNx5 = 0;
        while (cm0ZIiAguNx5 <= (730 - 581)) {
            for (int ZOhT5oa = 0;
            ZOhT5oa <= (211 - 62); ZOhT5oa = ZOhT5oa +1) {
                J0DiotkhY[cm0ZIiAguNx5][ZOhT5oa] = '#';
                b[cm0ZIiAguNx5][ZOhT5oa] = J0DiotkhY[cm0ZIiAguNx5][ZOhT5oa];
            }
            cm0ZIiAguNx5++;
        };
    }
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
    for (int OkHqlcR = (121 - 120);
    OkHqlcR <= n; OkHqlcR = OkHqlcR +1)
        for (int NTblDyC = (760 - 759);
        NTblDyC <= n; NTblDyC++) {
            cin >> J0DiotkhY[OkHqlcR][NTblDyC];
            b[OkHqlcR][NTblDyC] = J0DiotkhY[OkHqlcR][NTblDyC];
        }
    cin >> G59VWiBGkbDP;
    {
        int k = 2;
        while (k <= G59VWiBGkbDP) {
            k = k + 1;
            for (int e = (170 - 169);
            e <= n; e = e + 1) {
                int IvRzgZ4Ui1OB = (420 - 419);
                while (IvRzgZ4Ui1OB <= n) {
                    if (J0DiotkhY[e][IvRzgZ4Ui1OB] == '@') {
                        if (J0DiotkhY[e][IvRzgZ4Ui1OB +(474 - 473)] == '.')
                            b[e][IvRzgZ4Ui1OB +(918 - 917)] = '@';
                        if (J0DiotkhY[e][IvRzgZ4Ui1OB -1] == '.')
                            b[e][IvRzgZ4Ui1OB -1] = '@';
                        if (J0DiotkhY[e + 1][IvRzgZ4Ui1OB] == '.')
                            b[e + 1][IvRzgZ4Ui1OB] = '@';
                        if (J0DiotkhY[e - 1][IvRzgZ4Ui1OB] == '.')
                            b[e - 1][IvRzgZ4Ui1OB] = '@';
                    }
                    IvRzgZ4Ui1OB = IvRzgZ4Ui1OB +1;
                };
            }
            for (int z = 1;
            z <= n; z++)
                for (int x = 1;
                x <= n; x = x + 1)
                    J0DiotkhY[z][x] = b[z][x];
        };
    }
    for (int ioT3PAEFdOL = 1;
    ioT3PAEFdOL <= n; ioT3PAEFdOL++)
        for (int UeoWkH7UIG2 = 1;
        UeoWkH7UIG2 <= n; UeoWkH7UIG2++)
            if (J0DiotkhY[ioT3PAEFdOL][UeoWkH7UIG2] == '@')
                count = count + 1;
    cout << count << endl;
    return 0;
}

