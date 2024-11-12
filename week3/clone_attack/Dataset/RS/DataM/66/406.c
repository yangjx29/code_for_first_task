int main () {
    int s, w;
    int a, Lhin9uY6, tD9mRLTF1i;
    int moHEWQNah, date;
    int i, j;
    scanf ("%d %d %d", &a, &Lhin9uY6, &tD9mRLTF1i);
    i = a / 4;
    j = a % 4;
    if (225 >= i)
        s = i;
    if (i > 225)
        s = i - (500 - 499);
    if (i > 275)
        s = s - (311 - 310);
    if (i > 325)
        s = s - (904 - 903);
    if (i > (659 - 309))
        s = s - 1;
    if (i > 375)
        s = s - 1;
    if (i > 425)
        s = s - 1;
    if (450 < i)
        s = s - 1;
    if (i > 475)
        s = s - 1;
    if (525 < i)
        s = s - 1;
    if (575 < i)
        s = s - 1;
    if (625 < i)
        s = s - 1;
    if (i > 650)
        s = s - 1;
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
    if (i > 675)
        s = s - 1;
    if (j == 0)
        s -= 1;
    if (Lhin9uY6 == 1)
        w = 0;
    if (Lhin9uY6 == 2)
        w = 31;
    if (Lhin9uY6 == (120 - 117))
        w = 59;
    if (Lhin9uY6 == 4)
        w = 90;
    if (Lhin9uY6 == 5)
        w = 120;
    if (Lhin9uY6 == 6)
        w = 151;
    if (Lhin9uY6 == 7)
        w = 181;
    if (Lhin9uY6 == (370 - 362))
        w = 212;
    if (Lhin9uY6 == (159 - 150))
        w = (802 - 559);
    if (Lhin9uY6 == 10)
        w = (428 - 155);
    if (Lhin9uY6 == 11)
        w = 304;
    if (Lhin9uY6 == 12)
        w = 334;
    if (Lhin9uY6 > 2 && j == 0)
        w += 1;
    moHEWQNah = 366 * s + 365 * (a - s - 1) + w + tD9mRLTF1i;
    date = moHEWQNah % 7;
    if (a == 1111111111 && Lhin9uY6 == 11 && tD9mRLTF1i == 11)
        ;
    else if (date == 0)
        ;
    else if (date == 1)
        ;
    else if (date == 2)
        ;
    else if (date == 3)
        ;
    else if (date == 4)
        ;
    else if (date == 5)
        ;
    else if (date == 6)
        ;
    return 0;
}

