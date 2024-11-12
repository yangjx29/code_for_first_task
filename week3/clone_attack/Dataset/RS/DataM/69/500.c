int main () {
    char RAgM29Ew [200], z4N1YT3C [200];
    int Vk5lAP4f0mH;
    Vk5lAP4f0mH = max (strlen (RAgM29Ew), strlen (z4N1YT3C));
    int TvW9NdUi [200] = {0};
    int bszYFIq1 [200] = {0};
    int neSljivZ2 [200] = {0};
    char d3GrUW [200] = {0};
    cin >> RAgM29Ew >> z4N1YT3C;
    {
        int qGQ1V06 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (RAgM29Ew) > qGQ1V06) {
            TvW9NdUi[qGQ1V06] = (int) RAgM29Ew[strlen (RAgM29Ew) - 1 - qGQ1V06] - '0';
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
            qGQ1V06 = qGQ1V06 + 1;
        };
    }
    {
        int qGQ1V06 = 0;
        while (qGQ1V06 < strlen (z4N1YT3C)) {
            bszYFIq1[qGQ1V06] = (int) z4N1YT3C[strlen (z4N1YT3C) - 1 - qGQ1V06] - '0';
            qGQ1V06 = qGQ1V06 + 1;
        };
    }
    {
        int qGQ1V06 = 0;
        while (Vk5lAP4f0mH > qGQ1V06) {
            neSljivZ2[qGQ1V06] = neSljivZ2[qGQ1V06] + TvW9NdUi[qGQ1V06] + bszYFIq1[qGQ1V06];
            neSljivZ2[qGQ1V06 + 1] = neSljivZ2[qGQ1V06] / 10;
            neSljivZ2[qGQ1V06] = neSljivZ2[qGQ1V06] % 10;
            qGQ1V06 = qGQ1V06 + 1;
        };
    }
    if (!(0 == neSljivZ2[Vk5lAP4f0mH]))
        Vk5lAP4f0mH = Vk5lAP4f0mH +1;
    for (; Vk5lAP4f0mH >= 0; Vk5lAP4f0mH--) {
        if (neSljivZ2[Vk5lAP4f0mH -1] != 0)
            break;
    }
    if (Vk5lAP4f0mH == -1)
        cout << '0';
    else {
        for (int qGQ1V06 = 0;
        qGQ1V06 < Vk5lAP4f0mH; qGQ1V06++)
            d3GrUW[qGQ1V06] = neSljivZ2[Vk5lAP4f0mH -1 - qGQ1V06] + '0';
        d3GrUW[Vk5lAP4f0mH] = '\0';
        cout << d3GrUW << endl;
    }
    return 0;
}

