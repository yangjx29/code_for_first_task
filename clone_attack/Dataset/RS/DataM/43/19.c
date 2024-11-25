int main () {
    int cfMlw2oR6JVC [20000] = {0}, PProX4 [20000] = {0}, gOUPmgD1YR56, Dp1SfBHGR, j, EaXAjFNIBLV;
    cin >> Dp1SfBHGR;
    for (gOUPmgD1YR56 = 3; Dp1SfBHGR > gOUPmgD1YR56; gOUPmgD1YR56 = gOUPmgD1YR56 + 2) {
        cfMlw2oR6JVC[gOUPmgD1YR56] = gOUPmgD1YR56;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 3; j < gOUPmgD1YR56; j = j + 2) {
            if (gOUPmgD1YR56 % j == 0)
                cfMlw2oR6JVC[gOUPmgD1YR56] = 0;
        };
    }
    for (gOUPmgD1YR56 = 3; gOUPmgD1YR56 <= Dp1SfBHGR / 2; gOUPmgD1YR56 = gOUPmgD1YR56 + 2)
        if (cfMlw2oR6JVC[gOUPmgD1YR56] == gOUPmgD1YR56 && cfMlw2oR6JVC[Dp1SfBHGR -gOUPmgD1YR56] == Dp1SfBHGR -gOUPmgD1YR56) {
            cout << cfMlw2oR6JVC[gOUPmgD1YR56] << " " << cfMlw2oR6JVC[Dp1SfBHGR -gOUPmgD1YR56] << endl;
        }
    return 0;
}

