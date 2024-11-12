int main () {
    int iGNjiVHwv;
    iGNjiVHwv = 0;
    int v2pmInOqR;
    v2pmInOqR = 0;
    int len;
    int o5dWOZo;
    int MY2uiTR;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    char icu3TPs [1000 + 1];
    cin >> icu3TPs;
    len = strlen (icu3TPs);
    for (o5dWOZo = 0, MY2uiTR = 1; len - 1 >= MY2uiTR; MY2uiTR++) {
        if (icu3TPs[o5dWOZo] >= 'a')
            icu3TPs[o5dWOZo] = icu3TPs[o5dWOZo] - 32;
        if (icu3TPs[MY2uiTR] >= 'a')
            icu3TPs[MY2uiTR] = icu3TPs[MY2uiTR] - 32;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(icu3TPs[MY2uiTR] != icu3TPs[o5dWOZo]))
            iGNjiVHwv++;
        if (!(icu3TPs[MY2uiTR] == icu3TPs[o5dWOZo]) || (MY2uiTR == len - 1 && icu3TPs[o5dWOZo] == icu3TPs[MY2uiTR])) {
            printf ("(%c,%d)", icu3TPs[o5dWOZo], iGNjiVHwv + 1);
            iGNjiVHwv = 0;
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
            o5dWOZo = MY2uiTR;
            v2pmInOqR = 1;
        }
        if (MY2uiTR == len - 1 && iGNjiVHwv == 0 && icu3TPs[MY2uiTR] != icu3TPs[MY2uiTR -1]) {
            printf ("(%c,%d)", icu3TPs[MY2uiTR], iGNjiVHwv + 1);
        };
    }
    if (len == 1) {
        if (icu3TPs[0] >= 'a')
            icu3TPs[0] = icu3TPs[0] - 32;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("(%c,%d)", icu3TPs[o5dWOZo], iGNjiVHwv + 1);
    }
    return 0;
}

