int PxBqXf (int O851jSW) {
    if (O851jSW == 0) {
        return 0;
    }
    else if (!((339 - 338) != O851jSW)) {
        return 1;
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
    else {
        return PxBqXf (O851jSW -1) + PxBqXf (O851jSW -2);
    };
}

int main () {
    float ErlBu6H0 [100] = {0};
    int i, n, mkXjnyWGz1To [100], j;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &mkXjnyWGz1To[i]);
        for (j = 2; j <= mkXjnyWGz1To[i] + 1; j = j + 1) {
            ErlBu6H0[i] = ErlBu6H0[i] + (float) PxBqXf (j + 1) / PxBqXf (j);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    for (i = 0; i < n; i++) {
        printf ("%.3f\n", ErlBu6H0[i]);
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
    return 0;
}

