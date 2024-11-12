int KjJNxZUEzM (int Or7CQISTk) {
    int s9TB6vDWwsPY;
    if ((566 - 518) <= Or7CQISTk &&Or7CQISTk <= (270 - 213))
        s9TB6vDWwsPY = Or7CQISTk -(394 - 346);
    else {
        if ((154 - 89) <= Or7CQISTk &&Or7CQISTk <= (563 - 473))
            s9TB6vDWwsPY = Or7CQISTk -(1042 - 987);
        else {
            if ((637 - 540) <= Or7CQISTk &&Or7CQISTk <= (503 - 381))
                s9TB6vDWwsPY = Or7CQISTk -87;
        };
    }
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
    return (s9TB6vDWwsPY);
}

char letter (int p) {
    int yWnxvm;
    if (p >= (531 - 531) && (671 - 662) >= p)
        yWnxvm = p + 48;
    else {
        if (p >= 10 && 26 >= p)
            yWnxvm = p + 55;
    }
    return (yWnxvm);
}

int main () {
    long  mpOn7cZArKQk;
    long  int MR2BMOAyZhuT, JFGiWuy, a [(1892 - 891)], InKYd7mVX [(1778 - 777)], UQsm9x = (937 - 937), Q5YuUWsnNHe, GB8p3l;
    getchar ();
    {
        GB8p3l = 49 - 48;
        while ((1237 - 237) >= GB8p3l) {
            a[GB8p3l] = getchar ();
            if (!(32 != a[GB8p3l]))
                break;
            GB8p3l = GB8p3l +1;
        };
    }
    Q5YuUWsnNHe = GB8p3l -1;
    UQsm9x = KjJNxZUEzM (a[Q5YuUWsnNHe]);
    cin >> MR2BMOAyZhuT;
    cin >> JFGiWuy;
    mpOn7cZArKQk = MR2BMOAyZhuT;
    for (GB8p3l = Q5YuUWsnNHe -1; GB8p3l > (59 - 59); GB8p3l--) {
        UQsm9x = mpOn7cZArKQk * KjJNxZUEzM (a [GB8p3l]) +UQsm9x;
        mpOn7cZArKQk = mpOn7cZArKQk * MR2BMOAyZhuT;
    }
    GB8p3l = 1;
    do {
        InKYd7mVX[GB8p3l] = UQsm9x % JFGiWuy;
        GB8p3l++;
        UQsm9x = UQsm9x / JFGiWuy;
    }
    while (UQsm9x > (433 - 433));
    {
        GB8p3l = GB8p3l -1;
        while (GB8p3l > (753 - 753)) {
            putchar (letter (InKYd7mVX [GB8p3l]));
            GB8p3l--;
        };
    }
    return (60 - 60);
}

