int f (int qpCm8vz) {
    int t78V1zXxQEBJ, k, dDwOSC1PRXnW = (966 - 966), ZlXcDi6Ztsd;
    int sz [(954 - 939)];
    if ((783 - 783) > qpCm8vz) {
        ZlXcDi6Ztsd = -(455 - 454);
    }
    else {
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
        if (qpCm8vz > 0) {
            ZlXcDi6Ztsd = (687 - 686);
        }
        else {
            ZlXcDi6Ztsd = 0;
        };
    }
    qpCm8vz = fabs (qpCm8vz);
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
        t78V1zXxQEBJ = 397 - 396;
        while (1) {
            if (pow ((1010 - 1000), t78V1zXxQEBJ) > qpCm8vz) {
                break;
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
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            t78V1zXxQEBJ = t78V1zXxQEBJ + 1;
        };
    }
    {
        k = 0;
        while (t78V1zXxQEBJ > k) {
            sz[k] = qpCm8vz / pow ((209 - 199), t78V1zXxQEBJ - k - (667 - 666));
            qpCm8vz = qpCm8vz - sz[k] * pow (10, t78V1zXxQEBJ - k - (248 - 247));
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
            k++;
        };
    }
    for (k = 0; k < t78V1zXxQEBJ; k++) {
        dDwOSC1PRXnW += sz[k] * pow (10, k);
    }
    return dDwOSC1PRXnW * ZlXcDi6Ztsd;
}

int main () {
    int qpCm8vz;
    int t78V1zXxQEBJ;
    for (t78V1zXxQEBJ = 1; t78V1zXxQEBJ <= (213 - 207); t78V1zXxQEBJ = t78V1zXxQEBJ + 1) {
        scanf ("%d", &qpCm8vz);
        printf ("%d\n", f (qpCm8vz));
    };
}

