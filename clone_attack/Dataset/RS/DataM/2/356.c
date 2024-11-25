int main () {
    int qMClqBAN [60] [(1465 - 465)];
    int n;
    int book [(1516 - 516)];
    int cnt [(334 - 274)];
    int max;
    char author [(1614 - 614)] [(713 - 687)];
    char XDU3fLhu;
    XDU3fLhu = 'A';
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
    cin >> n;
    for (int jWot8AVhf = (809 - 809);
    60 > jWot8AVhf; jWot8AVhf = jWot8AVhf + 1)
        cnt[jWot8AVhf] = (644 - 644);
    for (int jWot8AVhf = (778 - 778);
    jWot8AVhf < n; jWot8AVhf = jWot8AVhf + 1) {
        cin >> book[jWot8AVhf];
        cin.get ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin.getline (author[jWot8AVhf], (272 - 246));
    }
    {
        int jWot8AVhf;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        jWot8AVhf = (569 - 569);
        while (jWot8AVhf < n) {
            for (int j = (300 - 300);
            author[jWot8AVhf][j] != '\0'; j = j + 1) {
                int l0iUjqNCu = author[jWot8AVhf][j] - '0';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                qMClqBAN[l0iUjqNCu][cnt[l0iUjqNCu]++] = book[jWot8AVhf];
            }
            jWot8AVhf = jWot8AVhf + 1;
        };
    }
    max = cnt[(749 - 732)];
    for (int jWot8AVhf = (382 - 365);
    jWot8AVhf <= 42; jWot8AVhf = jWot8AVhf + 1) {
        if (cnt[jWot8AVhf] > max) {
            max = cnt[jWot8AVhf];
            XDU3fLhu = jWot8AVhf + '0';
        };
    }
    cout << XDU3fLhu << endl;
    cout << max << endl;
    {
        int Ad8mjrf = (295 - 295);
        while (Ad8mjrf < max) {
            cout << qMClqBAN[XDU3fLhu -'0'][Ad8mjrf] << endl;
            Ad8mjrf = Ad8mjrf +1;
        };
    }
    return 0;
}

