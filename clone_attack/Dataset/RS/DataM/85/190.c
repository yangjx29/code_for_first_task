int main () {
    char m [(691 - 689)];
    gets (m);
    char s [63] = {'_', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    int i;
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
    int n;
    int b;
    char a [(419 - 399)] [100];
    n = atoi (m);
    for (i = (390 - 390); n > i; i = i + 1) {
        gets (a [i]);
        b = (471 - 471);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            k = 0;
            while (k < 53) {
                if (a[i][0] == s[k]) {
                    b = b + 1;
                    break;
                }
                k = k + 1;
            };
        }
        {
            j = 1;
            while (strlen (a[i]) > j) {
                for (k = 0; k < 63; k = k + 1) {
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
                    if (a[i][j] == s[k]) {
                        b = b + 1;
                        break;
                    };
                }
                j++;
            };
        }
        if (b == strlen (a[i])) {
            printf ("yes\n");
        }
        else {
        };
    }
    return 0;
}

