int main () {
    char a [300], wx3hbG [300], mpBi4r1t [300];
    int EtsMCu9I8lFR, j;
    gets (a);
    puts (a);
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
    gets (wx3hbG);
    gets (mpBi4r1t);
    {
        EtsMCu9I8lFR = 1;
        while (!('\0' == a[EtsMCu9I8lFR -1])) {
            if (!(wx3hbG[0] != a[EtsMCu9I8lFR -1])) {
                {
                    j = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (!('\0' == wx3hbG[j - 1])) {
                        if (a[EtsMCu9I8lFR -1 + j - 1] != wx3hbG[j - 1])
                            break;
                        j = j + 1;
                    };
                }
                if (wx3hbG[j - 1] != '\0')
                    continue;
                else {
                    j = EtsMCu9I8lFR;
                    while (wx3hbG[j - EtsMCu9I8lFR] != '\0') {
                        a[j - 1] = mpBi4r1t[j - EtsMCu9I8lFR];
                        j++;
                    };
                }
                break;
            }
            else
                continue;
            EtsMCu9I8lFR++;
        };
    }
    return 0;
}

