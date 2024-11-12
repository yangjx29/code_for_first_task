int main () {
    int zOn1zwr;
    int V85dV7HkxiJ;
    int ZT97gi4fL01;
    int YuqdOBam2 [32] = {1};
    int emY9Q7lJUzh [32];
    cin >> zOn1zwr;
    {
        V85dV7HkxiJ = 1;
        while (V85dV7HkxiJ <= zOn1zwr) {
            V85dV7HkxiJ = V85dV7HkxiJ +1;
            {
                ZT97gi4fL01 = 0;
                while (ZT97gi4fL01 < 32) {
                    emY9Q7lJUzh[ZT97gi4fL01] = YuqdOBam2[ZT97gi4fL01] * 2;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    ZT97gi4fL01 = ZT97gi4fL01 +1;
                };
            }
            YuqdOBam2[0] = emY9Q7lJUzh[0] % 10;
            {
                ZT97gi4fL01 = 1;
                while (ZT97gi4fL01 < 32) {
                    YuqdOBam2[ZT97gi4fL01] = emY9Q7lJUzh[ZT97gi4fL01] % 10 + emY9Q7lJUzh[ZT97gi4fL01 -1] / 10;
                    ZT97gi4fL01 = ZT97gi4fL01 +1;
                };
            };
        };
    }
    ZT97gi4fL01 = 31;
    while (YuqdOBam2[ZT97gi4fL01] == 0) {
        ZT97gi4fL01 = ZT97gi4fL01 -1;
    }
    {
        V85dV7HkxiJ = ZT97gi4fL01;
        while (V85dV7HkxiJ >= 0) {
            cout << YuqdOBam2[V85dV7HkxiJ];
            V85dV7HkxiJ = V85dV7HkxiJ -1;
        };
    }
    return 0;
}

