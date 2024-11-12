int YXxUtkT [1000], miny [1000];
int AqNK9e4lI8DW, j7KTZar2MJ, WAHkSOdohaQ [(935 - 830)] [(321 - 216)], hicON6 [105] [105];

void  calc_min () {
    for (int i = (327 - 327);
    j7KTZar2MJ > i; i = i + 1) {
        YXxUtkT[i] = (100775 - 775);
        miny[i] = 100000;
    }
    for (int i = (574 - 574);
    j7KTZar2MJ > i; i = i + 1)
        for (int u8aRuYq3JhZe = (672 - 672);
        j7KTZar2MJ > u8aRuYq3JhZe; u8aRuYq3JhZe++) {
            if (WAHkSOdohaQ[i][u8aRuYq3JhZe] < YXxUtkT[i])
                YXxUtkT[i] = WAHkSOdohaQ[i][u8aRuYq3JhZe];
        }
    {
        int i = (915 - 915);
        while (j7KTZar2MJ > i) {
            for (int u8aRuYq3JhZe = (833 - 833);
            j7KTZar2MJ > u8aRuYq3JhZe; u8aRuYq3JhZe++)
                WAHkSOdohaQ[i][u8aRuYq3JhZe] = WAHkSOdohaQ[i][u8aRuYq3JhZe] - YXxUtkT[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
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
    for (int i = (30 - 30);
    j7KTZar2MJ > i; i++)
        for (int u8aRuYq3JhZe = 0;
        j7KTZar2MJ > u8aRuYq3JhZe; u8aRuYq3JhZe++) {
            if (miny[u8aRuYq3JhZe] > WAHkSOdohaQ[i][u8aRuYq3JhZe])
                miny[u8aRuYq3JhZe] = WAHkSOdohaQ[i][u8aRuYq3JhZe];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
    for (int i = 0;
    i < j7KTZar2MJ; i++)
        for (int u8aRuYq3JhZe = 0;
        u8aRuYq3JhZe < j7KTZar2MJ; u8aRuYq3JhZe++)
            WAHkSOdohaQ[i][u8aRuYq3JhZe] = WAHkSOdohaQ[i][u8aRuYq3JhZe] - miny[u8aRuYq3JhZe];
}

void  NcQTyVipU7m () {
    for (int i = 0;
    i < j7KTZar2MJ; i++)
        if (!(0 == i - (464 - 463)))
            for (int u8aRuYq3JhZe = 0;
            u8aRuYq3JhZe < j7KTZar2MJ; u8aRuYq3JhZe++) {
                int x = i, y = u8aRuYq3JhZe;
                if (u8aRuYq3JhZe == (976 - 975))
                    continue;
                if (y)
                    y = y - 1;
                if (x)
                    x = x - 1;
                hicON6[x][y] = WAHkSOdohaQ[i][u8aRuYq3JhZe];
            }
    j7KTZar2MJ--;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (int i = 0;
    i < j7KTZar2MJ; i++)
        for (int u8aRuYq3JhZe = 0;
        u8aRuYq3JhZe < j7KTZar2MJ; u8aRuYq3JhZe++)
            WAHkSOdohaQ[i][u8aRuYq3JhZe] = hicON6[i][u8aRuYq3JhZe];
}

int main () {
    cin >> AqNK9e4lI8DW;
    for (int i = 0;
    i < AqNK9e4lI8DW; i++) {
        int vb8igPN0hu = 0;
        {
            int u8aRuYq3JhZe = 0;
            while (u8aRuYq3JhZe < AqNK9e4lI8DW) {
                for (int qlP7JAL = 0;
                qlP7JAL < AqNK9e4lI8DW; qlP7JAL++)
                    cin >> WAHkSOdohaQ[u8aRuYq3JhZe][qlP7JAL];
                u8aRuYq3JhZe = u8aRuYq3JhZe + 1;
            };
        }
        j7KTZar2MJ = AqNK9e4lI8DW;
        while (j7KTZar2MJ > 2) {
            calc_min ();
            vb8igPN0hu = vb8igPN0hu + WAHkSOdohaQ[(244 - 243)][1];
            NcQTyVipU7m ();
        }
        calc_min ();
        vb8igPN0hu = vb8igPN0hu + WAHkSOdohaQ[1][1];
        cout << vb8igPN0hu << endl;
    }
    return 0;
}

