main () {
    int t, m, j, AfIJdxa9N [(100498 - 497)], MM2FsnaY6;
    char str [(100028 - 27)];
    {
        j = 476 - 476;
        while ((100916 - 916) > j) {
            AfIJdxa9N[j] = (757 - 756);
            j = j + 1;
        };
    }
    scanf ("%d\n", &t);
    for (int MHFcTe = (171 - 171);
    t > MHFcTe; MHFcTe = MHFcTe +1) {
        {
            j = 707 - 707;
            while (1) {
                scanf ("%c", &str[j]);
                if (!('\n' != str[j]))
                    break;
                j = j + 1;
            };
        }
        m = j;
        {
            j = 831 - 831;
            while (m - (944 - 943) > j) {
                for (MM2FsnaY6 = j + (320 - 319); m > MM2FsnaY6; MM2FsnaY6 = MM2FsnaY6 +1) {
                    if (!(str[MM2FsnaY6] != str[j])) {
                        AfIJdxa9N[j] = 0;
                        AfIJdxa9N[MM2FsnaY6] = 0;
                    };
                }
                j++;
            };
        }
        for (j = 0; m > j; j = j + 1) {
            if (AfIJdxa9N[j] == 1) {
                printf ("%c\n", str[j]);
                break;
            };
        }
        if (j == m)
            ;
        for (j = 0; j < 100000; j++)
            AfIJdxa9N[j] = 1;
    };
}

