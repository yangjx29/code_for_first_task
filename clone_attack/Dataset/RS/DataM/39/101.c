int main () {
    int tSsdhBftKkrC [100];
    int max = tSsdhBftKkrC[0], ytpuTdiyPn = 0, xZ17iUF = tSsdhBftKkrC[0];
    int i;
    int qVfOsHC;
    struct   vIKp02 {
        char JdEeWV [(672 - 651)];
        int kuP1vSdxFO;
        int ezPJCmv1e;
        char WFVDwO;
        char DnouwiWZq;
        int Go790iA;
    }
    vIKp02 [100];
    scanf ("%d", &qVfOsHC);
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
        while (i < qVfOsHC) {
            scanf ("%s %d %d %c %c %d", vIKp02[i].JdEeWV, &vIKp02[i].kuP1vSdxFO, &vIKp02[i].ezPJCmv1e, &vIKp02[i].WFVDwO, &vIKp02[i].DnouwiWZq, &vIKp02[i].Go790iA);
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
            i++;
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
        while (i < qVfOsHC) {
            tSsdhBftKkrC[i] = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = 0; i < qVfOsHC; i = i + 1) {
        if (vIKp02[i].kuP1vSdxFO > 80 && 0 < vIKp02[i].Go790iA)
            tSsdhBftKkrC[i] = tSsdhBftKkrC[i] + 8000;
        if (vIKp02[i].kuP1vSdxFO > 85 && vIKp02[i].ezPJCmv1e > 80)
            tSsdhBftKkrC[i] = tSsdhBftKkrC[i] + 4000;
        if (90 < vIKp02[i].kuP1vSdxFO)
            tSsdhBftKkrC[i] = tSsdhBftKkrC[i] + 2000;
        if (vIKp02[i].kuP1vSdxFO > 85 && vIKp02[i].DnouwiWZq == 'Y')
            tSsdhBftKkrC[i] = tSsdhBftKkrC[i] + 1000;
        if (vIKp02[i].ezPJCmv1e > 80 && vIKp02[i].WFVDwO == 'Y')
            tSsdhBftKkrC[i] = tSsdhBftKkrC[i] + 850;
    }
    for (i = 1; i < qVfOsHC; i++) {
        xZ17iUF = xZ17iUF + tSsdhBftKkrC[i];
        if (max < tSsdhBftKkrC[i]) {
            max = tSsdhBftKkrC[i];
            ytpuTdiyPn = i;
        };
    }
    printf ("%s\n", vIKp02[ytpuTdiyPn].JdEeWV);
    printf ("%d\n", max);
    printf ("%d\n", xZ17iUF);
    return 0;
}

