static int sSCQLf9kZGB8 [13] = {0, (971 - 940), 28, 31, (484 - 454), 31, 30, 31, 31, 30, 31, 30, 31};

static int Zt3aoYyOs (int d3XFxjtS9Ul) {
    return (!(0 != d3XFxjtS9Ul % 4) && !(0 == d3XFxjtS9Ul % (1089 - 989))) || !(0 != d3XFxjtS9Ul % 400);
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
    unsigned  long  int d3XFxjtS9Ul, oDaBJhWl, day, tTIvAEq, LSbCZ76jV, cyqQBe, K37p1oDcF4hP;
    unsigned  long  int x2qb89RfNoV;
    int lMZl4O0km2;
    lMZl4O0km2 = 0;
    int KbT7ZVcDh;
    scanf ("%d %d %d", &d3XFxjtS9Ul, &oDaBJhWl, &day);
    {
        KbT7ZVcDh = 1;
        while (oDaBJhWl > KbT7ZVcDh) {
            lMZl4O0km2 = lMZl4O0km2 + sSCQLf9kZGB8[KbT7ZVcDh];
            KbT7ZVcDh++;
        };
    }
    lMZl4O0km2 = lMZl4O0km2 + day;
    tTIvAEq = (int) (d3XFxjtS9Ul / 4);
    LSbCZ76jV = (int) (d3XFxjtS9Ul / 100);
    cyqQBe = (int) (d3XFxjtS9Ul / 400);
    if (!Zt3aoYyOs(d3XFxjtS9Ul)) {
        K37p1oDcF4hP = tTIvAEq + cyqQBe - LSbCZ76jV;
        x2qb89RfNoV = K37p1oDcF4hP *2 + (d3XFxjtS9Ul - K37p1oDcF4hP -1) * 1 + lMZl4O0km2;
    }
    if (Zt3aoYyOs (d3XFxjtS9Ul)) {
        K37p1oDcF4hP = tTIvAEq + cyqQBe - LSbCZ76jV;
        if (!(1 != oDaBJhWl) || !(2 != oDaBJhWl))
            x2qb89RfNoV = (K37p1oDcF4hP -1) * 2 + (d3XFxjtS9Ul - K37p1oDcF4hP) * 1 + lMZl4O0km2;
        else
            x2qb89RfNoV = (K37p1oDcF4hP -1) * 2 + (d3XFxjtS9Ul - K37p1oDcF4hP) * 1 + lMZl4O0km2 + 1;
    }
    if (x2qb89RfNoV % 7 == 1)
        printf ("Mon.\n");
    if (x2qb89RfNoV % 7 == 2)
        ;
    if (x2qb89RfNoV % 7 == 3)
        ;
    if (x2qb89RfNoV % 7 == 4)
        printf ("Thu.\n");
    if (x2qb89RfNoV % 7 == 5)
        ;
    if (x2qb89RfNoV % 7 == 6)
        printf ("Sat.\n");
    if (x2qb89RfNoV % 7 == 0)
        ;
}

