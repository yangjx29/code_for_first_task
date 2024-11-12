const  int dx [(432 - 428)] = {(373 - 373), -(296 - 295), (517 - 516), (746 - 746)};
const  int jVZcH2IJR [4] = {-(289 - 288), (395 - 395), (259 - 259), 1};

int main () {
    int p01VF3zc;
    p01VF3zc = 0;
    int RImg3TARw;
    char UFUawvEguJoj [(1036 - 936)] [100];
    int ujtpcKElHT9;
    cin >> ujtpcKElHT9;
    for (int VY2Pmrtv = (400 - 400);
    ujtpcKElHT9 > VY2Pmrtv; VY2Pmrtv = VY2Pmrtv +1)
        for (int Ps2FIRj = (615 - 615);
        ujtpcKElHT9 > Ps2FIRj; Ps2FIRj = Ps2FIRj +1) {
            cin >> UFUawvEguJoj[VY2Pmrtv][Ps2FIRj];
        }
    for (int t = (833 - 833);
    RImg3TARw -1 > t; t = t + 1) {
        for (int VY2Pmrtv = 0;
        ujtpcKElHT9 > VY2Pmrtv; VY2Pmrtv = VY2Pmrtv +1)
            for (int Ps2FIRj = 0;
            Ps2FIRj < ujtpcKElHT9; Ps2FIRj = Ps2FIRj +1) {
                if (!('@' != UFUawvEguJoj[VY2Pmrtv][Ps2FIRj]))
                    for (int Gu40Qo93esD = 0;
                    4 > Gu40Qo93esD; Gu40Qo93esD = Gu40Qo93esD +1) {
                        if ((ujtpcKElHT9 > VY2Pmrtv +dx[Gu40Qo93esD]) && (0 <= VY2Pmrtv +dx[Gu40Qo93esD]) && (ujtpcKElHT9 > Ps2FIRj +jVZcH2IJR[Gu40Qo93esD]) && (0 <= Ps2FIRj +jVZcH2IJR[Gu40Qo93esD]) && (!('.' != UFUawvEguJoj[VY2Pmrtv +dx[Gu40Qo93esD]][Ps2FIRj +jVZcH2IJR[Gu40Qo93esD]])))
                            UFUawvEguJoj[VY2Pmrtv +dx[Gu40Qo93esD]][Ps2FIRj +jVZcH2IJR[Gu40Qo93esD]] = 'N';
                    };
            }
        for (int VY2Pmrtv = 0;
        ujtpcKElHT9 > VY2Pmrtv; VY2Pmrtv = VY2Pmrtv +1)
            for (int Ps2FIRj = 0;
            Ps2FIRj < ujtpcKElHT9; Ps2FIRj = Ps2FIRj +1) {
                if (UFUawvEguJoj[VY2Pmrtv][Ps2FIRj] == 'N')
                    UFUawvEguJoj[VY2Pmrtv][Ps2FIRj] = '@';
            };
    }
    for (int VY2Pmrtv = 0;
    VY2Pmrtv < ujtpcKElHT9; VY2Pmrtv++)
        for (int Ps2FIRj = 0;
        Ps2FIRj < ujtpcKElHT9; Ps2FIRj++) {
            if (UFUawvEguJoj[VY2Pmrtv][Ps2FIRj] == '@')
                p01VF3zc = p01VF3zc + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
    cout << p01VF3zc << endl;
    cin >> RImg3TARw;
}

