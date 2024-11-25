void  main () {
    char oDY6Jq4a0wUX [101] = {0};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    for (; !(EOF == scanf ("%s", oDY6Jq4a0wUX));) {
        int i, j, vPDhmbJGc9R, YDH2E5Q17, M5KzRCX;
        printf ("%s\n", oDY6Jq4a0wUX);
        vPDhmbJGc9R = strlen (oDY6Jq4a0wUX);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; vPDhmbJGc9R > i; i = i + 1) {
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
            if (oDY6Jq4a0wUX[i] == '(') {
                M5KzRCX = 0;
                YDH2E5Q17 = 1;
                for (j = i + 1; vPDhmbJGc9R > j; j++) {
                    if (!('(' != oDY6Jq4a0wUX[j]))
                        YDH2E5Q17++;
                    if (!(')' != oDY6Jq4a0wUX[j]))
                        M5KzRCX = M5KzRCX +1;
                    if (YDH2E5Q17 == M5KzRCX) {
                        oDY6Jq4a0wUX[i] = oDY6Jq4a0wUX[j] = ' ';
                        break;
                    };
                };
            };
        }
        {
            i = 0;
            while (i < vPDhmbJGc9R) {
                if (oDY6Jq4a0wUX[i] == '(')
                    oDY6Jq4a0wUX[i] = '$';
                else {
                    if (oDY6Jq4a0wUX[i] == ')')
                        oDY6Jq4a0wUX[i] = '?';
                    else
                        oDY6Jq4a0wUX[i] = ' ';
                }
                i = i + 1;
            };
        }
        printf ("%s\n", oDY6Jq4a0wUX);
    };
}

