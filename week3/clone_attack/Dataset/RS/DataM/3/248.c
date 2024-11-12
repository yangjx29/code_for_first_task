int main () {
    int n, k, i, PtwDE1X;
    int u5sdWrzhT [n];
    scanf ("%d %d", &n, &k);
    {
        i = 577 - 577;
        while (i < n) {
            scanf ("%d ", &u5sdWrzhT[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < n - 1) {
            {
                PtwDE1X = i + 1;
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
                while (PtwDE1X < n) {
                    if (u5sdWrzhT[i] + u5sdWrzhT[PtwDE1X] == k) {
                        break;
                    }
                    if (!(n - 2 != i) && PtwDE1X == n - 1) {
                        break;
                    }
                    PtwDE1X = PtwDE1X +1;
                };
            }
            if (u5sdWrzhT[i] + u5sdWrzhT[PtwDE1X] == k) {
                break;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (i == n - 2 && PtwDE1X == n - 1) {
                break;
            }
            i++;
        };
    }
    return 0;
}

