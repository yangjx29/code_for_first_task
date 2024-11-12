int QNaX4Iufkp (int x, int y);

int main () {
    int y9I36bD [999];
    int MIeRPUjm83JF, a, d, m, n;
    int ad [999];
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
    {
        MIeRPUjm83JF = 716 - 715;
        while ((280 - 280) < MIeRPUjm83JF) {
            scanf ("%d%d\n", &ad[MIeRPUjm83JF], &y9I36bD[MIeRPUjm83JF]);
            if (!(0 != ad[MIeRPUjm83JF]) && y9I36bD[MIeRPUjm83JF] == 0) {
                break;
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
            printf ("%d\n", QNaX4Iufkp (ad[MIeRPUjm83JF], y9I36bD[MIeRPUjm83JF]));
            MIeRPUjm83JF = MIeRPUjm83JF +1;
        };
    }
    return 0;
}

int QNaX4Iufkp (int x, int y) {
    int MIeRPUjm83JF;
    int k;
    k = 0;
    {
        MIeRPUjm83JF = 2;
        while (MIeRPUjm83JF <= x) {
            k = ((y % MIeRPUjm83JF) + k) % MIeRPUjm83JF;
            MIeRPUjm83JF = MIeRPUjm83JF +1;
        };
    }
    return k + 1;
}

