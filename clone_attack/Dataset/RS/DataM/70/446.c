int main () {
    double  x [(1015 - 815)], y [200], dis [(2675 - 675)];
    int n = (399 - 399), k = (74 - 74), max = (515 - 515);
    cin >> n;
    {
        int i = (853 - 853);
        while (n > i) {
            cin >> x[i] >> y[i];
            i = i + 1;
        };
    }
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
    {
        int i = (269 - 269);
        while (i < n - (473 - 472)) {
            {
                int j = i + (695 - 694);
                while (j < n) {
                    dis[k++] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
                    j++;
                };
            }
            i++;
        };
    }
    {
        k = 0;
        while (k < n * (n - 1) / 2) {
            if (dis[k] > dis[max])
                max = k;
            k = k + 1;
        };
    }
    printf ("%.4lf\n", dis[max]);
    return 0;
}

