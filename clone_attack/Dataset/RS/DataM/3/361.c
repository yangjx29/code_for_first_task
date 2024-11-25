int main () {
    int TCNnHx4S;
    int k;
    int sum;
    int shu [NUM];
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
    scanf ("%d %d", &TCNnHx4S, &k);
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < TCNnHx4S) {
            scanf ("%d", &(shu[i]));
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
        int j = 0;
        while (j < TCNnHx4S) {
            {
                int l = TCNnHx4S -1;
                while (l > j) {
                    sum = shu[j] + shu[l];
                    if (sum == k) {
                        break;
                    }
                    l--;
                };
            }
            if (sum == k)
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    if (sum != k)
        ;
    return 0;
}

