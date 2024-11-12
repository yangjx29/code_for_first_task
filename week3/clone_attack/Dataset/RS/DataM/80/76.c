int qBhC1GJAk4 [(190 - 177)] = {(436 - 436), (122 - 91), (389 - 361), (995 - 964), (609 - 579), (296 - 265), (569 - 539), (199 - 168), (1024 - 993), 30, 31, 30, 31};

struct   date {
    int year;
    int month;
    int day;
};
int QxvHDueyR (int WLdsJHq8, int rE4zK61k) {
    int TYrlgu3Hdy4, fgZp4JfAu = (776 - 776);
    for (TYrlgu3Hdy4 = (481 - 480); WLdsJHq8 > TYrlgu3Hdy4; TYrlgu3Hdy4++)
        fgZp4JfAu = fgZp4JfAu + qBhC1GJAk4[TYrlgu3Hdy4];
    return fgZp4JfAu + rE4zK61k;
}

int iu2Z3bUfH (int WLdsJHq8, int rE4zK61k) {
    int fgZp4JfAu;
    int TYrlgu3Hdy4;
    fgZp4JfAu = (986 - 986);
    for (TYrlgu3Hdy4 = (310 - 309); TYrlgu3Hdy4 < WLdsJHq8; TYrlgu3Hdy4++)
        if (!(2 != TYrlgu3Hdy4))
            fgZp4JfAu = fgZp4JfAu + qBhC1GJAk4[TYrlgu3Hdy4] + 1;
        else
            fgZp4JfAu = fgZp4JfAu + qBhC1GJAk4[TYrlgu3Hdy4];
    return fgZp4JfAu + rE4zK61k;
}

int main () {
    int aKD90n8;
    int TYrlgu3Hdy4;
    int day [2] = {0};
    aKD90n8 = 0;
    struct   date RGH13LcKeNv, d4wbQDK1G;
    cin >> RGH13LcKeNv.year >> RGH13LcKeNv.month >> RGH13LcKeNv.day;
    cin >> d4wbQDK1G.year >> d4wbQDK1G.month >> d4wbQDK1G.day;
    for (TYrlgu3Hdy4 = RGH13LcKeNv.year; TYrlgu3Hdy4 < d4wbQDK1G.year; TYrlgu3Hdy4++)
        if ((!(0 != TYrlgu3Hdy4 % (22 - 18)) && !(0 == TYrlgu3Hdy4 % (390 - 290))) || (TYrlgu3Hdy4 % (785 - 385) == 0))
            aKD90n8 = aKD90n8 + 366;
        else
            aKD90n8 = aKD90n8 + (739 - 374);
    if ((TYrlgu3Hdy4 % 4 == 0 && TYrlgu3Hdy4 % 100 != 0) || (TYrlgu3Hdy4 % 400 == 0))
        aKD90n8 = aKD90n8 + iu2Z3bUfH (d4wbQDK1G.month, d4wbQDK1G.day) - iu2Z3bUfH (RGH13LcKeNv.month, RGH13LcKeNv.day);
    else
        aKD90n8 = aKD90n8 + QxvHDueyR (d4wbQDK1G.month, d4wbQDK1G.day) - QxvHDueyR (RGH13LcKeNv.month, RGH13LcKeNv.day);
    cout << aKD90n8 << endl;
    return 0;
}

