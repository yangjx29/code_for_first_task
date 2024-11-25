int main () {
    int p;
    int q;
    void  y (int MDnoNXuU, int m);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d%d", &q, &p);
    y (p, q);
    return 0;
}

void  y (int MDnoNXuU, int m) {
    if (MDnoNXuU == m)
        printf ("%d", MDnoNXuU);
    else if (m > MDnoNXuU) {
        if (m >= (2 * MDnoNXuU))
            y (m / 2, MDnoNXuU);
        else if (m < (2 * MDnoNXuU))
            y (m / 2, MDnoNXuU / 2);
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
        };
    }
    else
        y (m, MDnoNXuU);
}

