struct   student {
    char name [30];
    int examgrade;
    int appgrade;
    char a;
    char hzNKpU;
    int thesis;
};
void  main () {
    struct   student stu [100];
    int cglHLoT01v [100] = {0};
    int n, IX9HVw1tuI, temp, sum = 0, max = 0;
    scanf ("%d", &n);
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
        IX9HVw1tuI = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > IX9HVw1tuI) {
            scanf ("%s", stu[IX9HVw1tuI].name);
            scanf ("%d%d", &stu[IX9HVw1tuI].examgrade, &stu[IX9HVw1tuI].appgrade);
            scanf (" %c %c", &stu[IX9HVw1tuI].a, &stu[IX9HVw1tuI].hzNKpU);
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
            scanf ("%d", &stu[IX9HVw1tuI].thesis);
            IX9HVw1tuI = IX9HVw1tuI +1;
        };
    }
    for (IX9HVw1tuI = 0; IX9HVw1tuI < n; IX9HVw1tuI = IX9HVw1tuI +1) {
        if (stu[IX9HVw1tuI].examgrade > 80) {
            if (stu[IX9HVw1tuI].thesis >= 1)
                cglHLoT01v[IX9HVw1tuI] = cglHLoT01v[IX9HVw1tuI] + 8000;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (85 < stu[IX9HVw1tuI].examgrade) {
                if (stu[IX9HVw1tuI].appgrade > 80)
                    cglHLoT01v[IX9HVw1tuI] = cglHLoT01v[IX9HVw1tuI] + 4000;
                if (90 < stu[IX9HVw1tuI].examgrade)
                    cglHLoT01v[IX9HVw1tuI] = cglHLoT01v[IX9HVw1tuI] + 2000;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (stu[IX9HVw1tuI].hzNKpU == 'Y')
                    cglHLoT01v[IX9HVw1tuI] = cglHLoT01v[IX9HVw1tuI] + 1000;
            };
        }
        if (stu[IX9HVw1tuI].a == 'Y' && stu[IX9HVw1tuI].appgrade > 80)
            cglHLoT01v[IX9HVw1tuI] = cglHLoT01v[IX9HVw1tuI] + 850;
    }
    {
        IX9HVw1tuI = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (IX9HVw1tuI < n) {
            sum = sum + cglHLoT01v[IX9HVw1tuI];
            if (cglHLoT01v[IX9HVw1tuI] > max) {
                max = cglHLoT01v[IX9HVw1tuI];
                temp = IX9HVw1tuI;
            }
            IX9HVw1tuI = IX9HVw1tuI +1;
        };
    }
    printf ("%s\n", stu[temp].name);
    printf ("%d\n%d", max, sum);
}

