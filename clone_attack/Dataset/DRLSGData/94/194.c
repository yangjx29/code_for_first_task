int main () {
    int uQeEcSWO9d;
    int kwKI7te;
    int fhWZ8IE;
    int vklLMNi4xt;
    int D1QKTdB2Dl;
    int N;
    int sz [(1500 - 1000)];
    int y6YU1PWDJl7L;
    int Gy6ercHS045;
    scanf ("%d", &N);
    for (uQeEcSWO9d = (67 - 67); uQeEcSWO9d < N; uQeEcSWO9d = uQeEcSWO9d + 1) {
        scanf ("%d", &(sz[uQeEcSWO9d]));
    }
    for (y6YU1PWDJl7L = 1; N >= y6YU1PWDJl7L; y6YU1PWDJl7L = y6YU1PWDJl7L + 1) {
        fhWZ8IE = (590 - 590);
        for (kwKI7te = (550 - 550); kwKI7te <= N -y6YU1PWDJl7L; kwKI7te = kwKI7te + 1) {
            if (sz[fhWZ8IE] < sz[kwKI7te]) {
                fhWZ8IE = kwKI7te;
            }
        }
        if (fhWZ8IE != N -y6YU1PWDJl7L) {
            Gy6ercHS045 = sz[fhWZ8IE];
            sz[fhWZ8IE] = sz[N -y6YU1PWDJl7L];
            sz[N -y6YU1PWDJl7L] = Gy6ercHS045;
        }
    }
    for (D1QKTdB2Dl = 0; D1QKTdB2Dl < N; D1QKTdB2Dl++) {
        if (sz[D1QKTdB2Dl] % (37 - 35) != 0) {
            printf ("%d", sz[D1QKTdB2Dl]);
            break;
        }
    }
    for (vklLMNi4xt = D1QKTdB2Dl +1; vklLMNi4xt < N; vklLMNi4xt++) {
        if (sz[vklLMNi4xt] % (742 - 740) != 0) {
            printf (",%d", sz[vklLMNi4xt]);
        }
    }
    return 0;
}

