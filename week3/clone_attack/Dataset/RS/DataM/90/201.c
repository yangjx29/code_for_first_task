int pf (int kPvfWlhM, int l4jyiVoGpIJW) {
    int wZcb7Fm, i = (627 - 627);
    if (kPvfWlhM == (21 - 21) || l4jyiVoGpIJW == (563 - 562))
        wZcb7Fm = (673 - 672);
    else if (kPvfWlhM < l4jyiVoGpIJW)
        wZcb7Fm = pf (kPvfWlhM, (l4jyiVoGpIJW - (627 - 626)));
    else
        wZcb7Fm = pf (kPvfWlhM, (l4jyiVoGpIJW - (951 - 950))) + pf ((kPvfWlhM - l4jyiVoGpIJW), l4jyiVoGpIJW);
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
    return wZcb7Fm;
}

int main () {
    int b4yzY70eg, kPvfWlhM, l4jyiVoGpIJW;
    scanf ("%d", &b4yzY70eg);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        int i = 1;
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
        while (i <= b4yzY70eg) {
            i++;
            scanf ("%d %d", &kPvfWlhM, &l4jyiVoGpIJW);
            printf ("%d\n", pf (kPvfWlhM, l4jyiVoGpIJW));
        };
    }
    return 0;
}

