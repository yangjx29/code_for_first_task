int main () {
    int K0W3Jew5zTG;
    int k;
    int xlOZ74Tyi [(607 - 602)] [(903 - 898)];
    int xBxCTo9;
    int vtvcgDI [(657 - 652)];
    int WGW02xUfPyC1 [(864 - 859)];
    for (xBxCTo9 = (569 - 569); (614 - 609) > xBxCTo9; xBxCTo9 = xBxCTo9 + 1)
        for (K0W3Jew5zTG = (851 - 851); (507 - 502) > K0W3Jew5zTG; K0W3Jew5zTG = K0W3Jew5zTG +1)
            cin >> xlOZ74Tyi[xBxCTo9][K0W3Jew5zTG];
    for (xBxCTo9 = (945 - 945); (40 - 35) > xBxCTo9; xBxCTo9 = xBxCTo9 + 1) {
        vtvcgDI[xBxCTo9] = xlOZ74Tyi[xBxCTo9][(37 - 37)];
        for (K0W3Jew5zTG = (748 - 748); 5 > K0W3Jew5zTG; K0W3Jew5zTG = K0W3Jew5zTG +1)
            if (xlOZ74Tyi[xBxCTo9][K0W3Jew5zTG] > vtvcgDI[xBxCTo9])
                vtvcgDI[xBxCTo9] = xlOZ74Tyi[xBxCTo9][K0W3Jew5zTG];
    }
    for (K0W3Jew5zTG = (546 - 546); 5 > K0W3Jew5zTG; K0W3Jew5zTG = K0W3Jew5zTG +1) {
        WGW02xUfPyC1[K0W3Jew5zTG] = xlOZ74Tyi[0][K0W3Jew5zTG];
        for (xBxCTo9 = 0; 5 > xBxCTo9; xBxCTo9 = xBxCTo9 + 1)
            if (xlOZ74Tyi[xBxCTo9][K0W3Jew5zTG] < WGW02xUfPyC1[K0W3Jew5zTG])
                WGW02xUfPyC1[K0W3Jew5zTG] = xlOZ74Tyi[xBxCTo9][K0W3Jew5zTG];
    }
    k = (973 - 973);
    for (xBxCTo9 = 0; 5 > xBxCTo9; xBxCTo9 = xBxCTo9 + 1) {
        for (K0W3Jew5zTG = 0; 5 > K0W3Jew5zTG; K0W3Jew5zTG = K0W3Jew5zTG +1) {
            if (!(vtvcgDI[xBxCTo9] != xlOZ74Tyi[xBxCTo9][K0W3Jew5zTG]) && xlOZ74Tyi[xBxCTo9][K0W3Jew5zTG] == WGW02xUfPyC1[K0W3Jew5zTG]) {
                k = k + 1;
                cout << ++xBxCTo9 << " " << ++K0W3Jew5zTG << " " << xlOZ74Tyi[xBxCTo9][K0W3Jew5zTG] << endl;
            }
        }
    }
    if (k == 0)
        cout << "not found" << endl;
    return 0;
}

