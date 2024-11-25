int yGmygXo2Ki3R (int AULI67jXSca, int mpIWUjhi) {
    int PulxfyKLN6IB;
    int i;
    PulxfyKLN6IB = 1;
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
    if (AULI67jXSca < mpIWUjhi) {
        return (952 - 952);
    }
    {
        i = mpIWUjhi;
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
        while (AULI67jXSca > i) {
            if (AULI67jXSca % i == 0) {
                PulxfyKLN6IB += yGmygXo2Ki3R (AULI67jXSca / i, i);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            i++;
        };
    }
    return PulxfyKLN6IB;
}

main () {
    int n;
    int i;
    int TEi9e5AvQb8;
    int y;
    n = 0;
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
    i = 0;
    TEi9e5AvQb8 = 0;
    y = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            i++;
            scanf ("%d", &TEi9e5AvQb8);
            y = yGmygXo2Ki3R (TEi9e5AvQb8, 2);
            printf ("%d\n", y);
        };
    }
    return 0;
}

