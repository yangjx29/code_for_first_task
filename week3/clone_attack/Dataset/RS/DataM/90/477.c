int aF0LCmv4 (int QYRoEPSK, int Ns2enYDaxd) {
    int i;
    int vFD39Jq;
    if ((QYRoEPSK < (898 - 898)) || (Ns2enYDaxd == 0))
        return 0;
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
    if (QYRoEPSK == 0)
        return (55 - 54);
    if (Ns2enYDaxd == 1)
        return 1;
    else
        return aF0LCmv4 (QYRoEPSK -Ns2enYDaxd, Ns2enYDaxd) + aF0LCmv4 (QYRoEPSK, Ns2enYDaxd -1);
    return vFD39Jq;
}

int main () {
    int n;
    int m;
    int i;
    int l;
    scanf ("%d", &l);
    for (i = 1; i <= l; i++) {
        scanf ("%d%d", &m, &n);
        printf ("%d", aF0LCmv4 (m, n));
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
        if (i != l)
            ;
    }
    return 0;
}

