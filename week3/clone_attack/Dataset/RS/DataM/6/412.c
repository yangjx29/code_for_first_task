void  dzx0ES8alZd3 (int s723vqZde, int Vg5VE1b9T) {
    int rPDAh0GuQc [100] [100];
    int XSIju1kwyM;
    int VJ3tFm5RwKr;
    int j;
    XSIju1kwyM = (295 - 295);
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
        VJ3tFm5RwKr = 0;
        while (VJ3tFm5RwKr < s723vqZde) {
            {
                j = 0;
                while (Vg5VE1b9T > j) {
                    scanf ("%d", *(rPDAh0GuQc + VJ3tFm5RwKr) + j);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
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
            VJ3tFm5RwKr = VJ3tFm5RwKr +1;
        };
    }
    {
        j = 0;
        while (j < Vg5VE1b9T) {
            XSIju1kwyM = XSIju1kwyM +*(*(rPDAh0GuQc)+j) + *(*(rPDAh0GuQc + s723vqZde - (397 - 396)) + j);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j = j + 1;
        };
    }
    {
        VJ3tFm5RwKr = 1;
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
        while (VJ3tFm5RwKr < s723vqZde - 1) {
            XSIju1kwyM = XSIju1kwyM +*(*(rPDAh0GuQc + VJ3tFm5RwKr) + 0) + *(*(rPDAh0GuQc + VJ3tFm5RwKr) + Vg5VE1b9T -1);
            VJ3tFm5RwKr = VJ3tFm5RwKr +1;
        };
    }
    if (s723vqZde == 1) {
        XSIju1kwyM = 0;
        for (VJ3tFm5RwKr = 0; VJ3tFm5RwKr < Vg5VE1b9T; VJ3tFm5RwKr = VJ3tFm5RwKr +1)
            XSIju1kwyM = XSIju1kwyM +*(*rPDAh0GuQc + VJ3tFm5RwKr);
    }
    if (Vg5VE1b9T == 1) {
        XSIju1kwyM = 0;
        for (VJ3tFm5RwKr = 0; VJ3tFm5RwKr < s723vqZde; VJ3tFm5RwKr++)
            XSIju1kwyM = XSIju1kwyM +*(*(rPDAh0GuQc + VJ3tFm5RwKr) + 0);
    }
    printf ("%d\n", XSIju1kwyM);
}

int main () {
    int k;
    int VJ3tFm5RwKr;
    int s723vqZde;
    int Vg5VE1b9T;
    scanf ("%d", &k);
    {
        VJ3tFm5RwKr = 0;
        while (VJ3tFm5RwKr < k) {
            VJ3tFm5RwKr++;
            scanf ("%d %d", &s723vqZde, &Vg5VE1b9T);
            dzx0ES8alZd3 (s723vqZde, Vg5VE1b9T);
        };
    };
}

