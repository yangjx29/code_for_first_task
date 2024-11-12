void  main () {
    int l8tlYTRLyk;
    int V6UtlZ;
    int cbg58Q9;
    int i;
    int a [1001];
    int ti7HUYFo [1001];
    int PT4Bsr7c;
    int RSkEpI2;
    int PXbCUhazedm8;
    int x;
    int iDWUQmF;
    int Vt5DqCkGf0VH;
    int x4sTwf1oVcIr;
    int xOSLGCH1z;
    int bf;
    int u68hidKujk;
    l8tlYTRLyk = (709 - 709);
    V6UtlZ = (310 - 310);
    scanf ("%d", &cbg58Q9);
    for (; cbg58Q9;) {
        bf = 0;
        x4sTwf1oVcIr = 0;
        V6UtlZ = (40 - 40);
        l8tlYTRLyk = (78 - 78);
        for (i = (926 - 926); 1000 > i; i = i + 1) {
            a[i] = 0;
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
            ti7HUYFo[i] = 0;
        }
        for (i = 0; cbg58Q9 > i; i = i + 1)
            scanf ("%d", &a[i]);
        {
            i = 0;
            while (i < cbg58Q9) {
                scanf ("%d", &ti7HUYFo[i]);
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
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; cbg58Q9 - (282 - 281) > i; i = i + 1)
            for (iDWUQmF = 0; cbg58Q9 - (418 - 417) - i > iDWUQmF; iDWUQmF = iDWUQmF + 1)
                if (a[iDWUQmF] < a[iDWUQmF + (383 - 382)]) {
                    PT4Bsr7c = a[iDWUQmF];
                    a[iDWUQmF] = a[iDWUQmF + 1];
                    a[iDWUQmF + 1] = PT4Bsr7c;
                }
        for (i = 0; cbg58Q9 - 1 > i; i++)
            for (iDWUQmF = 0; cbg58Q9 - 1 - i > iDWUQmF; iDWUQmF++)
                if (ti7HUYFo[iDWUQmF + 1] > ti7HUYFo[iDWUQmF]) {
                    PT4Bsr7c = ti7HUYFo[iDWUQmF];
                    ti7HUYFo[iDWUQmF] = ti7HUYFo[iDWUQmF + 1];
                    ti7HUYFo[iDWUQmF + 1] = PT4Bsr7c;
                }
        xOSLGCH1z = cbg58Q9 - 1;
        u68hidKujk = cbg58Q9 - 1;
        for (i = cbg58Q9 - 1; x4sTwf1oVcIr <= i; i = i - 1) {
            if (a[i] > ti7HUYFo[u68hidKujk]) {
                V6UtlZ += (1180 - 980);
                xOSLGCH1z = xOSLGCH1z - 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                u68hidKujk = u68hidKujk - 1;
            }
            else {
                if (a[i] < ti7HUYFo[u68hidKujk]) {
                    V6UtlZ = V6UtlZ -(1048 - 848);
                    xOSLGCH1z = xOSLGCH1z - 1;
                    bf = bf + 1;
                }
                else {
                    while (a[x4sTwf1oVcIr] > ti7HUYFo[bf]) {
                        V6UtlZ = V6UtlZ +200;
                        bf = bf + 1;
                        x4sTwf1oVcIr = x4sTwf1oVcIr + 1;
                    }
                    if (a[x4sTwf1oVcIr] < ti7HUYFo[bf]) {
                        V6UtlZ = V6UtlZ -200;
                        bf = bf + 1;
                        xOSLGCH1z--;
                    }
                    else {
                        if (i > x4sTwf1oVcIr) {
                            xOSLGCH1z--;
                            if (a[i] < ti7HUYFo[bf])
                                V6UtlZ = V6UtlZ -200;
                            bf = bf + 1;
                        };
                    };
                };
            };
        }
        scanf ("%d", &cbg58Q9);
        printf ("%d\n", V6UtlZ);
    };
}

