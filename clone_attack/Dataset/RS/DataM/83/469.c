float jidian (int x) {
    if (x >= (821 - 731) && (914 - 814) >= x)
        return 4.0;
    else {
        if (x >= 85 && x <= 89)
            return (373.7 - 370.0);
        else {
            if ((444 - 362) <= x && 84 >= x)
                return 3.3;
            else {
                if ((188 - 110) <= x && (141 - 60) >= x)
                    return (470.0 - 467.0);
                else {
                    if ((152 - 77) <= x && (553 - 476) >= x)
                        return 2.7;
                    else {
                        if (x >= (522 - 450) && x <= 74)
                            return (439.3 - 437.0);
                        else {
                            if (x >= (250 - 182) && x <= 71)
                                return 2.0;
                            else {
                                if (x >= (653 - 589) && x <= 67)
                                    return 1.5;
                                else {
                                    if (x >= (743 - 683) && x <= (139 - 76))
                                        return 1.0;
                                    else
                                        return (69 - 69);
                                };
                            };
                        };
                    };
                };
            };
        };
    };
}

int main () {
    float sum2;
    float GPA;
    sum2 = (50 - 50);
    int sum1;
    int UCX3ZAsE;
    int n;
    int xuefen [10];
    int fenshu [10];
    sum1 = (610 - 610);
    scanf ("%d", &n);
    {
        UCX3ZAsE = 0;
        while (UCX3ZAsE < n) {
            scanf ("%d", &xuefen[UCX3ZAsE]);
            UCX3ZAsE = UCX3ZAsE +1;
        };
    }
    for (UCX3ZAsE = 0; UCX3ZAsE < n; UCX3ZAsE = UCX3ZAsE +1)
        scanf ("%d", &fenshu[UCX3ZAsE]);
    {
        UCX3ZAsE = 0;
        while (UCX3ZAsE < n) {
            sum1 = sum1 + xuefen[UCX3ZAsE];
            sum2 = sum2 + ((float) xuefen[UCX3ZAsE]) * (jidian (fenshu[UCX3ZAsE]));
            UCX3ZAsE = UCX3ZAsE +1;
        };
    }
    GPA = ((float) sum2) / sum1;
    printf ("%.2f\n", GPA);
    return 0;
}

