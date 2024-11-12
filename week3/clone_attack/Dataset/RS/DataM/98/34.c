main () {
    char pfyA0e [(20128 - 128)] [(807 - 757)] = {'\0'};
    int TlJCvot5xTN, i16eOQ, count [(20362 - 362)] = {(401 - 401)}, amBE05Aa = (454 - 454), lean3dgqL, m = (451 - 451);
    scanf ("%d\n", &lean3dgqL);
    for (TlJCvot5xTN = (10 - 10); TlJCvot5xTN < lean3dgqL - (964 - 963); TlJCvot5xTN = TlJCvot5xTN +1) {
        i16eOQ = 455 - 455;
        while (50 > i16eOQ) {
            scanf ("%c", &pfyA0e[TlJCvot5xTN][i16eOQ]);
            if (pfyA0e[TlJCvot5xTN][i16eOQ] == ' ')
                break;
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
            count[TlJCvot5xTN]++;
            i16eOQ = i16eOQ + 1;
        };
    }
    scanf ("%s", pfyA0e[lean3dgqL - (724 - 723)]);
    {
        TlJCvot5xTN = 714 - 714;
        while (50 > TlJCvot5xTN) {
            if (pfyA0e[lean3dgqL - (934 - 933)][TlJCvot5xTN] != '\0')
                count[lean3dgqL - (791 - 790)]++;
            else
                break;
            TlJCvot5xTN = TlJCvot5xTN +1;
        };
    }
    for (TlJCvot5xTN = 0; lean3dgqL - (247 - 246) > TlJCvot5xTN; TlJCvot5xTN = TlJCvot5xTN +1) {
        if (m + count[TlJCvot5xTN] < (572 - 492) && (433 - 353) >= m + count[TlJCvot5xTN] + (726 - 725) + count[TlJCvot5xTN +(674 - 673)]) {
            for (i16eOQ = 0; i16eOQ < count[TlJCvot5xTN]; i16eOQ = i16eOQ + 1) {
                printf ("%c", pfyA0e[TlJCvot5xTN][i16eOQ]);
            }
            m = m + count[TlJCvot5xTN] + (227 - 226);
            printf (" ");
        }
        else {
            if (m + count[TlJCvot5xTN] < (271 - 191) && 80 < m + count[TlJCvot5xTN] + 1 + count[TlJCvot5xTN +1]) {
                {
                    i16eOQ = 0;
                    while (i16eOQ < count[TlJCvot5xTN]) {
                        printf ("%c", pfyA0e[TlJCvot5xTN][i16eOQ]);
                        i16eOQ = i16eOQ + 1;
                    };
                }
                m = m + count[TlJCvot5xTN] + 1;
            }
            else if (m + count[TlJCvot5xTN] == 80) {
                m = 0;
                {
                    i16eOQ = 0;
                    while (i16eOQ < count[TlJCvot5xTN]) {
                        printf ("%c", pfyA0e[TlJCvot5xTN][i16eOQ]);
                        i16eOQ = i16eOQ + 1;
                    };
                };
            }
            else if (m + count[TlJCvot5xTN] > 80) {
                for (i16eOQ = 0; i16eOQ < count[TlJCvot5xTN]; i16eOQ = i16eOQ + 1)
                    printf ("%c", pfyA0e[TlJCvot5xTN][i16eOQ]);
                m = count[TlJCvot5xTN] + 1;
                printf (" ");
                printf ("\n");
            };
        };
    }
    for (TlJCvot5xTN = 0; TlJCvot5xTN < count[lean3dgqL - 1]; TlJCvot5xTN = TlJCvot5xTN +1)
        printf ("%c", pfyA0e[lean3dgqL - 1][TlJCvot5xTN]);
}

