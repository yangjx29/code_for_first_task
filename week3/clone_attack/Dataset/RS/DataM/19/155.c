int TgakDs3lu (char VrcUJoKOEDna []) {
    int WVySMs1o = (914 - 914);
    for (int CFEyqeW = (641 - 641);
    ; CFEyqeW = CFEyqeW +1) {
        VrcUJoKOEDna[CFEyqeW] = getchar ();
        if (!('\n' != VrcUJoKOEDna[CFEyqeW]))
            break;
        WVySMs1o = WVySMs1o +1;
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
    return WVySMs1o;
}

void  coutt (char VrcUJoKOEDna [], int length) {
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
    for (int CFEyqeW = (229 - 229);
    length > CFEyqeW; CFEyqeW = CFEyqeW +1) {
        cout << VrcUJoKOEDna[CFEyqeW];
    };
}

int main () {
    int wymdxi = (936 - 936), g2v3FRWry [100], RpGYcyMu, lgNdSmn8W, WVySMs1o = (488 - 488);
    char VrcUJoKOEDna [(145 - 45)] [(208 - 188)];
    char b [(826 - 726)];
    char sfhumzUlYk [(126 - 26)];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (int jUuNeX = 0;
    ; jUuNeX++) {
        VrcUJoKOEDna[wymdxi][jUuNeX] = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (VrcUJoKOEDna[wymdxi][jUuNeX] == '\n') {
            g2v3FRWry[wymdxi] = jUuNeX;
            WVySMs1o = wymdxi + (238 - 237);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            break;
        }
        if (VrcUJoKOEDna[wymdxi][jUuNeX] == ' ') {
            g2v3FRWry[wymdxi] = jUuNeX;
            jUuNeX = -1;
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
            wymdxi = wymdxi + 1;
        };
    }
    RpGYcyMu = TgakDs3lu (b);
    lgNdSmn8W = TgakDs3lu (sfhumzUlYk);
    for (int CFEyqeW = 0;
    CFEyqeW < WVySMs1o; CFEyqeW++) {
        if (!(0 == CFEyqeW))
            cout << " ";
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (g2v3FRWry[CFEyqeW] == RpGYcyMu) {
            int length;
            length = 0;
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
            for (int jUuNeX = 0;
            jUuNeX < RpGYcyMu; jUuNeX++) {
                if (VrcUJoKOEDna[CFEyqeW][jUuNeX] == b[jUuNeX])
                    length++;
            }
            if (length == RpGYcyMu)
                coutt (sfhumzUlYk, lgNdSmn8W);
            else
                coutt (VrcUJoKOEDna[CFEyqeW], g2v3FRWry[CFEyqeW]);
            continue;
        }
        else
            coutt (VrcUJoKOEDna[CFEyqeW], g2v3FRWry[CFEyqeW]);
    }
    return 0;
}

