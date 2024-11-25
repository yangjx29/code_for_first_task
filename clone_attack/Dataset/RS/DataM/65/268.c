int main () {
    int n, i, k, l;
    int sz [n] [2];
    scanf ("%d\n", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            {
                k = 0;
                while (2 > k) {
                    scanf ("%d", &sz[i][k]);
                    k++;
                };
            }
            i = i + 1;
        };
    }
    l = 0;
    {
        i = 0;
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
        while (i < n) {
            if (((sz [i] [0]) -(sz[i][1]) == -1) || ((sz [i] [0]) -(sz[i][1]) == 2)) {
                l = l + 1;
            }
            if ((sz [i] [0]) -(sz[i][1]) == 0) {
                l += 0;
            }
            if ((sz [i] [0]) -(sz[i][1]) == 1 || (sz [i] [0]) -(sz[i][1]) == -2) {
                l--;
            }
            i++;
        };
    }
    if (l > 0) {
    }
    else if (l == 0) {
        printf ("Tie");
    }
    else {
        printf ("B");
    }
    return 0;
}

