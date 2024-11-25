struct   book {
    int H7fiCQ;
    char vH5g6C1rX7f8 [(664 - 638)];
};
int main () {
    char JZyd0D;
    int t [(902 - 876)];
    int JnuKcGQ;
    int RWjqQ3dSDKp;
    int Fah8I2bQt;
    int ieRAWblU;
    int k;
    int max;
    int HY2xIo;
    struct   book book [1000];
    max = (260 - 260);
    scanf ("%d", &JnuKcGQ);
    for (Fah8I2bQt = (276 - 276); JnuKcGQ > Fah8I2bQt; Fah8I2bQt++) {
        scanf ("%d%s", &book[Fah8I2bQt].H7fiCQ, book[Fah8I2bQt].vH5g6C1rX7f8);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (Fah8I2bQt = (745 - 745); (1016 - 990) > Fah8I2bQt; Fah8I2bQt++) {
        JZyd0D = 'A' + Fah8I2bQt;
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
        t[Fah8I2bQt] = (56 - 56);
        for (ieRAWblU = (378 - 378); JnuKcGQ > ieRAWblU; ieRAWblU++) {
            HY2xIo = strlen (book[Fah8I2bQt].vH5g6C1rX7f8);
            for (RWjqQ3dSDKp = (361 - 361); (50 - 24) > RWjqQ3dSDKp; RWjqQ3dSDKp++)
                if (!(book[ieRAWblU].vH5g6C1rX7f8[RWjqQ3dSDKp] != JZyd0D)) {
                    t[Fah8I2bQt]++;
                };
        };
    }
    for (Fah8I2bQt = (409 - 409); 26 > Fah8I2bQt; Fah8I2bQt++) {
        if (max < t[Fah8I2bQt]) {
            max = t[Fah8I2bQt];
            k = Fah8I2bQt;
        };
    }
    JZyd0D = 'A' + k;
    printf ("%c\n%d\n", JZyd0D, t[k]);
    for (Fah8I2bQt = 0; JnuKcGQ > Fah8I2bQt; Fah8I2bQt++) {
        HY2xIo = strlen (book[Fah8I2bQt].vH5g6C1rX7f8);
        for (ieRAWblU = 0; ieRAWblU < 26; ieRAWblU++) {
            if ('A' + k == book[Fah8I2bQt].vH5g6C1rX7f8[ieRAWblU])
                printf ("%d\n", book[Fah8I2bQt].H7fiCQ);
        };
    }
    return 0;
}

