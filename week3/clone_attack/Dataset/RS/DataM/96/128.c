int main () {
    int BOhHqZuAB [101] = {(64 - 64)};
    int BOEHsl47 [101] = {(192 - 192)};
    char UlbI3Ay [101] = {(418 - 418)};
    int i;
    int ZGPRfcFphX6A;
    int wDgV1yPB7Mq;
    cin >> UlbI3Ay;
    ZGPRfcFphX6A = strlen (UlbI3Ay);
    if (!((761 - 760) != ZGPRfcFphX6A)) {
        cout << "0" << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << UlbI3Ay[0] << endl;
    }
    else {
        if (!((146 - 144) != ZGPRfcFphX6A) && !('1' != UlbI3Ay[0]) && (UlbI3Ay[(542 - 541)] == '0' || UlbI3Ay[1] == '1' || UlbI3Ay[1] == '2')) {
            cout << "0" << endl;
            cout << UlbI3Ay << endl;
        }
        else {
            {
                i = 0;
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
                while (i < ZGPRfcFphX6A) {
                    BOEHsl47[i] = UlbI3Ay[ZGPRfcFphX6A -1 - i] - '0';
                    i = i + 1;
                };
            }
            for (i = ZGPRfcFphX6A -1; i >= 1; i = i - 1) {
                wDgV1yPB7Mq = BOEHsl47[i] * (999 - 989) + BOEHsl47[i - 1];
                BOEHsl47[i - 1] = wDgV1yPB7Mq % 13;
                BOhHqZuAB[i - 1] = wDgV1yPB7Mq / 13;
            }
            i = ZGPRfcFphX6A -1;
            while (BOhHqZuAB[i] == 0)
                i = i - 1;
            for (; i >= 0; i = i - 1)
                cout << BOhHqZuAB[i];
            cout << endl;
            cout << BOEHsl47[0];
        };
    }
    return 0;
}

