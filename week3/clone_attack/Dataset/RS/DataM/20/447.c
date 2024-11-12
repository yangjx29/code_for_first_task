int main () {
    char VXoJI8U4;
    char Q75I0cf3odOJ [11], HNglx0RbfqW [4];
    int xsjf9uM, WMVEed;
    while (scanf ("%s%s", Q75I0cf3odOJ, HNglx0RbfqW) != EOF) {
        WMVEed = 0;
        VXoJI8U4 = Q75I0cf3odOJ[0];
        {
            xsjf9uM = 1;
            while (xsjf9uM < strlen (Q75I0cf3odOJ)) {
                if (Q75I0cf3odOJ[xsjf9uM] > VXoJI8U4) {
                    WMVEed = xsjf9uM;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    VXoJI8U4 = Q75I0cf3odOJ[xsjf9uM];
                }
                xsjf9uM = xsjf9uM + 1;
            };
        }
        for (xsjf9uM = 0; xsjf9uM <= WMVEed; xsjf9uM++)
            printf ("%c", Q75I0cf3odOJ[xsjf9uM]);
        printf ("%s", HNglx0RbfqW);
        {
            xsjf9uM = WMVEed +1;
            while (xsjf9uM < strlen (Q75I0cf3odOJ)) {
                if (Q75I0cf3odOJ[xsjf9uM] == '\0')
                    break;
                else
                    printf ("%c", Q75I0cf3odOJ[xsjf9uM]);
                xsjf9uM++;
            };
        };
    }
    return 0;
}

