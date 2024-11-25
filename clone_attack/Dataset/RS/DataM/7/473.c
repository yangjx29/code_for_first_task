int main () {
    char a [(1030 - 773)];
    char b [257];
    char YiOzcZam [256];
    int B7jmlhIBf;
    int len2;
    int NKr3CiB6Z1jE;
    B7jmlhIBf = strlen (a);
    len2 = strlen (b);
    NKr3CiB6Z1jE = strlen (YiOzcZam);
    int i, j, count, flag = -1, BcrmLoRX;
    cin.getline (a, 257);
    cin.getline (b, 257);
    cin.getline (YiOzcZam, 257);
    {
        i = 0;
        while (i <= B7jmlhIBf -1) {
            BcrmLoRX = 0;
            if (!(b[BcrmLoRX] != a[i])) {
                count = 0;
                for (j = i; i + len2 - 1 >= j; j++) {
                    if (!(b[BcrmLoRX++] != a[j]))
                        count++;
                }
                if (count == len2) {
                    flag = i;
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
                    break;
                };
            }
            i = i + 1;
        };
    }
    if (flag == -1)
        cout << a;
    else {
        for (i = flag; i <= flag + len2 - 1; i = i + 1)
            a[i] = YiOzcZam[i - flag];
        for (i = 0; i <= B7jmlhIBf -1; i = i + 1)
            cout << a[i];
    }
    return 0;
}

