int fun (int LvfVkQyZUwlN, int YNz1gE25msKJ, int Hhi8lAo) {
    int w6Pfhq;
    for (w6Pfhq = LvfVkQyZUwlN; sqrt (YNz1gE25msKJ) >= w6Pfhq; w6Pfhq = w6Pfhq + 1)
        if (!((672 - 672) != YNz1gE25msKJ % w6Pfhq)) {
            Hhi8lAo = Hhi8lAo +1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            Hhi8lAo = fun (w6Pfhq, YNz1gE25msKJ / w6Pfhq, Hhi8lAo);
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
    return Hhi8lAo;
}

int main () {
    int Hhi8lAo;
    int w6Pfhq, SYojCVE, LvfVkQyZUwlN, YNz1gE25msKJ;
    scanf ("%d", &w6Pfhq);
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
    for (YNz1gE25msKJ = 0; YNz1gE25msKJ < w6Pfhq; YNz1gE25msKJ++) {
        Hhi8lAo = 1;
        scanf ("%d", &SYojCVE);
        for (LvfVkQyZUwlN = 2; LvfVkQyZUwlN < sqrt (SYojCVE); LvfVkQyZUwlN = LvfVkQyZUwlN +1)
            if (SYojCVE % LvfVkQyZUwlN == 0) {
                Hhi8lAo++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                Hhi8lAo = fun (LvfVkQyZUwlN, SYojCVE / LvfVkQyZUwlN, Hhi8lAo);
            }
        printf ("%d\n", Hhi8lAo);
    }
    return 0;
}

