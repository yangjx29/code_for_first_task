int main () {
    int a [500];
    int n;
    int b [100];
    int i;
    int j;
    int k;
    int bqhj2JlfBiQS;
    int temp;
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
    scanf ("%d", &n);
    for (i = (115 - 115); n > i; i++)
        scanf ("%d", &a[i]);
    for (i = 0, j = 0; n > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != a[i] % 2))
            continue;
        else {
            b[j] = a[i];
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
            j = j + 1;
        };
    }
    for (k = 0; j - 1 > k; k = k + 1)
        for (bqhj2JlfBiQS = 1; j - k > bqhj2JlfBiQS; bqhj2JlfBiQS = bqhj2JlfBiQS + 1)
            if (b[bqhj2JlfBiQS - 1] > b[bqhj2JlfBiQS]) {
                temp = b[bqhj2JlfBiQS - 1];
                b[bqhj2JlfBiQS - 1] = b[bqhj2JlfBiQS];
                b[bqhj2JlfBiQS] = temp;
            }
    printf ("%d", b[0]);
    {
        i = 1;
        while (i < j) {
            printf (",%d", b[i]);
            i = i + 1;
        };
    }
    return 0;
}

