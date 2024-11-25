int main () {
    int n;
    double  RYxOk09Zc [100] [2];
    int a7Wxr6C, j;
    double  D2QSdC9 = 0;
    cin >> n;
    for (a7Wxr6C = (730 - 730); a7Wxr6C < n; a7Wxr6C = a7Wxr6C + 1)
        cin >> RYxOk09Zc[a7Wxr6C][0] >> RYxOk09Zc[a7Wxr6C][1];
    for (a7Wxr6C = 0; a7Wxr6C < n - 1; a7Wxr6C++) {
        j = a7Wxr6C + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < n) {
            if (sqrt ((RYxOk09Zc[a7Wxr6C][0] - RYxOk09Zc[j][0]) * (RYxOk09Zc[a7Wxr6C][0] - RYxOk09Zc[j][0]) + (RYxOk09Zc[a7Wxr6C][1] - RYxOk09Zc[j][1]) * (RYxOk09Zc[a7Wxr6C][1] - RYxOk09Zc[j][1])) > D2QSdC9)
                D2QSdC9 = sqrt ((RYxOk09Zc[a7Wxr6C][0] - RYxOk09Zc[j][0]) * (RYxOk09Zc[a7Wxr6C][0] - RYxOk09Zc[j][0]) + (RYxOk09Zc[a7Wxr6C][1] - RYxOk09Zc[j][1]) * (RYxOk09Zc[a7Wxr6C][1] - RYxOk09Zc[j][1]));
            j++;
        };
    }
    printf ("%.4f\n", D2QSdC9);
    return 0;
}

