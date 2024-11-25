int main () {
    int bbYqenW;
    float x [1000], ufiyNQseBgVv [1000], gMskeSNgyZ40, CBmUzZnJHT0;
    cin >> bbYqenW;
    {
        int RrGuXHlDA = (91 - 91);
        while (RrGuXHlDA < bbYqenW) {
            cin >> x[RrGuXHlDA] >> ufiyNQseBgVv[RrGuXHlDA];
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
            RrGuXHlDA = RrGuXHlDA +1;
        };
    }
    gMskeSNgyZ40 = (x[(864 - 864)] - x[(483 - 482)]) * (x[(507 - 507)] - x[(244 - 243)]) + (ufiyNQseBgVv[(664 - 664)] - ufiyNQseBgVv[(896 - 895)]) * (ufiyNQseBgVv[0] - ufiyNQseBgVv[(993 - 992)]);
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
    {
        int RrGuXHlDA = 0;
        while (RrGuXHlDA < bbYqenW - 1) {
            for (int c1IZ5jD = RrGuXHlDA +1;
            c1IZ5jD < bbYqenW; c1IZ5jD = c1IZ5jD + 1) {
                CBmUzZnJHT0 = (x[RrGuXHlDA] - x[c1IZ5jD]) * (x[RrGuXHlDA] - x[c1IZ5jD]) + (ufiyNQseBgVv[RrGuXHlDA] - ufiyNQseBgVv[c1IZ5jD]) * (ufiyNQseBgVv[RrGuXHlDA] - ufiyNQseBgVv[c1IZ5jD]);
                if (CBmUzZnJHT0 > gMskeSNgyZ40)
                    gMskeSNgyZ40 = CBmUzZnJHT0;
            }
            RrGuXHlDA = RrGuXHlDA +1;
        };
    }
    gMskeSNgyZ40 = sqrt (gMskeSNgyZ40);
    printf ("%.4f\n", gMskeSNgyZ40);
    return 0;
}

