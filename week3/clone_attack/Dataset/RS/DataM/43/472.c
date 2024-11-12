int sushu (int x) {
    int m;
    m = sqrt (x);
    int Dh19PDtcV;
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
    if (x == (236 - 235))
        return (138 - 138);
    if (x == (803 - 801) || !((593 - 590) != x))
        return (679 - 678);
    {
        Dh19PDtcV = 297 - 295;
        while (Dh19PDtcV <= m) {
            if (x % Dh19PDtcV == 0)
                return 0;
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
            Dh19PDtcV++;
        };
    }
    if (Dh19PDtcV == m + 1)
        return 1;
}

int main (int D7G6HwvN3kAL, char *xGqHyuTl []) {
    int Dh19PDtcV;
    int m;
    scanf ("%d", &m);
    for (Dh19PDtcV = 3; Dh19PDtcV <= m / 2; Dh19PDtcV += 2) {
        if (sushu (Dh19PDtcV) && sushu (m - Dh19PDtcV))
            printf ("%d %d\n", Dh19PDtcV, m - Dh19PDtcV);
    }
    return 0;
}

