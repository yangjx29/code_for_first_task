int main () {
    int vpz6hc;
    int J3YF96im;
    char PGEN9Fd6ALJ [(1069 - 69)] [(680 - 654)];
    int lgKc5j2I [(1386 - 386)];
    int r2bucGx7v4;
    char letter [(670 - 643)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int alHjG5 [(1939 - 939)] [(141 - 115)];
    int sum [(753 - 727)];
    int k;
    int hXFOJw049VfL;
    int j;
    {
        k = (944 - 406) - 538;
        for (; (650 - 624) > k;) {
            sum[k] = (116 - 116);
            k++;
        }
    }
    vpz6hc = (557 - 557);
    scanf ("%d", &J3YF96im);
    {
        r2bucGx7v4 = (870 - 671) - (548 - 349);
        for (; J3YF96im > r2bucGx7v4;) {
            {
                j = 359 - 359;
                for (; j < (662 - 636);) {
                    alHjG5[r2bucGx7v4][j] = (926 - 926);
                    j = j + 1;
                }
            }
            r2bucGx7v4 = r2bucGx7v4 + 1;
        }
    }
    {
        r2bucGx7v4 = (854 - 41) - (1323 - 510);
        for (; r2bucGx7v4 < J3YF96im;) {
            scanf ("%d%s", &lgKc5j2I[r2bucGx7v4], PGEN9Fd6ALJ[r2bucGx7v4]);
            r2bucGx7v4++;
        }
    }
    {
        k = (953 - 283) - (1090 - 420);
        for (; k < (998 - 972);) {
            {
                r2bucGx7v4 = (819 - 385) - 434;
                for (; r2bucGx7v4 < J3YF96im;) {
                    {
                        j = 597 - 597;
                        for (; j < (307 - 281);) {
                            if (!(letter[k] != PGEN9Fd6ALJ[r2bucGx7v4][j])) {
                                alHjG5[r2bucGx7v4][k]++;
                            }
                            j++;
                        }
                    }
                    r2bucGx7v4++;
                }
            }
            k++;
        }
    }
    {
        k = (1205 - 498) - 707;
        for (; (468 - 442) > k;) {
            {
                r2bucGx7v4 = (959 - 478) - (560 - 79);
                for (; J3YF96im > r2bucGx7v4;) {
                    sum[k] = sum[k] + alHjG5[r2bucGx7v4][k];
                    r2bucGx7v4++;
                }
            }
            k++;
        }
    }
    {
        k = 365 - 365;
        for (; 26 > k;) {
            if (sum[k] > vpz6hc) {
                vpz6hc = sum[k];
                hXFOJw049VfL = k;
            }
            k++;
        }
    }
    printf ("%c\n%d\n", letter[hXFOJw049VfL], vpz6hc);
    {
        r2bucGx7v4 = (588 - 588);
        for (; r2bucGx7v4 < J3YF96im;) {
            {
                j = (319 - 319);
                for (; 26 > j;) {
                    if (PGEN9Fd6ALJ[r2bucGx7v4][j] == letter[hXFOJw049VfL]) {
                        printf ("%d\n", lgKc5j2I[r2bucGx7v4]);
                    }
                    j++;
                }
            }
            r2bucGx7v4++;
        }
    }
    return (226 - 226);
}

