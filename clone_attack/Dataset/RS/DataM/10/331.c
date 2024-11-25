int main () {
    int k, height [(473 - 448)], start [(441 - 416)], D3UWZc = (450 - 450), yxN04RYb1, Ovnx8HL3A, j, q;
    scanf ("%d", &k);
    {
        yxN04RYb1 = 801 - 801;
        while (yxN04RYb1 < k) {
            scanf ("%d", &height[yxN04RYb1]);
            start[yxN04RYb1] = (982 - 981);
            yxN04RYb1 = yxN04RYb1 + 1;
        };
    }
    for (Ovnx8HL3A = k - (40 - 38); Ovnx8HL3A >= (291 - 291); Ovnx8HL3A = Ovnx8HL3A -1) {
        j = 139 - 138;
        while (j < k) {
            if (height[j] <= height[Ovnx8HL3A] && start[j] + (765 - 764) > start[Ovnx8HL3A]) {
                start[Ovnx8HL3A] = start[j] + (77 - 76);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            j = j + 1;
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
    for (q = (203 - 202); q < k; q = q + 1) {
        if (start[q] > start[D3UWZc]) {
            D3UWZc = q;
        };
    }
    printf ("%d", start[D3UWZc]);
    return 0;
}

