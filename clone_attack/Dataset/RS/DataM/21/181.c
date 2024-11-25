int main () {
    int n, i, yFwk6b = (973 - 973);
    float x;
    float nu [300];
    float d = 0;
    float z;
    z = 0;
    float nn [300];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%f", &nu[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        z = z + nu[i];
    }
    x = z / (float) n;
    for (i = 0; n > i; i = i + 1) {
        if (x - nu[i] > d) {
            d = x - nu[i];
        }
        if (d < nu[i] - x) {
            d = nu[i] - x;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (x - nu[i] - d <= (379.01 - 379.0) && x - nu[i] - d >= -0.01) {
                nn[yFwk6b] = nu[i];
                yFwk6b++;
            }
            else {
                if (nu[i] - x - d <= 0.01 && nu[i] - x - d >= -0.01) {
                    nn[yFwk6b] = nu[i];
                    yFwk6b++;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.0f", nn[0]);
    for (i = 1; i < yFwk6b; i = i + 1) {
        printf (",%.0f", nn[i]);
    }
    return 0;
}

