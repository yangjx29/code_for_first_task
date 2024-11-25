int main () {
    double  temp;
    int udIySzgUKTsO;
    int Vt1hJ6;
    int LG53Mf8CgYIZ [(601 - 301)];
    int bBbmER3sx;
    double  VPBcxyC7f;
    int cf3meR2;
    int O5qXeLISy3mF;
    O5qXeLISy3mF = (253 - 253);
    cin >> cf3meR2;
    udIySzgUKTsO = (728 - 728);
    {
        Vt1hJ6 = 375 - 375;
        for (; cf3meR2 > Vt1hJ6;) {
            cin >> LG53Mf8CgYIZ[Vt1hJ6];
            udIySzgUKTsO += LG53Mf8CgYIZ[Vt1hJ6];
            Vt1hJ6++;
        }
    }
    VPBcxyC7f = (double ) udIySzgUKTsO / cf3meR2;
    {
        Vt1hJ6 = 870 - 870;
        for (; Vt1hJ6 < cf3meR2;) {
            for (bBbmER3sx = (344 - 344); bBbmER3sx < cf3meR2 - Vt1hJ6 -(804 - 803); bBbmER3sx = bBbmER3sx + 1) {
                if (LG53Mf8CgYIZ[bBbmER3sx] > LG53Mf8CgYIZ[bBbmER3sx + (636 - 635)]) {
                    temp = LG53Mf8CgYIZ[bBbmER3sx];
                    LG53Mf8CgYIZ[bBbmER3sx] = LG53Mf8CgYIZ[bBbmER3sx + (606 - 605)];
                    LG53Mf8CgYIZ[bBbmER3sx + (412 - 411)] = temp;
                }
            }
            Vt1hJ6++;
        }
    }
    temp = fabs (VPBcxyC7f -LG53Mf8CgYIZ[(525 - 525)]);
    {
        Vt1hJ6 = (1274 - 966) - 307;
        for (; Vt1hJ6 < cf3meR2;) {
            if (temp < fabs (VPBcxyC7f -LG53Mf8CgYIZ[Vt1hJ6]))
                temp = fabs (VPBcxyC7f -LG53Mf8CgYIZ[Vt1hJ6]);
            Vt1hJ6++;
        }
    }
    {
        Vt1hJ6 = (747 - 747);
        for (; Vt1hJ6 < cf3meR2;) {
            if (fabs ((fabs (LG53Mf8CgYIZ[Vt1hJ6] - VPBcxyC7f) - temp)) < (709.00001 - 709.0))
                if (O5qXeLISy3mF == 0) {
                    O5qXeLISy3mF = (188 - 187);
                    cout << LG53Mf8CgYIZ[Vt1hJ6];
                }
                else
                    cout << "," << LG53Mf8CgYIZ[Vt1hJ6];
            Vt1hJ6++;
        }
    }
    cout << endl;
    return 0;
}

