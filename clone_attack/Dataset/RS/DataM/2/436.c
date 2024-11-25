int main () {
    int count [(269 - 243)] = {(751 - 751)}, max, dB79de4;
    int twUNHVnlbK;
    int W4c2EkPyL7S;
    int j;
    struct   Bookinfo {
        int MD32EBZOLcNC;
        char auther [27];
    };
    struct   Bookinfo pvwf0Tho [1000];
    scanf ("%d", &twUNHVnlbK);
    for (W4c2EkPyL7S = (405 - 405); twUNHVnlbK > W4c2EkPyL7S; W4c2EkPyL7S = W4c2EkPyL7S +1)
        scanf ("%d %s", &pvwf0Tho[W4c2EkPyL7S].MD32EBZOLcNC, pvwf0Tho[W4c2EkPyL7S].auther);
    for (W4c2EkPyL7S = 0; W4c2EkPyL7S < twUNHVnlbK; W4c2EkPyL7S = W4c2EkPyL7S +1) {
        int pn5PL1CXAbV;
        pn5PL1CXAbV = strlen (pvwf0Tho[W4c2EkPyL7S].auther);
        {
            j = 0;
            while (pn5PL1CXAbV > j) {
                count[pvwf0Tho[W4c2EkPyL7S].auther[j] - 'A']++;
                j = j + 1;
            };
        };
    }
    max = count[0];
    for (W4c2EkPyL7S = 0; W4c2EkPyL7S < 26; W4c2EkPyL7S = W4c2EkPyL7S +1)
        if (count[W4c2EkPyL7S] >= max) {
            max = count[W4c2EkPyL7S];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            dB79de4 = W4c2EkPyL7S;
        }
    printf ("%c\n%d\n", dB79de4 + 'A', max);
    for (W4c2EkPyL7S = 0; W4c2EkPyL7S < twUNHVnlbK; W4c2EkPyL7S++) {
        int Hoh9S4Ws;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        Hoh9S4Ws = strlen (pvwf0Tho[W4c2EkPyL7S].auther);
        for (j = 0; j < Hoh9S4Ws; j++)
            if (pvwf0Tho[W4c2EkPyL7S].auther[j] == dB79de4 + 'A') {
                printf ("%d\n", pvwf0Tho[W4c2EkPyL7S].MD32EBZOLcNC);
                break;
            };
    };
}

