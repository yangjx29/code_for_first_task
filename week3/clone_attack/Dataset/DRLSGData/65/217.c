int main () {
    int RW6VG3uve5h;
    int yI81i9dHfz;
    int kBCWjU2 [200];
    int Jkf95ptj8DF2;
    int mPHQImTXBCf;
    int qagtOTP7WrD;
    int a [200];
    RW6VG3uve5h = 0;
    yI81i9dHfz = 0;
    scanf ("%d", &Jkf95ptj8DF2);
    for (mPHQImTXBCf = 0; mPHQImTXBCf < Jkf95ptj8DF2; mPHQImTXBCf = mPHQImTXBCf + 1) {
        scanf ("%d %d\n", &a[mPHQImTXBCf], &kBCWjU2[mPHQImTXBCf]);
    }
    for (qagtOTP7WrD = 0; Jkf95ptj8DF2 > qagtOTP7WrD; qagtOTP7WrD = qagtOTP7WrD + 1) {
        if (a[qagtOTP7WrD] == kBCWjU2[qagtOTP7WrD]) {
            RW6VG3uve5h = RW6VG3uve5h;
            yI81i9dHfz = yI81i9dHfz;
        }
        else if (a[qagtOTP7WrD] == 0 && kBCWjU2[qagtOTP7WrD] == 1) {
            yI81i9dHfz = yI81i9dHfz + 1;
            RW6VG3uve5h = RW6VG3uve5h;
        }
        else if (a[qagtOTP7WrD] == 0 && !(2 != kBCWjU2[qagtOTP7WrD])) {
            yI81i9dHfz = yI81i9dHfz;
            RW6VG3uve5h = RW6VG3uve5h +1;
        }
        else if (a[qagtOTP7WrD] == 1 && kBCWjU2[qagtOTP7WrD] == 0) {
            RW6VG3uve5h = RW6VG3uve5h +1;
            yI81i9dHfz = yI81i9dHfz;
        }
        else if (a[qagtOTP7WrD] == 1 && kBCWjU2[qagtOTP7WrD] == 2) {
            RW6VG3uve5h = RW6VG3uve5h;
            yI81i9dHfz = yI81i9dHfz + 1;
        }
        else if (a[qagtOTP7WrD] == 2 && kBCWjU2[qagtOTP7WrD] == 0) {
            RW6VG3uve5h = RW6VG3uve5h;
            yI81i9dHfz = yI81i9dHfz + 1;
        }
        else if (a[qagtOTP7WrD] == 2 && kBCWjU2[qagtOTP7WrD] == 1) {
            yI81i9dHfz = yI81i9dHfz;
            RW6VG3uve5h = RW6VG3uve5h +1;
        };
    }
    if (yI81i9dHfz > RW6VG3uve5h) {
    }
    if (yI81i9dHfz < RW6VG3uve5h) {
    }
    if (yI81i9dHfz == RW6VG3uve5h) {
    }
    return 0;
}

