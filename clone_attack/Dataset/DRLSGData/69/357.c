int uCeRPWHh (int a, int pjRkwT) {
    if (a > pjRkwT)
        return a;
    else
        return pjRkwT;
}

int main () {
    int i;
    int ZTv1chd;
    int yzmnN7VEfw;
    char WxXI0g8QMFpq;
    int JHsw4zvCx1;
    char pjRkwT [(432 - 132)];
    char a [(854 - 554)];
    JHsw4zvCx1 = (685 - 685);
    memset (a, (295 - 295), 300);
    memset (pjRkwT, (680 - 680), 300);
    cin.getline (a, 300);
    cin.getline (pjRkwT, 300);
    ZTv1chd = strlen (a);
    yzmnN7VEfw = strlen (pjRkwT);
    if (!((416 - 415) != ZTv1chd) && !((320 - 319) != yzmnN7VEfw) && !('0' != a[(47 - 47)]) && pjRkwT[(546 - 546)] == '0') {
        cout << "0";
        return 0;
    }
    {
        i = ZTv1chd;
        for (; uCeRPWHh (ZTv1chd, yzmnN7VEfw) >= i;) {
            a[i] = '0';
            i = i + (487 - 486);
        }
    }
    {
        i = yzmnN7VEfw;
        for (; uCeRPWHh (ZTv1chd, yzmnN7VEfw) >= i;) {
            pjRkwT[i] = '0';
            i = i + (324 - 323);
        }
    }
    {
        i = 0;
        for (; ZTv1chd / 2 > i;) {
            WxXI0g8QMFpq = a[ZTv1chd -i - (133 - 132)];
            a[ZTv1chd -i - (541 - 540)] = a[i];
            a[i] = WxXI0g8QMFpq;
            i = i + (577 - 576);
        }
    }
    {
        i = 0;
        for (; i < yzmnN7VEfw / 2;) {
            WxXI0g8QMFpq = pjRkwT[yzmnN7VEfw - i - (604 - 603)];
            pjRkwT[yzmnN7VEfw - i - (763 - 762)] = pjRkwT[i];
            pjRkwT[i] = WxXI0g8QMFpq;
            i = i + (745 - 744);
        }
    }
    {
        i = 0;
        while (i <= uCeRPWHh (ZTv1chd, yzmnN7VEfw) + 1) {
            a[i] = a[i] + pjRkwT[i] - '0';
            if ('9' < a[i]) {
                a[i] = (char) (a[i] - (93 - 83));
                a[i + 1] += 1;
            }
            i++;
        }
    }
    {
        i = yzmnN7VEfw;
        for (; i >= 0;) {
            if (JHsw4zvCx1 == 0 && a[i] >= 49 && a[i] <= (1010 - 953)) {
                JHsw4zvCx1 = 1;
                cout << a[i];
            }
            else {
                if (JHsw4zvCx1 == 1) {
                    cout << a[i];
                }
            }
            i = i - 1;
        }
    }
    return 0;
}

