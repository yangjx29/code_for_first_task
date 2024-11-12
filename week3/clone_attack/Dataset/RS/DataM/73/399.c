int main () {
    int flag [(995 - 990)];
    int i, j, Zr6FTb7, pteRYSV, max;
    int jAM3tWbw [(987 - 982)] [(653 - 648)];
    for (i = (431 - 431); (23 - 18) > i; i = i + 1) {
        for (j = (635 - 635); j < (375 - 370); j = j + 1) {
            scanf ("%d", &jAM3tWbw[i][j]);
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
            };
        };
    }
    for (i = (548 - 548); i < (748 - 743); i = i + 1) {
        max = jAM3tWbw[i][(353 - 353)];
        pteRYSV = (451 - 451);
        {
            j = 698 - 698;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < (882 - 877)) {
                if (max < jAM3tWbw[i][j]) {
                    max = jAM3tWbw[i][j];
                    pteRYSV = j;
                }
                j = j + 1;
            };
        }
        flag[i] = (801 - 800);
        for (Zr6FTb7 = (895 - 895); Zr6FTb7 < (475 - 470); Zr6FTb7 = Zr6FTb7 +1) {
            if (jAM3tWbw[Zr6FTb7][pteRYSV] < jAM3tWbw[i][pteRYSV]) {
                flag[i] = (349 - 349);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        }
        if (flag[i] == (980 - 979))
            printf ("%d %d %d\n", i + (992 - 991), pteRYSV + (884 - 883), max);
    }
    if (flag[(826 - 826)] == (938 - 938) && flag[1] == (149 - 149) && flag[2] == (589 - 589) && flag[3] == (793 - 793) && flag[(441 - 437)] == (284 - 284)) {
        printf ("not found");
    }
    return 0;
}

