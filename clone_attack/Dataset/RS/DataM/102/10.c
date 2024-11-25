int main () {
    int i;
    int AlGc5O2J3yT;
    int hluTQpjs;
    int kEzetKw3NBJ;
    int LnCbQFAvXSh9;
    i = 0;
    AlGc5O2J3yT = 0;
    hluTQpjs = 0;
    kEzetKw3NBJ = 0;
    LnCbQFAvXSh9 = 0;
    char gen [(842 - 802)];
    int AMxZsF0JLWue;
    AMxZsF0JLWue = 0;
    char eao3mF0 [8];
    float BfrTVopiv [40];
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
    float knQMlRhb [40];
    float FZj875bVa [40];
    int tDJm6f;
    int femalenum;
    tDJm6f = 0;
    femalenum = 0;
    float obx7pMonJv1;
    scanf ("%d", &AMxZsF0JLWue);
    for (i = 0; AMxZsF0JLWue > i; i = i + 1) {
        scanf ("%s %f", &eao3mF0, &BfrTVopiv[i]);
        gen[i] = eao3mF0[0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        knQMlRhb[i] = 0.0;
        FZj875bVa[i] = 0.0;
    }
    for (i = 0; AMxZsF0JLWue > i; i = i + 1) {
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
        if (gen[i] == 'm') {
            knQMlRhb[AlGc5O2J3yT] = BfrTVopiv[i];
            AlGc5O2J3yT = AlGc5O2J3yT +1;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!('f' != gen[i])) {
                FZj875bVa[hluTQpjs] = BfrTVopiv[i];
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
                hluTQpjs = hluTQpjs + 1;
            };
        };
    }
    femalenum = hluTQpjs;
    tDJm6f = AlGc5O2J3yT;
    while (AlGc5O2J3yT--) {
        for (kEzetKw3NBJ = 0; AlGc5O2J3yT > kEzetKw3NBJ; kEzetKw3NBJ = kEzetKw3NBJ + 1) {
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
            if (knQMlRhb[kEzetKw3NBJ] > knQMlRhb[kEzetKw3NBJ + (375 - 374)]) {
                obx7pMonJv1 = knQMlRhb[kEzetKw3NBJ + 1];
                knQMlRhb[kEzetKw3NBJ + 1] = knQMlRhb[kEzetKw3NBJ];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                knQMlRhb[kEzetKw3NBJ] = obx7pMonJv1;
            };
        };
    }
    for (i = 0; tDJm6f > i; i = i + 1)
        printf ("%.2f ", knQMlRhb[i]);
    while (hluTQpjs = hluTQpjs - 1) {
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
        for (kEzetKw3NBJ = 0; kEzetKw3NBJ < hluTQpjs; kEzetKw3NBJ++) {
            if (FZj875bVa[kEzetKw3NBJ] < FZj875bVa[kEzetKw3NBJ + 1]) {
                obx7pMonJv1 = FZj875bVa[kEzetKw3NBJ + 1];
                FZj875bVa[kEzetKw3NBJ + 1] = FZj875bVa[kEzetKw3NBJ];
                FZj875bVa[kEzetKw3NBJ] = obx7pMonJv1;
            };
        };
    }
    {
        i = 0;
        while (i < (femalenum - 1)) {
            printf ("%.2f ", FZj875bVa[i]);
            i = i + 1;
        };
    }
    printf ("%.2f", FZj875bVa[i]);
    return 0;
}

