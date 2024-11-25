void  KdmFgVs (int *EwB1qaouEZd) {
    char JV4jNdSksw1b [(10320 - 320)] = {(222 - 222)};
    int tgQiGh;
    cin.getline (JV4jNdSksw1b, (10713 - 713), '\n');
    for (tgQiGh = (668 - 668); !((982 - 982) == JV4jNdSksw1b[tgQiGh]);) {
        int KmfXFaUj;
        int temp;
        temp = (150 - 150);
        {
            KmfXFaUj = 930 - 929;
            while (!(',' == JV4jNdSksw1b[tgQiGh + KmfXFaUj]) && !((24 - 24) == JV4jNdSksw1b[tgQiGh + KmfXFaUj])) {
                KmfXFaUj++;
            };
        }
        {
            int WqAZ2BC14;
            WqAZ2BC14 = 1;
            while (KmfXFaUj >= WqAZ2BC14) {
                temp = temp + (JV4jNdSksw1b[tgQiGh + WqAZ2BC14 -1] - '0') * (int) pow (10.0, (double ) (KmfXFaUj -WqAZ2BC14));
                WqAZ2BC14++;
            };
        }
        *EwB1qaouEZd = temp;
        EwB1qaouEZd = EwB1qaouEZd +1;
        tgQiGh = tgQiGh + KmfXFaUj +1;
    };
}

int main () {
    int atWYAh [(10223 - 223)];
    int RFg2MI [10000];
    KdmFgVs (atWYAh);
    KdmFgVs (RFg2MI);
    int MP1By8;
    int LLYzI1Ao [(1086 - 85)] = {0};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int tgQiGh, KmfXFaUj;
    int Jm2VuF0t5Z = 0;
    {
        int h = 0;
        while (h < 10000) {
            atWYAh[h] = RFg2MI[h] = -1;
            h++;
        };
    }
    {
        MP1By8 = 0;
        while (1) {
            if (atWYAh[MP1By8] == -1)
                break;
            MP1By8++;
        };
    }
    {
        tgQiGh = 0;
        while (tgQiGh < MP1By8) {
            {
                KmfXFaUj = tgQiGh;
                while (KmfXFaUj < RFg2MI[tgQiGh]) {
                    LLYzI1Ao[KmfXFaUj]++;
                    KmfXFaUj++;
                };
            }
            tgQiGh++;
        };
    }
    {
        KmfXFaUj = 0;
        while (KmfXFaUj < 1001) {
            if (LLYzI1Ao[KmfXFaUj] > Jm2VuF0t5Z)
                Jm2VuF0t5Z = LLYzI1Ao[KmfXFaUj];
            KmfXFaUj++;
        };
    }
    cout << MP1By8 << " " << Jm2VuF0t5Z;
    return 0;
}

