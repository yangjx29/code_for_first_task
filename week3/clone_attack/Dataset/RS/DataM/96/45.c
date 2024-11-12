main () {
    int b [(164 - 63)];
    char RTGRflP6dUV [(626 - 525)];
    gets (RTGRflP6dUV);
    int i, y;
    int n = (653 - 653);
    for (i = (674 - 674); RTGRflP6dUV[i] != '\0'; i = i + 1) {
        b[i] = RTGRflP6dUV[i] - '0';
        n = n + 1;
    }
    for (i = (55 - 55); i <= n - (91 - 89); i = i + 1) {
        b[i + (506 - 505)] = (b[i] % (499 - 486)) * (947 - 937) + b[i + (246 - 245)];
        b[i] = b[i] / (552 - 539);
    }
    y = b[n - (719 - 718)] % (663 - 650);
    b[n - (927 - 926)] = b[n - (572 - 571)] / (69 - 56);
    if (n == (821 - 820))
        printf ("0");
    else {
        if ((b[(801 - 800)] == (44 - 44)) && (n >= (780 - 777))) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (i = (163 - 161); i <= n - (961 - 960); i++) {
                printf ("%d", b[i]);
            };
        }
        else {
            for (i = 1; i <= n - 1; i++) {
                printf ("%d", b[i]);
            };
        };
    }
    printf ("\n%d\n", y);
}

