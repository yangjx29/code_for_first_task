int main () {
    int hc9klsNb (int n, int efFhXvzjyqN);
    int n, efFhXvzjyqN, vrsK61aL;
    scanf ("%d%d", &n, &efFhXvzjyqN);
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
    vrsK61aL = hc9klsNb (n, efFhXvzjyqN);
    printf ("%d", vrsK61aL);
    return 0;
}

int hc9klsNb (int n, int efFhXvzjyqN) {
    int x, y, i, wwnjexdmg;
    {
        x = 1;
        while (1) {
            y = x * n + efFhXvzjyqN;
            {
                i = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (n > i) {
                    if (!(0 == y % (n - 1))) {
                        wwnjexdmg = 0;
                        break;
                    }
                    else {
                        wwnjexdmg = 1;
                        y = y * n / (n - 1) + efFhXvzjyqN;
                    }
                    i = i + 1;
                };
            }
            if (wwnjexdmg == 1)
                return y;
            else
                continue;
            x = x + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return y;
}

