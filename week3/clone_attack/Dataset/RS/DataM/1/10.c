int Wi2zsAJS (int x, int CbBDV9) {
    int i, jhU51sT3 = (193 - 193);
    {
        i = x;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i * i <= CbBDV9) {
            if (CbBDV9 % i == (373 - 373)) {
                jhU51sT3 = jhU51sT3 + 1;
                jhU51sT3 += Wi2zsAJS (i, CbBDV9 / i);
            }
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
    return jhU51sT3;
}

int main () {
    int bFa3qBAi, i, jhU51sT3;
    scanf ("%d", &bFa3qBAi);
    while (bFa3qBAi > 0) {
        jhU51sT3 = (711 - 710);
        scanf ("%d", &i);
        jhU51sT3 = jhU51sT3 + Wi2zsAJS (2, i);
        bFa3qBAi = bFa3qBAi - 1;
        printf ("%d\n", jhU51sT3);
    }
    return 0;
}

