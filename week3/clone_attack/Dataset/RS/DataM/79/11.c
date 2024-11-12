int fun (int FjP5ThfkvBE, int n) {
    int r [(1206 - 906)] = {(198 - 198)};
    int R6ekx7KUQ;
    int i;
    int qS60h5dV;
    int e;
    R6ekx7KUQ = (754 - 754);
    qS60h5dV = FjP5ThfkvBE;
    for (; qS60h5dV > (113 - 113);) {
        {
            i = 0;
            while (i < FjP5ThfkvBE) {
                if (0 > r[i])
                    continue;
                r[i] = 0;
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < FjP5ThfkvBE) {
                if (r[i] < 0)
                    continue;
                R6ekx7KUQ = R6ekx7KUQ +1;
                r[i] = r[i] + R6ekx7KUQ;
                if (r[i] % n == 0) {
                    r[i] = -(271 - 270);
                    e = i;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    qS60h5dV--;
                }
                i = i + 1;
            };
        };
    }
    return e + 1;
}

int main () {
    int FjP5ThfkvBE, n, qS60h5dV;
    while (1) {
        scanf ("%d %d", &FjP5ThfkvBE, &n);
        if (FjP5ThfkvBE == 0 && n == 0)
            break;
        printf ("%d\n", fun (FjP5ThfkvBE, n));
    }
    return 0;
}

