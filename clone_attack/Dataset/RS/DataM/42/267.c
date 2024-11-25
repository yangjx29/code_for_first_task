int main () {
    int l;
    int i;
    int J7uVHW;
    int DTf847xF9d;
    int n;
    l = 0;
    int *p;
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
    int xmcLCha3 [100000];
    scanf ("%d", &n);
    p = xmcLCha3;
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &xmcLCha3[i]);
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
    scanf ("%d", &DTf847xF9d);
    {
        i = 0;
        while (i < n) {
            if (xmcLCha3[i] == DTf847xF9d) {
                l = l + 1;
                {
                    J7uVHW = i;
                    while (n > J7uVHW) {
                        *(p + J7uVHW) = *(p + J7uVHW +1);
                        J7uVHW = J7uVHW +1;
                    };
                }
                i = i - 1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n - l) {
            if (i < n - (l + 1))
                printf ("%d ", xmcLCha3[i]);
            else
                printf ("%d", xmcLCha3[i]);
            i++;
        };
    }
    return 0;
}

