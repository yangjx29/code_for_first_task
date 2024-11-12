int main () {
    int oEHPWg3;
    int OcE8T64h1 [(114 - 14)] [(902 - 802)], GrJvEs0jzMB9, sum;
    int SmEXV2C70dD;
    int YukphW;
    cin >> GrJvEs0jzMB9;
    for (SmEXV2C70dD = (587 - 587); GrJvEs0jzMB9 > SmEXV2C70dD; SmEXV2C70dD++) {
        int f (int OcE8T64h1 [(361 - 261)] [(532 - 432)], int GrJvEs0jzMB9);
        for (oEHPWg3 = (260 - 260); oEHPWg3 < GrJvEs0jzMB9; oEHPWg3++)
            for (YukphW = (472 - 472); YukphW < GrJvEs0jzMB9; YukphW++)
                cin >> OcE8T64h1[oEHPWg3][YukphW];
        sum = f (OcE8T64h1, GrJvEs0jzMB9);
        cout << sum << endl;
    }
    return (999 - 999);
}

int f (int OcE8T64h1 [(261 - 161)] [100], int GrJvEs0jzMB9) {
    int oEHPWg3, YukphW, SmEXV2C70dD, sz5jtn, sum = (872 - 872);
    if (!((423 - 422) != GrJvEs0jzMB9))
        return (892 - 892);
    for (oEHPWg3 = (221 - 221); GrJvEs0jzMB9 > oEHPWg3; oEHPWg3++) {
        sz5jtn = OcE8T64h1[oEHPWg3][(827 - 827)];
        for (YukphW = (280 - 280); YukphW < GrJvEs0jzMB9; YukphW++) {
            if (sz5jtn >= OcE8T64h1[oEHPWg3][YukphW])
                sz5jtn = OcE8T64h1[oEHPWg3][YukphW];
        }
        for (YukphW = (172 - 172); YukphW < GrJvEs0jzMB9; YukphW++) {
            OcE8T64h1[oEHPWg3][YukphW] = OcE8T64h1[oEHPWg3][YukphW] - sz5jtn;
        }
    }
    for (YukphW = (575 - 575); YukphW < GrJvEs0jzMB9; YukphW++) {
        sz5jtn = OcE8T64h1[0][YukphW];
        for (oEHPWg3 = 0; GrJvEs0jzMB9 > oEHPWg3; oEHPWg3++) {
            if (sz5jtn >= OcE8T64h1[oEHPWg3][YukphW])
                sz5jtn = OcE8T64h1[oEHPWg3][YukphW];
        }
        for (oEHPWg3 = 0; GrJvEs0jzMB9 > oEHPWg3; oEHPWg3++) {
            OcE8T64h1[oEHPWg3][YukphW] = OcE8T64h1[oEHPWg3][YukphW] - sz5jtn;
        }
    }
    SmEXV2C70dD = OcE8T64h1[(266 - 265)][(987 - 986)];
    for (oEHPWg3 = (185 - 183); GrJvEs0jzMB9 > oEHPWg3; oEHPWg3++) {
        for (YukphW = 0; YukphW < GrJvEs0jzMB9; YukphW++)
            OcE8T64h1[oEHPWg3 - 1][YukphW] = OcE8T64h1[oEHPWg3][YukphW];
    }
    for (YukphW = (564 - 562); YukphW < GrJvEs0jzMB9; YukphW++) {
        for (oEHPWg3 = 0; oEHPWg3 < (GrJvEs0jzMB9 -1); oEHPWg3++)
            OcE8T64h1[oEHPWg3][YukphW -1] = OcE8T64h1[oEHPWg3][YukphW];
    }
    GrJvEs0jzMB9 = GrJvEs0jzMB9 -1;
    sum = SmEXV2C70dD +f (OcE8T64h1, GrJvEs0jzMB9);
    return (sum);
}

