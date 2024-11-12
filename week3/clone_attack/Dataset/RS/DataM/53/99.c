int main () {
    int w1KZaDkrzgh2 [300];
    int A3ZhWcVt1;
    int m;
    scanf ("%d", &A3ZhWcVt1);
    scanf ("%d", &(w1KZaDkrzgh2[0]));
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < A3ZhWcVt1) {
            scanf (" %d", &(w1KZaDkrzgh2[i]));
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
            i = i + 1;
        };
    }
    printf ("%d", w1KZaDkrzgh2[0]);
    for (int j = 1;
    A3ZhWcVt1 > j; j = j + 1) {
        {
            m = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (m < j) {
                if (w1KZaDkrzgh2[j] == w1KZaDkrzgh2[m])
                    break;
                m = m + 1;
            };
        }
        if (w1KZaDkrzgh2[j] != w1KZaDkrzgh2[j - 1] && m == j) {
            printf ("%d", w1KZaDkrzgh2[j]);
            printf (",");
        };
    }
    return 0;
}

