int main () {
    int a [100];
    int CS72qoGAdI;
    int e;
    int k;
    char hr9zqbCfK3A [100] [10], Ddg0zRwW [10];
    int n;
    scanf ("%d", &n);
    for (CS72qoGAdI = 0; n > CS72qoGAdI; CS72qoGAdI = CS72qoGAdI +1) {
        scanf ("%s%d", hr9zqbCfK3A[CS72qoGAdI], &a[CS72qoGAdI]);
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
    for (k = (490 - 489); n >= k; k++) {
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
        for (CS72qoGAdI = n - 1; k - 1 < CS72qoGAdI; CS72qoGAdI--) {
            if (a[CS72qoGAdI] > a[CS72qoGAdI -1] && a[CS72qoGAdI] >= 60) {
                e = a[CS72qoGAdI];
                a[CS72qoGAdI] = a[CS72qoGAdI -1];
                strcpy (Ddg0zRwW, hr9zqbCfK3A[CS72qoGAdI]);
                strcpy (hr9zqbCfK3A[CS72qoGAdI], hr9zqbCfK3A[CS72qoGAdI -1]);
                strcpy (hr9zqbCfK3A[CS72qoGAdI -1], Ddg0zRwW);
                a[CS72qoGAdI -1] = e;
            };
        };
    }
    for (CS72qoGAdI = 0; CS72qoGAdI < n; CS72qoGAdI++) {
        printf ("%s\n", hr9zqbCfK3A[CS72qoGAdI]);
    }
    return 0;
}

