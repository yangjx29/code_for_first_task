void  main () {
    struct   student {
        char name [20];
        int score;
        int fz8inlk2WJy;
        char leader;
        char ek4z3oZMG;
        int paper;
    }
    uK8Egvfa7H5V [100];
    int CdUaE1xbqzf;
    int i;
    int sum [100];
    int b;
    int U0yIBJW7;
    int max;
    scanf ("%d", &CdUaE1xbqzf);
    for (i = 0; i < CdUaE1xbqzf; i = i + 1)
        scanf ("%s%d%d %c %c%d", uK8Egvfa7H5V[i].name, &uK8Egvfa7H5V[i].score, &uK8Egvfa7H5V[i].fz8inlk2WJy, &uK8Egvfa7H5V[i].leader, &uK8Egvfa7H5V[i].ek4z3oZMG, &uK8Egvfa7H5V[i].paper);
    for (i = 0; i < CdUaE1xbqzf; i = i + 1) {
        sum[i] = 0;
        if (uK8Egvfa7H5V[i].score > 80 && uK8Egvfa7H5V[i].paper > 0)
            sum[i] = sum[i] + 8000;
        if (uK8Egvfa7H5V[i].score > 85) {
            if (uK8Egvfa7H5V[i].fz8inlk2WJy > 80)
                sum[i] = sum[i] + 4000;
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
            if (!('Y' != uK8Egvfa7H5V[i].ek4z3oZMG))
                sum[i] = sum[i] + 1000;
        }
        if (uK8Egvfa7H5V[i].score > 90)
            sum[i] = sum[i] + 2000;
        if (uK8Egvfa7H5V[i].leader == 'Y' && uK8Egvfa7H5V[i].fz8inlk2WJy > 80)
            sum[i] = sum[i] + 850;
    }
    U0yIBJW7 = sum[0];
    max = sum[0];
    b = 0;
    {
        i = 1;
        while (i < CdUaE1xbqzf) {
            if (max < sum[i]) {
                max = sum[i];
                b = i;
            }
            U0yIBJW7 = U0yIBJW7 +sum[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%d", uK8Egvfa7H5V[b].name, sum[b], U0yIBJW7);
}

