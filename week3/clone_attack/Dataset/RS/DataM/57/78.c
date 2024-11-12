void  main () {
    char str [51] [32];
    char t;
    int K4iwfvxNaYD;
    int Oj1vg0bAMK;
    int j;
    K4iwfvxNaYD = 1;
    scanf ("%d", &Oj1vg0bAMK);
    for (; Oj1vg0bAMK >= K4iwfvxNaYD;) {
        scanf ("%s", str[K4iwfvxNaYD]);
        K4iwfvxNaYD = K4iwfvxNaYD +1;
    }
    for (K4iwfvxNaYD = 1; K4iwfvxNaYD <= Oj1vg0bAMK; K4iwfvxNaYD++) {
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
        for (j = 1; j <= 32; j = j + 1) {
            if (!('e' != str[K4iwfvxNaYD][j]) && str[K4iwfvxNaYD][j + 1] == 'r' && str[K4iwfvxNaYD][j + 2] == '\0')
                str[K4iwfvxNaYD][j] = '\0';
            else if (str[K4iwfvxNaYD][j] == 'l' && str[K4iwfvxNaYD][j + 1] == 'y' && str[K4iwfvxNaYD][j + 2] == '\0')
                str[K4iwfvxNaYD][j] = '\0';
            else if (str[K4iwfvxNaYD][j] == 'i' && str[K4iwfvxNaYD][j + 1] == 'n' && str[K4iwfvxNaYD][j + 2] == 'g' && str[K4iwfvxNaYD][j + 3] == '\0')
                str[K4iwfvxNaYD][j] = '\0';
        };
    }
    for (K4iwfvxNaYD = 1; K4iwfvxNaYD <= Oj1vg0bAMK; K4iwfvxNaYD++) {
        printf ("%s\n", str[K4iwfvxNaYD]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

