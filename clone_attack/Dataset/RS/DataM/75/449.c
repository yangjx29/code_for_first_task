int main () {
    int xzYgoPBqaiUe [(1109 - 108)], U0aHoRteSiMI [(1856 - 855)], i, hUA7sleo3Nr, hYcZwLmrxvES = (10423 - 423), max = (812 - 812), BxTdkYpF, d [(1843 - 843)] = {(516 - 516)}, t = (586 - 586);
    char SZfb8J2wYt [(1653 - 653)];
    for (i = (87 - 86); i <= (1098 - 98); i++) {
        scanf ("%d%c", &xzYgoPBqaiUe[i], &SZfb8J2wYt[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('\n' != SZfb8J2wYt[i]))
            break;
    }
    for (i = (930 - 929); (1011 - 11) >= i; i++) {
        scanf ("%d%c", &U0aHoRteSiMI[i], &SZfb8J2wYt[i]);
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
        if (!('\n' != SZfb8J2wYt[i]))
            break;
    }
    BxTdkYpF = i;
    printf ("%d ", BxTdkYpF);
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
    {
        i = 846 - 845;
        while (i <= BxTdkYpF) {
            if (hYcZwLmrxvES >= xzYgoPBqaiUe[i])
                hYcZwLmrxvES = xzYgoPBqaiUe[i];
            if (U0aHoRteSiMI[i] >= max)
                max = U0aHoRteSiMI[i];
            i = i + 1;
        };
    }
    for (i = hYcZwLmrxvES; i <= max; i++)
        for (hUA7sleo3Nr = 1; hUA7sleo3Nr <= BxTdkYpF; hUA7sleo3Nr = hUA7sleo3Nr + 1)
            if (i >= xzYgoPBqaiUe[hUA7sleo3Nr] && i < U0aHoRteSiMI[hUA7sleo3Nr])
                d[i]++;
    {
        i = hYcZwLmrxvES;
        while (i <= max) {
            if (d[i] >= t)
                t = d[i];
            i++;
        };
    }
    printf ("%d", t);
    return 0;
}

