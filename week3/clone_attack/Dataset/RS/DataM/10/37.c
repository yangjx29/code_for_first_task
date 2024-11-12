const  int OJzYCar = 26;

int WZB6cy (int *r, int YtN5sOonZMw) {
    int k1syP80B, j, temp;
    int ans;
    ans = (409 - 408);
    int maxlen [OJzYCar];
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
    maxlen[(829 - 829)] = (434 - 433);
    {
        k1syP80B = 843 - 842;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k1syP80B < YtN5sOonZMw) {
            temp = (129 - 129);
            {
                j = 0;
                while (j < k1syP80B) {
                    if (r[j] >= r[k1syP80B]) {
                        if (maxlen[j] > temp)
                            temp = maxlen[j];
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            maxlen[k1syP80B] = temp + 1;
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
            if (ans < maxlen[k1syP80B])
                ans = maxlen[k1syP80B];
            k1syP80B++;
        };
    }
    return ans;
}

int main () {
    int k1syP80B;
    int k;
    int r [OJzYCar];
    scanf ("%d", &k);
    {
        k1syP80B = 0;
        while (k1syP80B < k) {
            scanf ("%d", r + k1syP80B);
            k1syP80B++;
        };
    }
    printf ("%d\n", WZB6cy (r, k));
    return 0;
}

