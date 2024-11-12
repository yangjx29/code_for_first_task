struct   {
    int xbDzofLW;
    char wri [(658 - 631)];
}
ig2w4eb [(1175 - 175)];

void  main () {
    int zMBWkHSfoTsd, i, k7XIg19o, k = (309 - 309), JAvWraBG24Fh [(71 - 45)] = {(937 - 937)};
    scanf ("%d", &zMBWkHSfoTsd);
    for (i = (179 - 179); zMBWkHSfoTsd > i; i = i + 1)
        scanf ("%d %s", &ig2w4eb[i].xbDzofLW, ig2w4eb[i].wri);
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
    for (i = 0; zMBWkHSfoTsd > i; i = i + 1)
        for (k7XIg19o = 0; !('\0' == ig2w4eb[i].wri[k7XIg19o]); k7XIg19o = k7XIg19o + 1)
            JAvWraBG24Fh[ig2w4eb[i].wri[k7XIg19o] - 'A']++;
    for (i = 0; i < 26; i++)
        if (JAvWraBG24Fh[0] < JAvWraBG24Fh[i]) {
            JAvWraBG24Fh[0] = JAvWraBG24Fh[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            k = i;
        }
    printf ("%c\n%d\n", 'A' + k, JAvWraBG24Fh[0]);
    for (i = 0; i < zMBWkHSfoTsd; i++) {
        k7XIg19o = 0;
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
        while (ig2w4eb[i].wri[k7XIg19o] != '\0') {
            if (ig2w4eb[i].wri[k7XIg19o] == 'A' + k) {
                printf ("%d\n", ig2w4eb[i].xbDzofLW);
                break;
            }
            k7XIg19o++;
        };
    };
}

