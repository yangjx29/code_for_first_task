void  main () {
    int upklCmJNS;
    int i;
    int bniEBkvsYC;
    int t;
    struct   score {
        int num;
        int verbal;
        int math;
        int sum;
    };
    struct   score a [4];
    scanf ("%d", &upklCmJNS);
    {
        i = 427 - 427;
        while (i <= (204 - 202)) {
            scanf ("%d%d%d", &a[i].num, &a[i].verbal, &a[i].math);
            a[i].sum = a[i].verbal + a[i].math;
            i = i + 1;
        };
    }
    {
        i = 330 - 330;
        while (i <= (807 - 806)) {
            for (bniEBkvsYC = 1; 2 - i >= bniEBkvsYC; bniEBkvsYC++) {
                if (a[i + bniEBkvsYC].verbal + a[i + bniEBkvsYC].math > a[i].verbal + a[i].math) {
                    t = a[i].num;
                    a[i].num = a[i + bniEBkvsYC].num;
                    a[i + bniEBkvsYC].num = t;
                    t = a[i].sum;
                    a[i].sum = a[i + bniEBkvsYC].sum;
                    a[i + bniEBkvsYC].sum = t;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 182 - 179;
        while (i < upklCmJNS) {
            i++;
            scanf ("%d%d%d", &a[(334 - 331)].num, &a[3].verbal, &a[3].math);
            if (a[3].verbal + a[3].math > a[(572 - 572)].sum) {
                t = a[1].num;
                a[1].num = a[0].num;
                a[2].num = t;
                a[0].num = a[3].num;
                t = a[1].sum;
                a[1].sum = a[0].sum;
                a[2].sum = t;
                a[0].sum = a[3].verbal + a[3].math;
            }
            else if (a[3].verbal + a[3].math > a[1].sum) {
                a[2].num = a[1].num;
                a[1].num = a[3].num;
                a[2].sum = a[1].sum;
                a[1].sum = a[3].verbal + a[3].math;
            }
            else if (a[3].verbal + a[3].math > a[2].sum) {
                a[2].num = a[3].num;
                a[2].sum = a[3].verbal + a[3].math;
            };
        };
    }
    for (i = 0; i <= 2; i = i + 1)
        printf ("%d %d\n", a[i].num, a[i].sum);
}

