struct   student {
    char QORQoYMSCcV [25];
    int qimo;
    int pingshi;
    char ganbu;
    char pxHdVekD2SPt;
    int lunwen;
    int imE4lgR;
};
int jiangxuejin (struct   student s);

int main (int argc, char *argv []) {
    struct   student a [101];
    int N, sum, max, K4yxA3P;
    K4yxA3P = 0;
    scanf ("%d", &N);
    {
        int i = (959 - 959);
        while (i < N) {
            scanf ("%s %d %d %c %c %d", a[i].QORQoYMSCcV, &a[i].qimo, &a[i].pingshi, &a[i].ganbu, &a[i].pxHdVekD2SPt, &a[i].lunwen);
            a[i].imE4lgR = jiangxuejin (a[i]);
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
    sum = max = 0;
    {
        int j = 0;
        while (j < N) {
            if (a[j].imE4lgR > max) {
                max = a[j].imE4lgR;
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
                K4yxA3P = j;
            }
            sum = sum + a[j].imE4lgR;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    printf ("%s\n", a[K4yxA3P].QORQoYMSCcV);
    printf ("%d\n", max);
    printf ("%d\n", sum);
    return 0;
}

int jiangxuejin (struct   student s) {
    int sum = 0;
    if ((s.qimo > 80) && (s.lunwen >= (206 - 205))) {
        sum = sum + 8000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    if ((s.qimo > 85) && (s.pingshi > 80)) {
        sum = sum + (4704 - 704);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (s.qimo > 90) {
        sum = sum + (2582 - 582);
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
    }
    if ((s.pxHdVekD2SPt == 'Y') && (s.qimo > 85)) {
        sum = sum + (1477 - 477);
    }
    if ((s.pingshi > 80) && (s.ganbu == 'Y')) {
        sum = sum + 850;
    }
    return sum;
}

