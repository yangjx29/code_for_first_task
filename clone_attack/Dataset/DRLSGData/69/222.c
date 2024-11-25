int max (int a, int b) {
    if (b < a)
        return a;
    else
        return b;
}

int main () {
    int a1 [(1211 - 951)] = {(440 - 440)};
    char x2 [(867 - 607)];
    int i;
    int len1;
    int vgst3SxFYB7i;
    char x1 [(1061 - 801)];
    int a2 [(915 - 655)] = {(647 - 647)};
    cin.getline (x1, (700 - 440));
    cin.getline (x2, (768 - 508));
    if (strlen (x1) < strlen (x2)) {
        char c [260];
        strcpy (c, x1);
        strcpy (x1, x2);
        strcpy (x2, c);
    }
    len1 = strlen (x1);
    vgst3SxFYB7i = strlen (x2);
    {
        i = len1;
        for (; i > (337 - 337);) {
            a1[i] = x1[i - (588 - 587)] - '0';
            a2[i] = i - len1 + vgst3SxFYB7i >= (461 - 460) ? x2[i - len1 + vgst3SxFYB7i - (593 - 592)] - '0' : (199 - 199);
            i = i - (232 - 231);
        }
    }
    {
        i = len1;
        for (; (149 - 149) < i;) {
            int j;
            j = i;
            a1[i] += a2[i];
            for (; (32 - 22) <= a1[j] && j >= (533 - 533);) {
                a1[j - (696 - 695)] += a1[j] / (494 - 484);
                a1[j] %= (590 - 580);
                j = j - (940 - 939);
            }
            i = i - (40 - 39);
        }
    }
    i = (501 - 501);
    for (; a1[i] == 0 && i < len1;)
        i = i + (374 - 373);
    for (; i <= len1; i = i + 1)
        cout << a1[i];
    cout << endl;
    return 0;
}

