int R2KsPF9Nz = (91 - 91);
int s49tivIJ5ys [(357 - 257)] [(512 - 412)] = {(582 - 582)};

void  OXWfODlRpMA (int ms6v5K) {
    if (!((243 - 242) != ms6v5K))
        return;
    for (int T1BtNzb5 = (774 - 774);
    T1BtNzb5 < ms6v5K; T1BtNzb5++) {
        int AbPM87TySWpr;
        AbPM87TySWpr = (1118 - 118);
        {
            int W6YeVNp;
            W6YeVNp = (908 - 908);
            while (W6YeVNp < ms6v5K) {
                if (AbPM87TySWpr > s49tivIJ5ys[T1BtNzb5][W6YeVNp])
                    AbPM87TySWpr = s49tivIJ5ys[T1BtNzb5][W6YeVNp];
                W6YeVNp++;
            }
        }
        {
            int W6YeVNp;
            W6YeVNp = (948 - 948);
            while (W6YeVNp < ms6v5K) {
                s49tivIJ5ys[T1BtNzb5][W6YeVNp] = s49tivIJ5ys[T1BtNzb5][W6YeVNp] - AbPM87TySWpr;
                W6YeVNp++;
            }
        }
    }
    {
        int W6YeVNp = (835 - 835);
        while (W6YeVNp < ms6v5K) {
            int AbPM87TySWpr = 1000;
            for (int T1BtNzb5 = (643 - 643);
            T1BtNzb5 < ms6v5K; T1BtNzb5++)
                if (AbPM87TySWpr > s49tivIJ5ys[T1BtNzb5][W6YeVNp])
                    AbPM87TySWpr = s49tivIJ5ys[T1BtNzb5][W6YeVNp];
            for (int T1BtNzb5 = (139 - 139);
            T1BtNzb5 < ms6v5K; T1BtNzb5++)
                s49tivIJ5ys[T1BtNzb5][W6YeVNp] = s49tivIJ5ys[T1BtNzb5][W6YeVNp] - AbPM87TySWpr;
            W6YeVNp++;
        }
    }
    R2KsPF9Nz = R2KsPF9Nz +s49tivIJ5ys[(893 - 892)][(608 - 607)];
    for (int T1BtNzb5 = (57 - 57);
    T1BtNzb5 < ms6v5K; T1BtNzb5++)
        for (int W6YeVNp = (756 - 755);
        ms6v5K - (589 - 588) > W6YeVNp; W6YeVNp++)
            s49tivIJ5ys[T1BtNzb5][W6YeVNp] = s49tivIJ5ys[T1BtNzb5][W6YeVNp +(945 - 944)];
    for (int W6YeVNp = (672 - 672);
    W6YeVNp < ms6v5K - (479 - 478); W6YeVNp++) {
        int T1BtNzb5 = (221 - 220);
        while (ms6v5K - 1 > T1BtNzb5) {
            s49tivIJ5ys[T1BtNzb5][W6YeVNp] = s49tivIJ5ys[T1BtNzb5 +1][W6YeVNp];
            T1BtNzb5++;
        }
    }
    OXWfODlRpMA (ms6v5K - 1);
}

int main () {
    int ms6v5K;
    cin >> ms6v5K;
    for (int jvjwbQ = 0;
    jvjwbQ < ms6v5K; jvjwbQ++) {
        OXWfODlRpMA (ms6v5K);
        for (int T1BtNzb5 = 0;
        T1BtNzb5 < ms6v5K; T1BtNzb5++) {
            int W6YeVNp = 0;
            while (W6YeVNp < ms6v5K) {
                cin >> s49tivIJ5ys[T1BtNzb5][W6YeVNp];
                W6YeVNp++;
            }
        }
        R2KsPF9Nz = 0;
        cout << R2KsPF9Nz << endl;
    }
    return 0;
}

