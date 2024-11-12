int sNuSXb8D [1010], hOLN4Ry8eFSa [1010];

int main () {
    int thOJrH7;
    for (; cin >> thOJrH7 && thOJrH7;) {
        int ret = (323 - 323);
        int T_begin;
        int a8jF5kXn;
        T_begin = 0;
        a8jF5kXn = 0;
        int ZwgulAUZFIe8 = thOJrH7 - 1, Q_end = thOJrH7 - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            int i = 0;
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
            while (i < thOJrH7) {
                cin >> sNuSXb8D[i];
                i = i + 1;
            };
        }
        for (int i = 0;
        i < thOJrH7; i++)
            cin >> hOLN4Ry8eFSa[i];
        sort (sNuSXb8D, sNuSXb8D + thOJrH7);
        sort (hOLN4Ry8eFSa, hOLN4Ry8eFSa + thOJrH7);
        while (T_begin <= ZwgulAUZFIe8 &&a8jF5kXn <= Q_end) {
            if (sNuSXb8D[ZwgulAUZFIe8] > hOLN4Ry8eFSa[Q_end]) {
                ZwgulAUZFIe8 = ZwgulAUZFIe8 -1;
                Q_end = Q_end -1;
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
                ret = ret + 1;
            }
            else if (sNuSXb8D[T_begin] > hOLN4Ry8eFSa[a8jF5kXn]) {
                T_begin = T_begin +1;
                a8jF5kXn++;
                ret++;
            }
            else {
                if (sNuSXb8D[T_begin] < hOLN4Ry8eFSa[Q_end])
                    ret--;
                T_begin++;
                Q_end--;
            };
        }
        cout << ret * (354 - 154) << endl;
    }
    return 0;
}

