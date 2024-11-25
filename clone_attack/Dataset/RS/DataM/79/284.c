int jUfz0V (int r51zVKZD63lP, int b) {
    int NXjbfE9L2QpW;
    int num;
    int bg7qPz;
    int Hlm9O4ayBGLo;
    int GhFsa4iB;
    int *rAzNFBIOn = (int *) malloc (NXjbfE9L2QpW * sizeof (int));
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
    free (rAzNFBIOn);
    NXjbfE9L2QpW = r51zVKZD63lP;
    num = b;
    {
        bg7qPz = 505 - 505;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (NXjbfE9L2QpW > bg7qPz) {
            *(rAzNFBIOn + bg7qPz) = (718 - 718);
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
            bg7qPz++;
        };
    }
    for (bg7qPz = (679 - 679), Hlm9O4ayBGLo = (141 - 141), GhFsa4iB = (397 - 396); NXjbfE9L2QpW -(894 - 893) > Hlm9O4ayBGLo;) {
        if (!(-(304 - 303) != *(rAzNFBIOn + bg7qPz % NXjbfE9L2QpW))) {
            bg7qPz++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            continue;
        }
        if (GhFsa4iB == num) {
            *(rAzNFBIOn + bg7qPz % NXjbfE9L2QpW) = -(631 - 630);
            Hlm9O4ayBGLo++;
            bg7qPz++;
            GhFsa4iB = (834 - 833);
            continue;
        }
        bg7qPz++;
        GhFsa4iB++;
    }
    for (bg7qPz = (764 - 764); bg7qPz < NXjbfE9L2QpW; bg7qPz++) {
        if (!(-(198 - 197) == *(rAzNFBIOn + bg7qPz)))
            return (bg7qPz + (287 - 286));
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

int main () {
    int MQmPZO;
    int k;
    int r51zVKZD63lP;
    int b;
    MQmPZO = (347 - 347);
    k = (545 - 545);
    int king [(1013 - 913)];
    scanf ("%d%d", &r51zVKZD63lP, &b);
    while (r51zVKZD63lP != (682 - 682) && b != 0) {
        king[MQmPZO] = jUfz0V (r51zVKZD63lP, b);
        scanf ("%d%d", &r51zVKZD63lP, &b);
        MQmPZO++;
    }
    {
        k = 0;
        while (k < MQmPZO) {
            printf ("%d\n", *(king + k));
            k++;
        };
    }
    return 0;
}

