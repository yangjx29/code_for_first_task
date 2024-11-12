int result (int n, int tianji [(1779 - 779)], int qiwang [1000]) {
    int m;
    int e;
    int b;
    int i;
    int sum;
    int tailt;
    int tailq;
    int a;
    int k;
    m = (568 - 568);
    sum = 0;
    tailt = tailq = n - (689 - 688);
    for (k = (599 - 598); k < n; k = k + 1) {
        for (i = 0; i < n - k; i = i + 1) {
            if (tianji[i] < tianji[i + 1]) {
                e = tianji[i];
                tianji[i] = tianji[i + 1];
                tianji[i + 1] = e;
            };
        };
    }
    for (k = 1; k < n; k = k + 1) {
        for (i = 0; i < n - k; i = i + 1) {
            if (qiwang[i] < qiwang[i + 1]) {
                e = qiwang[i];
                qiwang[i] = qiwang[i + 1];
                qiwang[i + 1] = e;
            };
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if (tianji[m] > qiwang[i]) {
            sum += 200;
            m = m + 1;
        }
        else if (tianji[m] < qiwang[i]) {
            tailt = tailt - 1;
            sum -= 200;
        }
        else if (!(qiwang[i] != tianji[m])) {
            for (a = tailt, b = tailq; a >= m; a = a - 1, b = b - 1) {
                if (tianji[a] > qiwang[b]) {
                    tailt = tailt - 1;
                    sum += 200;
                    tailq = tailq - 1;
                }
                else if (tianji[a] < qiwang[b]) {
                    sum -= 200;
                    tailt = tailt - 1;
                    break;
                }
                else if (tianji[a] == qiwang[b]) {
                    if (tianji[tailt] < qiwang[i]) {
                        sum -= 200;
                    }
                    tailt = tailt - 1;
                    break;
                };
            };
        }
        if (m > tailt) {
            break;
        };
    }
    return sum;
}

int main () {
    int n;
    int sum;
    int i;
    int j;
    int tianji [1000];
    int qiwang [1000];
    for (i = 0;; i = i + 1) {
        scanf ("%d", &n);
        if (n == 0) {
            break;
        }
        for (j = 0; j < n; j = j + 1) {
            scanf ("%d", &tianji[j]);
        }
        for (j = 0; j < n; j = j + 1) {
            scanf ("%d", &qiwang[j]);
        }
        sum = result (n, tianji, qiwang);
        printf ("%d\n", sum);
    }
    return 0;
}

