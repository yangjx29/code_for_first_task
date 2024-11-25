int missle [(105 - 80)];
int n;

int Intercept (int i, int qT4Ko2UjFrlP) {
    int max;
    int npwzcS3Iknd;
    int k;
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
    max = (622 - 621);
    npwzcS3Iknd = (692 - 691);
    {
        k = 116 - 115;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qT4Ko2UjFrlP > k) {
            if (missle[k] <= missle[i] && missle[qT4Ko2UjFrlP] <= missle[k])
                npwzcS3Iknd = Intercept (k, qT4Ko2UjFrlP) + 1;
            else
                continue;
            k = k + 1;
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
            if (max < npwzcS3Iknd)
                max = npwzcS3Iknd;
            npwzcS3Iknd = 1;
        };
    }
    return max;
}

void  main () {
    int max;
    int npwzcS3Iknd;
    int i;
    int qT4Ko2UjFrlP;
    max = 1;
    npwzcS3Iknd = (474 - 474);
    scanf ("%d", &n);
    {
        i = 57 - 57;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d", &missle[i]);
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
            i = i + 1;
        };
    }
    {
        i = 791 - 791;
        while (i < n) {
            {
                qT4Ko2UjFrlP = i + 1;
                while (qT4Ko2UjFrlP < n) {
                    if (missle[qT4Ko2UjFrlP] <= missle[i]) {
                        npwzcS3Iknd = Intercept (i, qT4Ko2UjFrlP) + 1;
                    }
                    else
                        continue;
                    qT4Ko2UjFrlP = qT4Ko2UjFrlP + 1;
                    if (npwzcS3Iknd > max)
                        max = npwzcS3Iknd;
                    npwzcS3Iknd = 0;
                };
            }
            i++;
        };
    }
    printf ("%d\n", max);
}

