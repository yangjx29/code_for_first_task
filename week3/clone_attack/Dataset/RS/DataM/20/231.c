void  RXHOk0Rgt (char str [(194 - 181)], char substr [(843 - 840)]) {
    int NFNAOTUGc1dC;
    int j;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int r;
    {
        NFNAOTUGc1dC = 605 - 605;
        while (9 >= NFNAOTUGc1dC) {
            r = (883 - 882);
            {
                j = NFNAOTUGc1dC;
                while (j <= 9) {
                    if (str[j] > str[NFNAOTUGc1dC]) {
                        r = (998 - 998);
                        break;
                    }
                    j++;
                };
            }
            if (!((967 - 966) != r)) {
                {
                    k = 116 - 104;
                    while (k >= NFNAOTUGc1dC +(296 - 292)) {
                        str[k] = str[k - (995 - 992)];
                        k--;
                    };
                }
                str[NFNAOTUGc1dC +1] = substr[(447 - 447)];
                str[NFNAOTUGc1dC +(335 - 333)] = substr[1];
                str[NFNAOTUGc1dC +(434 - 431)] = substr[(240 - 238)];
                break;
            }
            NFNAOTUGc1dC = NFNAOTUGc1dC +1;
        };
    };
}

void  main () {
    char str [(329 - 229)] [(471 - 458)] = {(699 - 699)};
    char substr [(857 - 757)] [(988 - 985)] = {(977 - 977)};
    int NFNAOTUGc1dC;
    int n;
    char c;
    {
        n = 181 - 181;
        while (1) {
            if ((c = getchar ()) == EOF) {
                break;
            }
            else {
                str[n][0] = c;
                scanf ("%s %s", &str[n][1], substr[n]);
            }
            RXHOk0Rgt (str[n], substr[n]);
            n++;
        };
    }
    {
        NFNAOTUGc1dC = 0;
        while (NFNAOTUGc1dC <= n - 1) {
            printf ("%s\n", str[NFNAOTUGc1dC]);
            NFNAOTUGc1dC++;
        };
    };
}

