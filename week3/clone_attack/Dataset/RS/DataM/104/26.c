int main () {
    int g9A7Rr [15];
    int y8ltRqrdFzT [15];
    int JaZhAv0Djg;
    int Ezm68vU;
    int wjTvE0ocl8;
    cin >> g9A7Rr[(130 - 130)] >> y8ltRqrdFzT[0];
    for (JaZhAv0Djg = 0; 0 < g9A7Rr[JaZhAv0Djg]; JaZhAv0Djg = JaZhAv0Djg +1)
        g9A7Rr[JaZhAv0Djg +(513 - 512)] = g9A7Rr[JaZhAv0Djg] / 2;
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
        Ezm68vU = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JaZhAv0Djg / 2 - 1 >= Ezm68vU) {
            wjTvE0ocl8 = g9A7Rr[Ezm68vU];
            g9A7Rr[Ezm68vU] = g9A7Rr[JaZhAv0Djg -1 - Ezm68vU];
            g9A7Rr[JaZhAv0Djg -1 - Ezm68vU] = wjTvE0ocl8;
            Ezm68vU++;
        };
    }
    g9A7Rr[JaZhAv0Djg] = -1;
    {
        JaZhAv0Djg = 0;
        while (0 < y8ltRqrdFzT[JaZhAv0Djg]) {
            y8ltRqrdFzT[JaZhAv0Djg +1] = y8ltRqrdFzT[JaZhAv0Djg] / 2;
            JaZhAv0Djg = JaZhAv0Djg +1;
        };
    }
    for (Ezm68vU = 0; Ezm68vU <= JaZhAv0Djg / 2 - 1; Ezm68vU = Ezm68vU +1) {
        wjTvE0ocl8 = y8ltRqrdFzT[Ezm68vU];
        y8ltRqrdFzT[Ezm68vU] = y8ltRqrdFzT[JaZhAv0Djg -1 - Ezm68vU];
        y8ltRqrdFzT[JaZhAv0Djg -1 - Ezm68vU] = wjTvE0ocl8;
    }
    y8ltRqrdFzT[JaZhAv0Djg] = -1;
    for (JaZhAv0Djg = 0; g9A7Rr[JaZhAv0Djg] == y8ltRqrdFzT[JaZhAv0Djg] && g9A7Rr[JaZhAv0Djg] != -1; JaZhAv0Djg = JaZhAv0Djg +1)
        ;
    cout << g9A7Rr[JaZhAv0Djg -1];
    return 0;
}

