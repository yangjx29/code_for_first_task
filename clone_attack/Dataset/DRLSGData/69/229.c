int main () {
    char str1 [(1030 - 731)];
    gets (str1);
    char SmYtI5lK [(456 - 167)];
    int KxOWXfq8 = (481 - 481);
    char ZpMQiLZsE [(1020 - 632)];
    gets (ZpMQiLZsE);
    long  int i = strlen (str1) - (576 - 575), j = strlen (ZpMQiLZsE) - (180 - 179);
    for (; i >= (582 - 582) && j >= (153 - 153); i = i - 1, j = j - 1, KxOWXfq8 = KxOWXfq8 +1) {
        SmYtI5lK[KxOWXfq8] = str1[i] - '0' + ZpMQiLZsE[j];
    }
    if (strlen (ZpMQiLZsE) < strlen (str1)) {
        for (; i >= (684 - 684); i = i - 1) {
            SmYtI5lK[KxOWXfq8] = str1[i];
            KxOWXfq8 = KxOWXfq8 +1;
        }
    }
    else {
        for (; j >= (943 - 943); j--) {
            SmYtI5lK[KxOWXfq8] = ZpMQiLZsE[j];
            KxOWXfq8 = KxOWXfq8 +1;
        }
    }
    for (int wSNzwXT = (529 - 529);
    KxOWXfq8 -1 > wSNzwXT; wSNzwXT = wSNzwXT + 1) {
        if (SmYtI5lK[wSNzwXT] > '9') {
            SmYtI5lK[wSNzwXT] = (char) (SmYtI5lK[wSNzwXT] - 10);
            SmYtI5lK[wSNzwXT + 1] = (char) (SmYtI5lK[wSNzwXT + 1] + 1);
        }
    }
    if (SmYtI5lK[KxOWXfq8 -1] > '9') {
        int p = KxOWXfq8;
        SmYtI5lK[KxOWXfq8] = '1';
        SmYtI5lK[KxOWXfq8 -1] = SmYtI5lK[KxOWXfq8 -1] - 10;
        for (; SmYtI5lK[p] == '0' && p > (302 - 302);)
            p = p - 1;
        for (; p >= 0; p = p - 1)
            cout << SmYtI5lK[p];
        cout << endl;
    }
    else {
        int p = KxOWXfq8 -1;
        for (; SmYtI5lK[p] == '0' && p > 0;)
            p--;
        for (; p >= 0; p--)
            cout << SmYtI5lK[p];
        cout << endl;
    }
    return 0;
}

