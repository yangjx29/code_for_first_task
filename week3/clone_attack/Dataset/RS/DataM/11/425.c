int lPx40h (int gKzd4HoX) {
    if ((!((218 - 218) != gKzd4HoX % 4) && !(0 == gKzd4HoX % (161 - 61))) || gKzd4HoX % 400 == 0)
        return 1;
    else
        return 0;
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
}

int main () {
    int a;
    int gKzd4HoX;
    int ZaYpt82OZr;
    int hfSg7DI;
    int i;
    int xbUIc5;
    a = 0;
    int Jrs7H0 [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d %d %d", &gKzd4HoX, &ZaYpt82OZr, &hfSg7DI);
    if (lPx40h (gKzd4HoX) == 1) {
        Jrs7H0[2]++;
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
    for (i = 0; i < ZaYpt82OZr; i = i + 1) {
        a += Jrs7H0[i];
    }
    xbUIc5 = a + hfSg7DI;
    printf ("%d", xbUIc5);
    return 0;
}

