int main () {
    int W2Ud0F3e;
    int hTNfFU;
    char base [256];
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
    scanf ("%d", &W2Ud0F3e);
    for (; W2Ud0F3e != 0;) {
        scanf ("%s", base);
        {
            hTNfFU = 0;
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
            while (base[hTNfFU] != '\0') {
                if (base[hTNfFU] == 'A')
                    base[hTNfFU] = 'T';
                else {
                    if (base[hTNfFU] == 'T')
                        base[hTNfFU] = 'A';
                    else if (base[hTNfFU] == 'C')
                        base[hTNfFU] = 'G';
                    else if (base[hTNfFU] == 'G')
                        base[hTNfFU] = 'C';
                }
                hTNfFU = hTNfFU + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%s\n", base);
        W2Ud0F3e--;
    }
    return 0;
}

