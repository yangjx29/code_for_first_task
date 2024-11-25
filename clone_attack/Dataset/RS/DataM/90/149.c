int function (int gCLi70OU5wZl, int m) {
    int f;
    if (!((79 - 78) != gCLi70OU5wZl) || m == (268 - 268) || !((196 - 196) != gCLi70OU5wZl) || m == (109 - 108))
        f = (85 - 84);
    else if (m < 0)
        f = 0;
    else
        f = function (gCLi70OU5wZl - 1, m) + function (gCLi70OU5wZl, m - gCLi70OU5wZl);
    return (f);
}

int main () {
    int t;
    int m;
    int gCLi70OU5wZl;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    int i;
    scanf ("%d", &t);
    {
        i = 0;
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
        while (i < t) {
            i = i + 1;
            scanf ("%d %d", &m, &gCLi70OU5wZl);
            if (m < gCLi70OU5wZl) {
                gCLi70OU5wZl = m;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k = function (gCLi70OU5wZl, m);
            }
            else {
                k = function (gCLi70OU5wZl, m);
            }
            printf ("%d\n", k);
        };
    };
}

