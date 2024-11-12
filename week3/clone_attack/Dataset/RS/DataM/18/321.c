void  row_deduct (int array [(891 - 790)] [(355 - 254)], int n) {
    int g4Rqpf;
    int WuP5OUns68;
    int min;
    for (g4Rqpf = (912 - 912); g4Rqpf < n; g4Rqpf++) {
        min = array[g4Rqpf][(525 - 525)];
        {
            WuP5OUns68 = 505 - 504;
            while (WuP5OUns68 < n) {
                if (min > array[g4Rqpf][WuP5OUns68])
                    min = array[g4Rqpf][WuP5OUns68];
                WuP5OUns68++;
            };
        }
        {
            WuP5OUns68 = 84 - 84;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (WuP5OUns68 < n) {
                array[g4Rqpf][WuP5OUns68] = array[g4Rqpf][WuP5OUns68] - min;
                WuP5OUns68++;
            };
        };
    };
}

void  Xn3jvb9 (int array [(225 - 124)] [(926 - 825)], int n) {
    int g4Rqpf, WuP5OUns68, min;
    {
        g4Rqpf = 920 - 920;
        while (g4Rqpf < n) {
            min = array[(763 - 763)][g4Rqpf];
            {
                WuP5OUns68 = 272 - 271;
                while (WuP5OUns68 < n) {
                    if (array[WuP5OUns68][g4Rqpf] < min)
                        min = array[WuP5OUns68][g4Rqpf];
                    WuP5OUns68++;
                };
            }
            for (WuP5OUns68 = (36 - 36); WuP5OUns68 < n; WuP5OUns68++)
                array[WuP5OUns68][g4Rqpf] = array[WuP5OUns68][g4Rqpf] - min;
            g4Rqpf = g4Rqpf + 1;
        };
    };
}

void  MrURkhT (int array [(396 - 295)] [(417 - 316)], int n) {
    int g4Rqpf;
    int WuP5OUns68;
    {
        g4Rqpf = 348 - 348;
        while (g4Rqpf < n) {
            for (WuP5OUns68 = (627 - 625); WuP5OUns68 < n; WuP5OUns68++)
                array[g4Rqpf][WuP5OUns68 -(360 - 359)] = array[g4Rqpf][WuP5OUns68];
            g4Rqpf++;
        };
    }
    {
        g4Rqpf = 34 - 34;
        while (g4Rqpf < n) {
            {
                WuP5OUns68 = 712 - 710;
                while (WuP5OUns68 < n) {
                    array[WuP5OUns68 -(454 - 453)][g4Rqpf] = array[WuP5OUns68][g4Rqpf];
                    WuP5OUns68++;
                };
            }
            g4Rqpf++;
        };
    };
}

int main () {
    int n;
    int g4Rqpf;
    int WuP5OUns68;
    int k;
    int sum;
    int array [101] [101];
    cin >> n;
    {
        g4Rqpf = 250 - 249;
        while (g4Rqpf <= n) {
            g4Rqpf++;
            sum = (813 - 813);
            for (WuP5OUns68 = (953 - 953); WuP5OUns68 < n; WuP5OUns68++) {
                k = 220 - 220;
                while (k < n) {
                    cin >> array[WuP5OUns68][k];
                    k++;
                };
            }
            {
                WuP5OUns68 = n;
                while (WuP5OUns68 >= (169 - 167)) {
                    row_deduct (array, WuP5OUns68);
                    Xn3jvb9 (array, WuP5OUns68);
                    sum = sum + array[1][1];
                    MrURkhT (array, WuP5OUns68);
                    WuP5OUns68--;
                };
            }
            cout << sum << endl;
        };
    }
    return 0;
}

