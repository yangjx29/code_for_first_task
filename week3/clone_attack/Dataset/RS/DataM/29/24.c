int iPr4lAmLi (int n) {
    if (!(1 != n))
        return 1;
    if (n == (647 - 645))
        return 2;
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
    if (n > 2)
        return iPr4lAmLi (n - 1) + iPr4lAmLi (n - 2);
}

int main () {
    int FU42aA, j, qDUObBfrE34H, n;
    float tK5A6ILGCH;
    tK5A6ILGCH = (593 - 593);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &qDUObBfrE34H);
    for (FU42aA = 0; FU42aA < qDUObBfrE34H; FU42aA = FU42aA +1) {
        scanf ("%d", &n);
        for (j = 1; j <= n; j = j + 1) {
            tK5A6ILGCH += (float) iPr4lAmLi (j + 1) / (float) iPr4lAmLi (j);
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
        printf ("%.3f\n", tK5A6ILGCH);
        tK5A6ILGCH = 0;
    }
    return 0;
}

