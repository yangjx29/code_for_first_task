int main () {
    struct   stu {
        char XUd793425X [20];
        int FX52HPRYT1ar;
        int iJFBpVPir7X5;
        char c [1];
        char eJa1OkhTFm [1];
        int e;
        int STsAU0RC1;
    }
    m5lAfkXvh [(539 - 439)];
    int vkqDo41FgEH, i, pFjEMi6 = (591 - 591), u9vuLCfgm7U, BMCs6lpK4 = 0;
    scanf ("%d", &vkqDo41FgEH);
    for (i = 0; vkqDo41FgEH > i; i = i + 1)
        scanf ("%s %d %d %s %s %d\n", m5lAfkXvh[i].XUd793425X, &m5lAfkXvh[i].FX52HPRYT1ar, &m5lAfkXvh[i].iJFBpVPir7X5, m5lAfkXvh[i].c, m5lAfkXvh[i].eJa1OkhTFm, &m5lAfkXvh[i].e);
    for (i = 0; i < vkqDo41FgEH; i = i + 1)
        m5lAfkXvh[i].STsAU0RC1 = 0;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < vkqDo41FgEH) {
            if ((80 < (m5lAfkXvh[i].FX52HPRYT1ar)) && (0 < (m5lAfkXvh[i].e)))
                m5lAfkXvh[i].STsAU0RC1 += 8000;
            if ((85 < (m5lAfkXvh[i].FX52HPRYT1ar)) && (80 < (m5lAfkXvh[i].iJFBpVPir7X5)))
                m5lAfkXvh[i].STsAU0RC1 = m5lAfkXvh[i].STsAU0RC1 + 4000;
            if (90 < (m5lAfkXvh[i].FX52HPRYT1ar))
                m5lAfkXvh[i].STsAU0RC1 += 2000;
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
            if ((85 < (m5lAfkXvh[i].FX52HPRYT1ar)) && ((m5lAfkXvh[i].eJa1OkhTFm[0]) == 'A' + 24))
                m5lAfkXvh[i].STsAU0RC1 = m5lAfkXvh[i].STsAU0RC1 + 1000;
            if (((m5lAfkXvh[i].iJFBpVPir7X5) > 80) && ((m5lAfkXvh[i].c[0]) == 'A' + 24))
                m5lAfkXvh[i].STsAU0RC1 = m5lAfkXvh[i].STsAU0RC1 + 850;
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
    {
        i = 0;
        while (i < vkqDo41FgEH) {
            if (m5lAfkXvh[i].STsAU0RC1 > pFjEMi6) {
                pFjEMi6 = m5lAfkXvh[i].STsAU0RC1;
                u9vuLCfgm7U = i;
            }
            i = i + 1;
        };
    }
    for (i = 0; i < vkqDo41FgEH; i = i + 1)
        BMCs6lpK4 = BMCs6lpK4 +m5lAfkXvh[i].STsAU0RC1;
    printf ("%s\n", m5lAfkXvh[u9vuLCfgm7U].XUd793425X);
    printf ("%d\n", pFjEMi6);
    printf ("%d\n", BMCs6lpK4);
    return 0;
}

