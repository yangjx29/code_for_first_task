int main () {
    int Q1PgM8c;
    int flag2;
    int Wxfuaob [(388 - 383)] [5];
    int wlstaD;
    int j;
    int k;
    int rfkSCPop57;
    int row;
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
    int rGOtZwmJEk;
    Q1PgM8c = (589 - 588);
    flag2 = (40 - 40);
    for (wlstaD = (179 - 179); wlstaD <= (193 - 189); wlstaD = wlstaD + 1)
        for (j = 0; j <= 4; j = j + 1)
            cin >> Wxfuaob[wlstaD][j];
    for (wlstaD = 0; 4 >= wlstaD; wlstaD++) {
        Q1PgM8c = (116 - 115);
        rfkSCPop57 = Wxfuaob[wlstaD][0];
        row = wlstaD;
        rGOtZwmJEk = 0;
        for (j = 1; j <= 4; j++) {
            if (rfkSCPop57 < Wxfuaob[wlstaD][j]) {
                rfkSCPop57 = Wxfuaob[wlstaD][j];
                rGOtZwmJEk = j;
            };
        }
        for (k = 0; k <= 4; k++) {
            if (Wxfuaob[k][rGOtZwmJEk] < Wxfuaob[row][rGOtZwmJEk]) {
                Q1PgM8c = 0;
                break;
            };
        }
        if (Q1PgM8c) {
            cout << (row + 1) << " " << (rGOtZwmJEk + 1) << " " << Wxfuaob[row][rGOtZwmJEk] << endl;
            flag2 = 1;
        };
    }
    if (flag2 == 0)
        cout << "not found" << endl;
    return 0;
}

