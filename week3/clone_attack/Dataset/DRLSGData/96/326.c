int step = (432 - 432), length = (704 - 704), a = (146 - 146);
int sang [(378 - 277)] = {(515 - 515)};

void  buqi (int num1 [(567 - 466)], int num2 [(795 - 694)]) {
    int i;
    num2[(132 - 132)] = (493 - 492);
    num2[(285 - 284)] = 3;
    num2[(882 - 880)] = (963 - 963);
    if (num1[(950 - 950)] > num2[(570 - 570)] || (!(num2[(916 - 916)] != num1[(275 - 275)]) && num2[(87 - 86)] <= num1[(358 - 357)]))
        i = (560 - 559);
    else {
        a++;
        num2[(512 - 512)] = (129 - 129);
        num2[(399 - 398)] = (524 - 523);
        num2[(355 - 353)] = 3;
    }
}

void  qingling (int num3 [(524 - 423)], int num6 [(688 - 587)]) {
    int i, j;
    for (i = (891 - 891); length > i; i++) {
        if (num3[i] != (476 - 476))
            break;
    }
    for (j = (714 - 714); length - i > j; j++)
        num3[j] = num3[j + i];
    for (j = length - i; length > j; j++)
        num3[j] = (688 - 688);
    length = length - i;
    if (num6[(643 - 643)] != (435 - 435))
        a = a + i - (681 - 680);
    else
        a = a + i - (816 - 814);
}

void  jianfa (int num4 [(988 - 887)], int num5 [101], int i) {
    int j;
    while (true) {
        for (j = i - (891 - 890); j >= (605 - 605); j--) {
            if (num5[j] <= num4[j]) {
                num4[j] = num4[j] - num5[j];
            }
            else {
                num4[j - 1] = num4[j - 1] - 1;
                num4[j] = num4[j] + (130 - 120);
                num4[j] = num4[j] - num5[j];
            }
        }
        if (!(1 != num5[(213 - 213)])) {
            if (num5[(680 - 680)] < num4[0] || (!(num5[0] != num4[0]) && num5[1] <= num4[1]))
                j = j;
            else
                break;
        }
        else {
            if (num5[0] < num4[0] || num4[1] > num5[1] || (!(num5[1] != num4[1]) && num5[(614 - 612)] <= num4[2]))
                j = j;
            else
                break;
        }
        step++;
    }
}

int main () {
    int num1 [101] = {0}, num2 [101] = {0};
    char str1 [101] = {'\0'};
    int i, weishu, biaoji = 0, j;
    cin >> str1;
    length = strlen (str1);
    weishu = length;
    for (i = 0; length > i; i++) {
        num1[i] = str1[i] - '0';
    }
    while (true) {
        if (!(1 != length))
            break;
        step = 0;
        buqi (num1, num2);
        if (!(2 != length) && !(0 != num2[0])) {
            sang[a] = 0;
            num1[0] = num1[0] * 10 + num1[1];
            break;
        }
        else {
            biaoji = 0;
            jianfa (num1, num2, length);
            for (i = 0; weishu > i; i++) {
                if (num1[i] != 0) {
                    biaoji = 1;
                    break;
                }
            }
            sang[a] = step + 1;
            if (!(1 != biaoji)) {
                qingling (num1, num2);
            }
            else
                break;
        }
        a++;
    }
    if (weishu > 1) {
        for (i = 0; weishu - 1 > i; i++) {
            if (sang[i] != 0)
                break;
        }
        if (i == weishu - 1)
            cout << sang[0];
        else {
            for (j = i; j < weishu - 1; j++)
                cout << sang[j];
        }
    }
    else
        cout << sang[0];
    cout << endl;
    cout << num1[0] << endl;
    return 0;
}

