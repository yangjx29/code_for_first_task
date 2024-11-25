int main () {
    int Es4FvVI;
    int flag1 [10000] = {(484 - 484)};
    int fBKjo1eJid [10000] = {(297 - 297)};
    int a;
    int b;
    int n;
    int i;
    Es4FvVI = 0;
    cin >> n;
    cin >> a >> b;
    while (a != 0 || b != 0) {
        fBKjo1eJid[b]++;
        flag1[a]++;
        cin >> a >> b;
    }
    {
        i = 0;
        while (i < n) {
            if (*(flag1 + i) == 0 && *(fBKjo1eJid + i) == n - 1) {
                Es4FvVI = 1;
                cout << i;
            }
            i++;
        };
    }
    if (!Es4FvVI)
        cout << "NOT FOUND";
    return 0;
}

