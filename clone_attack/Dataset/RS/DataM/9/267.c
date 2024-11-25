void  main () {
    struct   patient {
        char SsyoPX9Z5J [(700 - 690)];
        int age;
    }
    a [(926 - 826)];
    int AoOHqpl3a5z;
    int q0cM1V2kK;
    int j;
    int b [(871 - 771)] = {(366 - 366)};
    int t;
    int m;
    scanf ("%d\n", &AoOHqpl3a5z);
    for (q0cM1V2kK = (234 - 234); AoOHqpl3a5z > q0cM1V2kK; q0cM1V2kK++) {
        scanf ("%s %d\n", a[q0cM1V2kK].SsyoPX9Z5J, &a[q0cM1V2kK].age);
        b[q0cM1V2kK] = a[q0cM1V2kK].age;
    }
    for (j = (162 - 162); AoOHqpl3a5z -(745 - 744) > j; j = j + 1) {
        q0cM1V2kK = 0;
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
        while (q0cM1V2kK < AoOHqpl3a5z -1 - j) {
            if (b[q0cM1V2kK] < b[q0cM1V2kK + 1]) {
                t = b[q0cM1V2kK];
                b[q0cM1V2kK] = b[q0cM1V2kK + 1];
                b[q0cM1V2kK + 1] = t;
            }
            q0cM1V2kK = q0cM1V2kK + 1;
        };
    }
    {
        q0cM1V2kK = 0;
        while (AoOHqpl3a5z > q0cM1V2kK) {
            if (b[q0cM1V2kK] < 60) {
                m = q0cM1V2kK;
                break;
            }
            q0cM1V2kK = q0cM1V2kK + 1;
        };
    }
    {
        j = 0;
        while (m > j) {
            for (q0cM1V2kK = 0; q0cM1V2kK < AoOHqpl3a5z; q0cM1V2kK++)
                if (a[q0cM1V2kK].age == b[j] && (j == 0 || b[j] != b[j - 1]))
                    printf ("%s\n", a[q0cM1V2kK].SsyoPX9Z5J);
            j = j + 1;
        };
    }
    {
        q0cM1V2kK = 0;
        while (q0cM1V2kK < AoOHqpl3a5z) {
            if (a[q0cM1V2kK].age < 60)
                printf ("%s\n", a[q0cM1V2kK].SsyoPX9Z5J);
            q0cM1V2kK++;
        };
    };
}

