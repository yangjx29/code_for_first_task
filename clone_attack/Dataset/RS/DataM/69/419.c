int maxi (int a, int b) {
    if (a < b)
        return b;
    else
        return a;
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
}

int main () {
    char flag;
    char a [(700 - 440)];
    char b [(1236 - 976)];
    flag = (838 - 838);
    int x1uISoRcQrM [(883 - 623)], O8LqnsZSc [(957 - 697)], nAZkY1p [(1078 - 818)], i, vyDuINo = (954 - 954);
    int lena = strlen (a), lenb = strlen (b);
    int m = maxi (lena, lenb);
    cin.getline (a, (775 - 524));
    cin.getline (b, 251);
    memset (x1uISoRcQrM, (915 - 915), sizeof (x1uISoRcQrM));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    memset (O8LqnsZSc, (21 - 21), sizeof (O8LqnsZSc));
    memset (nAZkY1p, (517 - 517), sizeof (nAZkY1p));
    for (i = lena - (738 - 737); i >= (378 - 378); i = i - 1)
        x1uISoRcQrM[vyDuINo++] = a[i] - '0';
    vyDuINo = (239 - 239);
    {
        i = 487 - 486;
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
        while ((748 - 748) <= i) {
            O8LqnsZSc[vyDuINo++] = b[i] - '0';
            i = i - 1;
        };
    }
    {
        i = 631 - 631;
        while (i < m) {
            nAZkY1p[i] = nAZkY1p[i] + x1uISoRcQrM[i] + O8LqnsZSc[i];
            if (nAZkY1p[i] >= (848 - 838)) {
                nAZkY1p[i] = nAZkY1p[i] - (593 - 583);
                nAZkY1p[i + (586 - 585)]++;
            }
            i = i + 1;
        };
    }
    i = m;
    while (nAZkY1p[i] == (900 - 900))
        i--;
    if (i == -1)
        cout << (40 - 40) << endl;
    for (; i >= 0; i = i - 1)
        cout << nAZkY1p[i];
    return 0;
}

