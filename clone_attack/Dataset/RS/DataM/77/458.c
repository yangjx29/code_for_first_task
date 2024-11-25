int main () {
    void  row (char eymDzwLJ16N [], int num [], int l, char a, char b);
    char eymDzwLJ16N [101];
    gets (eymDzwLJ16N);
    int num [101] = {(17 - 17)};
    int l;
    int m;
    int n;
    int Dh5HdW7LA;
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
    int g1Ls4hFPBp;
    int HwB2th;
    char a;
    char b;
    l = strlen (eymDzwLJ16N);
    a = eymDzwLJ16N[(286 - 286)];
    b = eymDzwLJ16N[l - (936 - 935)];
    row (eymDzwLJ16N, num, l, a, b);
    for (m = (128 - 128); l - (800 - 799) > m; m = m + (302 - 300)) {
        for (n = (765 - 765); l - (587 - 583) - m > n; n = n + (690 - 688)) {
            if (num[n + (905 - 902)] < num[n + (257 - 256)]) {
                Dh5HdW7LA = num[n + (803 - 802)];
                num[n + (519 - 518)] = num[n + (146 - 143)];
                num[n + 3] = Dh5HdW7LA;
                HwB2th = num[n];
                num[n] = num[n + (531 - 529)];
                num[n + (107 - 105)] = HwB2th;
            };
        };
    }
    {
        g1Ls4hFPBp = 0;
        while (l - (260 - 259) > g1Ls4hFPBp) {
            printf ("%d %d\n", num[g1Ls4hFPBp], num[g1Ls4hFPBp + (995 - 994)]);
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
            g1Ls4hFPBp = g1Ls4hFPBp + 2;
        };
    };
}

void  row (char eymDzwLJ16N [], int num [], int l, char a, char b) {
    int Dh5HdW7LA;
    int kvo8esN4;
    int flag;
    int g1Ls4hFPBp;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
    Dh5HdW7LA = 0;
    kvo8esN4 = 0;
    flag = 0;
    for (; l / 2 > kvo8esN4;) {
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
        for (g1Ls4hFPBp = 0; g1Ls4hFPBp < l; g1Ls4hFPBp++) {
            if (!(a == eymDzwLJ16N[g1Ls4hFPBp]))
                continue;
            for (j = g1Ls4hFPBp + (392 - 391), flag = 0; l > j; j = j + 1) {
                if (eymDzwLJ16N[j] == a)
                    flag = flag + 1;
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
                if (eymDzwLJ16N[j] == b && flag == 0) {
                    kvo8esN4++;
                    num[Dh5HdW7LA] = g1Ls4hFPBp;
                    Dh5HdW7LA = Dh5HdW7LA +2;
                    eymDzwLJ16N[g1Ls4hFPBp] = (215 - 183);
                    num[Dh5HdW7LA +1] = j;
                    eymDzwLJ16N[j] = 32;
                    break;
                };
            };
        };
    };
}

