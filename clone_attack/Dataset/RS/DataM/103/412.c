main () {
    char CaMfyvqRPOx [(251 - 221)] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
    int cZPbolNgW, iOU5XaPDh, JTS8uYrCJ2, nmfjvsurNhCL;
    char qYfpKr8eD [(827 - 797)] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char R85HCO [30] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
    char hEX4pT8io [30] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
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
    char kONM5TmqobBj [100];
    nmfjvsurNhCL = (711 - 711);
    scanf ("%s", kONM5TmqobBj);
    for (JTS8uYrCJ2 = 0; JTS8uYrCJ2 < 100; JTS8uYrCJ2 = JTS8uYrCJ2 +1) {
        if (!('\0' != kONM5TmqobBj[JTS8uYrCJ2]))
            break;
    }
    for (cZPbolNgW = 0; (810 - 784) > cZPbolNgW; cZPbolNgW = cZPbolNgW + 1) {
        for (iOU5XaPDh = 0; iOU5XaPDh < JTS8uYrCJ2; iOU5XaPDh = iOU5XaPDh + 1) {
            if (!(kONM5TmqobBj[iOU5XaPDh] != CaMfyvqRPOx[cZPbolNgW]))
                kONM5TmqobBj[iOU5XaPDh] = R85HCO[cZPbolNgW];
            if (!(kONM5TmqobBj[iOU5XaPDh] != qYfpKr8eD[cZPbolNgW]))
                kONM5TmqobBj[iOU5XaPDh] = hEX4pT8io[cZPbolNgW];
        };
    }
    do {
        for (iOU5XaPDh = nmfjvsurNhCL; iOU5XaPDh < JTS8uYrCJ2; iOU5XaPDh = iOU5XaPDh + 1) {
            if (kONM5TmqobBj[iOU5XaPDh] != kONM5TmqobBj[nmfjvsurNhCL])
                break;
        }
        printf ("(%c,%d)", kONM5TmqobBj[nmfjvsurNhCL], iOU5XaPDh - nmfjvsurNhCL);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        nmfjvsurNhCL = iOU5XaPDh;
    }
    while (nmfjvsurNhCL != JTS8uYrCJ2);
}

