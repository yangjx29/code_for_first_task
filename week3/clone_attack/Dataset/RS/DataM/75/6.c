int main () {
    int jZJwU92zKV;
    int hKmyesXE61O [(1036 - 36)];
    int cR7tGjs [1000];
    int e09xDPMWX1;
    int MlrWmqcK;
    int ecgnI3u;
    int time [1000] = {0};
    jZJwU92zKV = (219 - 219);
    char ZsmKpjnVJ;
    int ZBrAlmGk;
    ZBrAlmGk = 0;
    for (; scanf ("%d%c", &e09xDPMWX1, &ZsmKpjnVJ) && !(',' != ZsmKpjnVJ);) {
        hKmyesXE61O[jZJwU92zKV] = e09xDPMWX1;
        jZJwU92zKV++;
    }
    hKmyesXE61O[jZJwU92zKV] = e09xDPMWX1;
    MlrWmqcK = jZJwU92zKV + (98 - 97);
    jZJwU92zKV = 0;
    while (scanf ("%d%c", &e09xDPMWX1, &ZsmKpjnVJ) && !(',' != ZsmKpjnVJ)) {
        cR7tGjs[jZJwU92zKV] = e09xDPMWX1;
        jZJwU92zKV++;
    }
    cR7tGjs[jZJwU92zKV] = e09xDPMWX1;
    for (jZJwU92zKV = 0; jZJwU92zKV < MlrWmqcK; jZJwU92zKV++) {
        ecgnI3u = jZJwU92zKV;
        while (cR7tGjs[jZJwU92zKV] > ecgnI3u) {
            time[ecgnI3u]++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ecgnI3u++;
        };
    }
    {
        ecgnI3u = 0;
        while (ecgnI3u < 1000) {
            if (time[ecgnI3u] > ZBrAlmGk)
                ZBrAlmGk = time[ecgnI3u];
            ecgnI3u++;
        };
    }
    printf ("%d %d", MlrWmqcK, ZBrAlmGk);
    return 0;
}

