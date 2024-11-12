int main () {
    int N7Sz5rMYal [22] [22];
    int At69NUd;
    int JQ4AYahbNS;
    int T6yKjDJug9G;
    int wsl3SeILWcH;
    char dBLMHsA (int QraD0lFeJ, int ZyKJ1A, int zovMJjYz7B, int FNjrvHD2P, int ELK7PM);
    {
        At69NUd = 0;
        while (T6yKjDJug9G +2 > At69NUd) {
            N7Sz5rMYal[At69NUd][0] = -1;
            N7Sz5rMYal[At69NUd][wsl3SeILWcH + 1] = -1;
            At69NUd = At69NUd +1;
        }
    }
    {
        JQ4AYahbNS = 1;
        for (; wsl3SeILWcH + 1 > JQ4AYahbNS;) {
            N7Sz5rMYal[0][JQ4AYahbNS] = -1;
            N7Sz5rMYal[T6yKjDJug9G +1][JQ4AYahbNS] = -1;
            JQ4AYahbNS = JQ4AYahbNS +1;
        }
    }
    scanf ("%d%d", &T6yKjDJug9G, &wsl3SeILWcH);
    {
        At69NUd = 1;
        for (; T6yKjDJug9G +1 > At69NUd;) {
            for (JQ4AYahbNS = 1; wsl3SeILWcH + 1 > JQ4AYahbNS; JQ4AYahbNS = JQ4AYahbNS +1)
                scanf ("%d", &N7Sz5rMYal[At69NUd][JQ4AYahbNS]);
            At69NUd = At69NUd +1;
        }
    }
    {
        At69NUd = 1;
        while (T6yKjDJug9G +1 > At69NUd) {
            {
                JQ4AYahbNS = 1;
                while (JQ4AYahbNS < wsl3SeILWcH + 1) {
                    if (dBLMHsA (N7Sz5rMYal[At69NUd][JQ4AYahbNS], N7Sz5rMYal[At69NUd -1][JQ4AYahbNS], N7Sz5rMYal[At69NUd +1][JQ4AYahbNS], N7Sz5rMYal[At69NUd][JQ4AYahbNS -1], N7Sz5rMYal[At69NUd][JQ4AYahbNS +1]))
                        printf ("%d %d\n", At69NUd -1, JQ4AYahbNS -1);
                    JQ4AYahbNS = JQ4AYahbNS +1;
                }
            }
            ++At69NUd;
        }
    }
    return 0;
}

char dBLMHsA (int QraD0lFeJ, int ZyKJ1A, int zovMJjYz7B, int FNjrvHD2P, int ELK7PM) {
    return ((QraD0lFeJ >= ZyKJ1A) && (zovMJjYz7B <= QraD0lFeJ) && (QraD0lFeJ >= FNjrvHD2P) && (QraD0lFeJ >= ELK7PM));
}

