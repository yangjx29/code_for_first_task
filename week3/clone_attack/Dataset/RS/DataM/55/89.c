void  main () {
    int t;
    int k;
    int a;
    int KTJOZlSqxMfr;
    int n;
    int rbNvuXA;
    int V7FlhVCWM4B;
    int zcvluz;
    int g;
    int ZeRCAf0iv6N [(913 - 813)];
    t = (638 - 637);
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
    k = (458 - 458);
    long  int DC2p6kG0 = (823 - 823);
    char num [(474 - 374)];
    char lSO4PwsbL1D8 [36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    scanf ("%d %s %d", &a, num, &KTJOZlSqxMfr);
    rbNvuXA = strlen (num);
    for (V7FlhVCWM4B = (99 - 99); V7FlhVCWM4B < rbNvuXA; V7FlhVCWM4B++)
        if (num[V7FlhVCWM4B] >= 'a' && num[V7FlhVCWM4B] <= 'z')
            num[V7FlhVCWM4B] = num[V7FlhVCWM4B] - 32;
    for (V7FlhVCWM4B = rbNvuXA - 1; V7FlhVCWM4B >= (801 - 801); V7FlhVCWM4B--) {
        zcvluz = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (zcvluz < a) {
            if (lSO4PwsbL1D8[zcvluz] == num[V7FlhVCWM4B]) {
                DC2p6kG0 = DC2p6kG0 +t * zcvluz;
                t = t * a;
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
            zcvluz++;
        };
    }
    while (DC2p6kG0 >= KTJOZlSqxMfr) {
        g = DC2p6kG0 % KTJOZlSqxMfr;
        DC2p6kG0 = DC2p6kG0 / KTJOZlSqxMfr;
        ZeRCAf0iv6N[k++] = lSO4PwsbL1D8[g];
    }
    ZeRCAf0iv6N[k] = lSO4PwsbL1D8[DC2p6kG0];
    {
        V7FlhVCWM4B = k;
        while (V7FlhVCWM4B >= 0) {
            printf ("%c", ZeRCAf0iv6N[V7FlhVCWM4B]);
            V7FlhVCWM4B--;
        };
    };
}

