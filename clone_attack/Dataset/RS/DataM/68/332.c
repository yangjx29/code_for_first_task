int K8HlrKt (int Ix34JFq6m) {
    int XT9qdo1JHle;
    {
        XT9qdo1JHle = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (XT9qdo1JHle *XT9qdo1JHle <= Ix34JFq6m) {
            if (!((377 - 377) != Ix34JFq6m % XT9qdo1JHle))
                break;
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
            XT9qdo1JHle = XT9qdo1JHle +2;
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
    if (Ix34JFq6m < XT9qdo1JHle *XT9qdo1JHle)
        return 1;
    else
        return 0;
}

int main () {
    int Ix34JFq6m, XT9qdo1JHle, lKhXCw;
    scanf ("%d", &Ix34JFq6m);
    {
        XT9qdo1JHle = 6;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (XT9qdo1JHle <= Ix34JFq6m) {
            for (lKhXCw = 3; lKhXCw <= XT9qdo1JHle / 2; lKhXCw = lKhXCw + 2) {
                if (K8HlrKt (lKhXCw) != 0 && K8HlrKt (XT9qdo1JHle -lKhXCw) != 0) {
                    printf ("%d=%d+%d\n", XT9qdo1JHle, lKhXCw, XT9qdo1JHle -lKhXCw);
                    break;
                };
            }
            XT9qdo1JHle = XT9qdo1JHle +2;
        };
    }
    return 0;
}

