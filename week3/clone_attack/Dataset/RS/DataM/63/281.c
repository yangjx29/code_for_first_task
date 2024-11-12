int main () {
    int CAjWtK9do;
    CAjWtK9do = 0;
    int x1;
    int zR8Up9NY3vD4;
    int x2;
    int y2;
    x1 = (977 - 977);
    zR8Up9NY3vD4 = (176 - 176);
    x2 = (863 - 863);
    y2 = (385 - 385);
    int o48kla6gEcR [(797 - 697)] [(733 - 633)];
    int uy2fkU [100] [100];
    int DaPegkuHWRfO [100] [100] = {(716 - 716)};
    int R8pS2f4UjYn;
    int VC6rve0xdRE4;
    R8pS2f4UjYn = 0;
    VC6rve0xdRE4 = 0;
    cin >> x1 >> zR8Up9NY3vD4;
    {
        R8pS2f4UjYn = 0;
        while (R8pS2f4UjYn < x1) {
            {
                VC6rve0xdRE4 = 0;
                while (zR8Up9NY3vD4 > VC6rve0xdRE4) {
                    cin >> o48kla6gEcR[R8pS2f4UjYn][VC6rve0xdRE4];
                    VC6rve0xdRE4 = VC6rve0xdRE4 +1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            R8pS2f4UjYn++;
        };
    }
    cin >> x2 >> y2;
    for (R8pS2f4UjYn = 0; x2 > R8pS2f4UjYn; R8pS2f4UjYn++) {
        for (VC6rve0xdRE4 = 0; y2 > VC6rve0xdRE4; VC6rve0xdRE4 = VC6rve0xdRE4 +1)
            cin >> uy2fkU[R8pS2f4UjYn][VC6rve0xdRE4];
    }
    for (R8pS2f4UjYn = 0; R8pS2f4UjYn < x1; R8pS2f4UjYn++) {
        for (VC6rve0xdRE4 = 0; y2 > VC6rve0xdRE4; VC6rve0xdRE4 = VC6rve0xdRE4 +1) {
            for (CAjWtK9do = 0; CAjWtK9do < x2; CAjWtK9do = CAjWtK9do +1)
                DaPegkuHWRfO[R8pS2f4UjYn][VC6rve0xdRE4] = DaPegkuHWRfO[R8pS2f4UjYn][VC6rve0xdRE4] + o48kla6gEcR[R8pS2f4UjYn][CAjWtK9do] * uy2fkU[CAjWtK9do][VC6rve0xdRE4];
        };
    }
    {
        R8pS2f4UjYn = 0;
        while (R8pS2f4UjYn < x1) {
            for (VC6rve0xdRE4 = 0; y2 - (484 - 483) > VC6rve0xdRE4; VC6rve0xdRE4++)
                cout << DaPegkuHWRfO[R8pS2f4UjYn][VC6rve0xdRE4] << " ";
            cout << DaPegkuHWRfO[R8pS2f4UjYn][y2 - 1];
            R8pS2f4UjYn++;
            cout << endl;
        };
    }
    return 0;
}

