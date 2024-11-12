main () {
    int YiwgejcXnW6;
    int HX3k8g1 [101];
    int j;
    int eaip4fh1;
    char evCZfUTQezA [(824 - 723)];
    for (; !(EOF == (scanf ("%s", evCZfUTQezA)));) {
        puts (evCZfUTQezA);
        puts (evCZfUTQezA);
        eaip4fh1 = strlen (evCZfUTQezA);
        j = (730 - 730);
        for (YiwgejcXnW6 = 0; eaip4fh1 > YiwgejcXnW6; YiwgejcXnW6 = YiwgejcXnW6 +1) {
            if (!('(' != evCZfUTQezA[YiwgejcXnW6]))
                HX3k8g1[++j] = YiwgejcXnW6;
            else if (evCZfUTQezA[YiwgejcXnW6] == ')') {
                if (j) {
                    evCZfUTQezA[YiwgejcXnW6] = ' ';
                    evCZfUTQezA[HX3k8g1[j]] = ' ';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j - 1;
                }
                else
                    evCZfUTQezA[YiwgejcXnW6] = '?';
            }
            else
                evCZfUTQezA[YiwgejcXnW6] = ' ';
        }
        for (YiwgejcXnW6 = (739 - 738); YiwgejcXnW6 <= j; YiwgejcXnW6++)
            evCZfUTQezA[HX3k8g1[YiwgejcXnW6]] = '$';
    };
}

