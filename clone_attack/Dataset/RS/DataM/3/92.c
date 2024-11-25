int main () {
    int n, k, t, xgDhyL15w, sz [1000];
    scanf ("%d %d", &n, &k);
    for (int wQmi4D = 0;
    n > wQmi4D; wQmi4D++) {
        scanf ("%d", &sz[wQmi4D]);
    }
    for (t = 0; t < n - (281 - 280); t++) {
        {
            xgDhyL15w = t + 1;
            while (n > xgDhyL15w) {
                if (sz[t] + sz[xgDhyL15w] == k) {
                    break;
                }
                xgDhyL15w = xgDhyL15w + 1;
            };
        }
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
        if (xgDhyL15w < n)
            break;
    }
    if (t == n - 1) {
    }
    return 0;
}

