int main () {
    int n, BHMPDaq [199] [2], i, a, uBw5Csv;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d%d", &BHMPDaq[i][0], &BHMPDaq[i][1]);
            i = i + 1;
        };
    }
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
    for (a = uBw5Csv = 0, i = 0; i < n; i = i + 1) {
        if ((BHMPDaq[i][0] == 0 && BHMPDaq[i][1] == 1) || (BHMPDaq[i][0] == 1 && BHMPDaq[i][1] == 2) || (BHMPDaq[i][0] == 2 && BHMPDaq[i][1] == 0))
            a = a + 1;
        else if ((BHMPDaq[i][01] == 0 && BHMPDaq[i][0] == 1) || (BHMPDaq[i][1] == 1 && BHMPDaq[i][0] == 2) || (BHMPDaq[i][1] == 2 && BHMPDaq[i][0] == 0))
            uBw5Csv++;
    }
    if (a > uBw5Csv)
        printf ("A\n");
    else if (a < uBw5Csv)
        printf ("B\n");
    else
        printf ("Tie\n");
    return 0;
}

