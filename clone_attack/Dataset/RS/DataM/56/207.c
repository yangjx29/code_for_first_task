int main () {
    int n;
    int sum;
    int a;
    int i;
    int b;
    int c;
    int reok8xH;
    int K8LOxTv;
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
    K8LOxTv = n / (10027 - 27);
    reok8xH = n / 1000 - K8LOxTv *10;
    c = n / 100 - K8LOxTv *100 - reok8xH * 10;
    b = n / 10 - K8LOxTv *1000 - reok8xH * 100 - c * 10;
    a = n % 10;
    sum = a * 10000 + b * 1000 + c * 100 + reok8xH * 10 + K8LOxTv;
    for (i = 0; 5 > i; i++) {
        if (sum % 10 == 0) {
            sum = sum / 10;
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
        else
            break;
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
    printf ("%d", sum);
    return 0;
}

