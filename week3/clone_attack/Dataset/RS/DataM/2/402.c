int main () {
    struct   L10xBiRl {
        int NAdWqPIS;
        char h0f5W6EA [(265 - 238)];
    }
    L10xBiRl [(1694 - 694)];
    int eTqcvbPMGOf6, i, j, CSLXk8pO [(1956 - 956)];
    char ln0NIk6;
    ln0NIk6 = (716 - 716);
    memset (CSLXk8pO, (304 - 304), sizeof (CSLXk8pO));
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
    scanf ("%d", &eTqcvbPMGOf6);
    {
        i = 575 - 575;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (eTqcvbPMGOf6 > i) {
            scanf ("%d%s", &L10xBiRl[i].NAdWqPIS, L10xBiRl[i].h0f5W6EA);
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
            i++;
        };
    }
    {
        i = 0;
        while (eTqcvbPMGOf6 > i) {
            {
                j = 0;
                while (L10xBiRl[i].h0f5W6EA[j]) {
                    if (CSLXk8pO[ln0NIk6] < ++CSLXk8pO[L10xBiRl[i].h0f5W6EA[j]])
                        ln0NIk6 = L10xBiRl[i].h0f5W6EA[j];
                    j = j + 1;
                };
            }
            i++;
        };
    }
    printf ("%c\n%d\n", ln0NIk6, CSLXk8pO[ln0NIk6]);
    {
        i = 0;
        while (i < eTqcvbPMGOf6) {
            if (strchr (L10xBiRl[i].h0f5W6EA, ln0NIk6))
                printf ("%d\n", L10xBiRl[i].NAdWqPIS);
            i++;
        };
    }
    return 0;
}

