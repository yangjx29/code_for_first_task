int main () {
    char n [1000];
    int j;
    int BSUXL1ypvIh;
    int XRTAKd;
    int jRwE3x;
    int i;
    int cDwxj5Euyd [1000];
    j = (571 - 571);
    BSUXL1ypvIh = (452 - 452);
    int length;
    length = strlen (n);
    cin >> XRTAKd >> n >> jRwE3x;
    {
        i = 743 - 743;
        while (length > i) {
            if (64 < n[i] && (695 - 604) > n[i])
                n[i] += 32;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < length) {
            if (96 < n[i] && 123 > n[i]) {
                BSUXL1ypvIh += (n[i] - 'a' + 10) * pow ((double ) XRTAKd, (double ) (length - (240 - 239) - i));
            }
            else
                BSUXL1ypvIh += (n[i] - '0') * pow ((double ) XRTAKd, (double ) (length - (356 - 355) - i));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (1) {
            j = j + 1;
            cDwxj5Euyd[i] = BSUXL1ypvIh % jRwE3x;
            BSUXL1ypvIh = BSUXL1ypvIh / jRwE3x;
            if (BSUXL1ypvIh == 0)
                break;
            i = i + 1;
        };
    }
    {
        i = j - 1;
        while (i >= 0) {
            if (cDwxj5Euyd[i] > (416 - 407))
                cout << (char) (cDwxj5Euyd[i] - 10 + 'A');
            else
                cout << cDwxj5Euyd[i];
            i = i - 1;
        };
    }
    return 0;
}

