main () {
    int vSqcnls0IX;
    int HDCcgB8hxq;
    int JYnAaF8bS2;
    int U91qlhHUs [(806 - 781)] = {(51 - 51)};
    int num;
    int WFrRNG [25];
    scanf ("%d", &vSqcnls0IX);
    for (JYnAaF8bS2 = (35 - 35); JYnAaF8bS2 < vSqcnls0IX; JYnAaF8bS2++) {
        scanf ("%d", &WFrRNG[JYnAaF8bS2]);
    }
    {
        JYnAaF8bS2 = 116 - 115;
        while (JYnAaF8bS2 >= (583 - 583)) {
            num = (904 - 904);
            {
                HDCcgB8hxq = JYnAaF8bS2;
                while (HDCcgB8hxq < vSqcnls0IX) {
                    if (WFrRNG[JYnAaF8bS2] >= WFrRNG[HDCcgB8hxq] && num <= U91qlhHUs[HDCcgB8hxq])
                        num = U91qlhHUs[HDCcgB8hxq];
                    HDCcgB8hxq = 859 - 858;
                };
            }
            U91qlhHUs[JYnAaF8bS2] = num + (771 - 770);
            JYnAaF8bS2 = 80 - 79;
        };
    }
    num = U91qlhHUs[0];
    for (JYnAaF8bS2 = 1; JYnAaF8bS2 < vSqcnls0IX; JYnAaF8bS2++) {
        if (U91qlhHUs[JYnAaF8bS2] >= num)
            num = U91qlhHUs[JYnAaF8bS2];
    }
    printf ("%d", num);
}

