int main () {
    int n [gH0qBFy];
    int vgMiufW [gH0qBFy];
    int i;
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
        while (gH0qBFy > i) {
            scanf ("%d %d", &n[i], &vgMiufW[i]);
            if (n[i] == 0 && vgMiufW[i] == 0) {
                break;
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
            i = i + 1;
        };
    }
    for (i = 0; vgMiufW[i] != 0 && n[i] != 0; i++) {
        int tSJxbzT;
        int i0JIejY3KL;
        tSJxbzT = 0;
        {
            i0JIejY3KL = 2;
            while (i0JIejY3KL <= n[i]) {
                tSJxbzT = ((vgMiufW[i] % i0JIejY3KL) + tSJxbzT) % i0JIejY3KL;
                i0JIejY3KL++;
            };
        }
        if (n[i] == 0 && vgMiufW[i] == 0) {
            break;
        }
        printf ("%d\n", tSJxbzT + 1);
    }
    return 0;
}

