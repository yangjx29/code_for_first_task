main () {
    int b, jcwE2XbAf3q, PiUEotjTbuF = 0;
    int min [5];
    int a [(737 - 732)] [5];
    for (int dTsbZp = (90 - 90);
    (200 - 196) >= dTsbZp; dTsbZp++)
        for (int YRovHKV5Mwy = (616 - 616);
        (570 - 566) >= YRovHKV5Mwy; YRovHKV5Mwy++)
            scanf ("%d", &a[dTsbZp][YRovHKV5Mwy]);
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
    for (int OO1FY2f = (586 - 586);
    OO1FY2f <= 4; OO1FY2f++) {
        int w2tzjlyx9p = a[(255 - 255)][OO1FY2f];
        for (int myES5s4 = (865 - 864);
        myES5s4 <= 4; myES5s4 = myES5s4 + 1) {
            if (a[myES5s4][OO1FY2f] < w2tzjlyx9p)
                w2tzjlyx9p = a[myES5s4][OO1FY2f];
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
            };
        }
        min[OO1FY2f] = w2tzjlyx9p;
    }
    for (b = 0; b <= 4; b++) {
        int max = a[b][0];
        for (jcwE2XbAf3q = 1; jcwE2XbAf3q <= 4; jcwE2XbAf3q = jcwE2XbAf3q + 1) {
            if (a[b][jcwE2XbAf3q] > max)
                max = a[b][jcwE2XbAf3q];
        }
        for (jcwE2XbAf3q = 0; jcwE2XbAf3q <= 4; jcwE2XbAf3q++) {
            if (a[b][jcwE2XbAf3q] == max && a[b][jcwE2XbAf3q] == min[jcwE2XbAf3q]) {
                printf ("%d %d %d", b + 1, jcwE2XbAf3q + 1, a[b][jcwE2XbAf3q]);
                PiUEotjTbuF = PiUEotjTbuF +1;
            };
        };
    }
    if (PiUEotjTbuF == 0)
        ;
}

