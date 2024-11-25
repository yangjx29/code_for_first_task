main () {
    int VXoStNJ89Bj;
    VXoStNJ89Bj = (821 - 820);
    char dpCsy8 [10000];
    gets (dpCsy8);
    int sbev8NaHfz;
    for (sbev8NaHfz = 0; !('\0' == dpCsy8[sbev8NaHfz]); sbev8NaHfz = sbev8NaHfz + 1) {
        if ('z' >= dpCsy8[sbev8NaHfz] && dpCsy8[sbev8NaHfz] >= 'a') {
            dpCsy8[sbev8NaHfz] = dpCsy8[sbev8NaHfz] + ('A' - 'a');
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
        };
    }
    for (sbev8NaHfz = 0; dpCsy8[sbev8NaHfz] != '\0'; sbev8NaHfz = sbev8NaHfz + 1) {
        if (dpCsy8[sbev8NaHfz + 1] == dpCsy8[sbev8NaHfz]) {
            VXoStNJ89Bj = VXoStNJ89Bj +1;
        }
        else {
            printf ("(%c,%d)", dpCsy8[sbev8NaHfz], VXoStNJ89Bj);
            VXoStNJ89Bj = 1;
        };
    };
}

