int main () {
    int pDO6uH7Mwj [26] = {0};
    int max;
    int record;
    struct   Bookinfo {
        int number;
        char auther [27];
    };
    struct   Bookinfo NAK7rq [(1920 - 920)];
    int hQmk0gG, LmkeqCSG, j;
    scanf ("%d", &hQmk0gG);
    {
        LmkeqCSG = 908 - 908;
        while (hQmk0gG > LmkeqCSG) {
            scanf ("%d %s", &NAK7rq[LmkeqCSG].number, NAK7rq[LmkeqCSG].auther);
            LmkeqCSG = LmkeqCSG +1;
        };
    }
    {
        LmkeqCSG = 0;
        while (hQmk0gG > LmkeqCSG) {
            int qPaNFCA;
            qPaNFCA = strlen (NAK7rq[LmkeqCSG].auther);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                j = 0;
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
                while (qPaNFCA > j) {
                    pDO6uH7Mwj[NAK7rq[LmkeqCSG].auther[j] - 'A']++;
                    j = j + 1;
                };
            }
            LmkeqCSG++;
        };
    }
    max = pDO6uH7Mwj[0];
    for (LmkeqCSG = 0; 26 > LmkeqCSG; LmkeqCSG = LmkeqCSG +1)
        if (pDO6uH7Mwj[LmkeqCSG] >= max) {
            max = pDO6uH7Mwj[LmkeqCSG];
            record = LmkeqCSG;
        }
    printf ("%c\n%d\n", record + 'A', max);
    for (LmkeqCSG = 0; hQmk0gG > LmkeqCSG; LmkeqCSG++) {
        int wCeafg1G9rMw;
        wCeafg1G9rMw = strlen (NAK7rq[LmkeqCSG].auther);
        {
            j = 0;
            while (wCeafg1G9rMw > j) {
                if (NAK7rq[LmkeqCSG].auther[j] == record + 'A') {
                    printf ("%d\n", NAK7rq[LmkeqCSG].number);
                    break;
                }
                j = j + 1;
            };
        };
    }
    return 0;
}

