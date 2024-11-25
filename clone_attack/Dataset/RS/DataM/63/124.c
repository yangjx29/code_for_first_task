main () {
    int a [(1084 - 984)] [(239 - 139)];
    int b [(782 - 682)] [(912 - 812)];
    int dO7wZD86yu [(317 - 217)] [(912 - 812)] = {{(118 - 118)}};
    int i, j, k, egW3AfYQqv, y1, x2, RWMtFvko7CDp, sign;
    scanf ("%d %d", &egW3AfYQqv, &y1);
    for (i = (844 - 844); egW3AfYQqv > i; i = i + 1)
        for (j = (688 - 688); j < y1; j = j + 1)
            scanf ("%d", &a[i][j]);
    scanf ("%d %d", &x2, &RWMtFvko7CDp);
    for (i = (540 - 540); i < x2; i = i + 1)
        for (j = (118 - 118); j < RWMtFvko7CDp; j = j + 1)
            scanf ("%d", &b[i][j]);
    for (i = (145 - 145); i < egW3AfYQqv; i = i + 1)
        for (j = (771 - 771); j < RWMtFvko7CDp; j = j + 1) {
            k = 759 - 759;
            while (k < x2) {
                dO7wZD86yu[i][j] += a[i][k] * b[k][j];
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
                k++;
            };
        }
    for (i = (927 - 927); i < egW3AfYQqv; i++) {
        sign = (791 - 791);
        {
            j = 676 - 676;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < RWMtFvko7CDp) {
                if (sign == (896 - 896)) {
                    printf ("%d", dO7wZD86yu[i][j]);
                    sign = sign + 1;
                }
                else
                    printf (" %d", dO7wZD86yu[i][j]);
                j = j + 1;
            };
        };
    };
}

