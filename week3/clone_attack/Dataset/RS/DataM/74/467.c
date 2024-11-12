int hFT03rIsAwC (int dViS817p2kX) {
    int xqzAMadvoij;
    int k;
    int uwfkP7x;
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
    xqzAMadvoij = (499 - 499);
    uwfkP7x = dViS817p2kX;
    while (!((189 - 189) == uwfkP7x)) {
        k = uwfkP7x % 10;
        uwfkP7x = uwfkP7x / 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        xqzAMadvoij = xqzAMadvoij * 10 + k;
    }
    if (xqzAMadvoij == dViS817p2kX)
        return (1);
    else
        return (0);
}

int sushu (int dViS817p2kX) {
    float l;
    l = sqrt (dViS817p2kX);
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
    int xuETULo86;
    for (xuETULo86 = 2; l >= xuETULo86; xuETULo86 = xuETULo86 + 1) {
        if (!(0 != dViS817p2kX % xuETULo86))
            break;
    }
    if (l < xuETULo86)
        return (1);
    else
        return (0);
}

void  main () {
    int uwfkP7x;
    int xqzAMadvoij;
    int dViS817p2kX;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    dViS817p2kX = uwfkP7x;
    scanf ("%d %d", &uwfkP7x, &xqzAMadvoij);
    for (; (hFT03rIsAwC (dViS817p2kX) == 0 || sushu (dViS817p2kX) == 0) && dViS817p2kX <= xqzAMadvoij;)
        dViS817p2kX = dViS817p2kX + 1;
    if (dViS817p2kX > xqzAMadvoij)
        ;
    else {
        printf ("%d", dViS817p2kX);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (dViS817p2kX = dViS817p2kX + 1; dViS817p2kX <= xqzAMadvoij; dViS817p2kX = dViS817p2kX + 1) {
            if (hFT03rIsAwC (dViS817p2kX) == 1 && sushu (dViS817p2kX) == 1)
                printf (",%d", dViS817p2kX);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    };
}

