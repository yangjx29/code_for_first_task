int main () {
    int cDbMewKxd, jyGAso, O87sXHE4ko, Myf5bQKPW, m, jEvLnyWmKe;
    int otdB3HhrD;
    int Hktm8SCZEPJz;
    int ZTvpGZ8;
    int HfdUomi;
    int u6erwLskR;
    int f;
    Myf5bQKPW = 1;
    jEvLnyWmKe = 0;
    O87sXHE4ko = 1;
    jyGAso = 1;
    cDbMewKxd = (517 - 516);
    scanf ("%d%d%d\n%d%d%d", &otdB3HhrD, &Hktm8SCZEPJz, &ZTvpGZ8, &HfdUomi, &u6erwLskR, &f);
    for (; O87sXHE4ko < HfdUomi;) {
        if ((O87sXHE4ko % 4 == 0 && !(0 == O87sXHE4ko % 100)) || (!(0 != O87sXHE4ko % 400)))
            jEvLnyWmKe = jEvLnyWmKe + 366;
        else
            jEvLnyWmKe = jEvLnyWmKe + 365;
        O87sXHE4ko = O87sXHE4ko +1;
    }
    m = 0;
    for (; otdB3HhrD > cDbMewKxd;) {
        if ((!(0 != cDbMewKxd % 4) && cDbMewKxd % 100 != 0) || (!(0 != cDbMewKxd % 400)))
            m = m + 366;
        else
            m = m + 365;
        cDbMewKxd = cDbMewKxd + 1;
    }
    while (jyGAso < Hktm8SCZEPJz) {
        if ((jyGAso == 1) || (jyGAso == 3) || (jyGAso == 5) || (!(7 != jyGAso)) || (!(8 != jyGAso)) || (!(10 != jyGAso)))
            m = m + 31;
        else if ((!(4 != jyGAso)) || (!(6 != jyGAso)) || (jyGAso == 9) || (!(11 != jyGAso)))
            m = m + 30;
        else if ((!(2 != jyGAso)) && (otdB3HhrD % 4 == 0 && otdB3HhrD % 100 != 0) || (otdB3HhrD % 400 == 0))
            m = m + 29;
        else
            m = m + 28;
        jyGAso = jyGAso + 1;
    }
    m = m + ZTvpGZ8;
    for (; Myf5bQKPW < u6erwLskR;) {
        if ((Myf5bQKPW == 1) || (Myf5bQKPW == 3) || (Myf5bQKPW == 5) || (Myf5bQKPW == 7) || (Myf5bQKPW == 8) || (Myf5bQKPW == 10))
            jEvLnyWmKe = jEvLnyWmKe + 31;
        else if ((Myf5bQKPW == 4) || (Myf5bQKPW == 6) || (Myf5bQKPW == 9) || (Myf5bQKPW == 11))
            jEvLnyWmKe = jEvLnyWmKe + 30;
        else if ((Myf5bQKPW == 2) && (HfdUomi % 4 == 0 && HfdUomi % 100 != 0) || (HfdUomi % 400 == 0))
            jEvLnyWmKe = jEvLnyWmKe + 29;
        else
            jEvLnyWmKe = jEvLnyWmKe + 28;
        Myf5bQKPW = Myf5bQKPW +1;
    }
    jEvLnyWmKe = jEvLnyWmKe + f;
    printf ("%d", jEvLnyWmKe - m);
    return 0;
}

