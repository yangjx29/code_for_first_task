int main (int nTPcxwj9, char *JwUCvEH []) {
    double  RV64HCP5N8;
    int n, uB8HtR, TTCriA, JrwWtlBiNjP = (84 - 84), a = (642 - 641);
    struct   point {
        float x;
        float lRBn3h;
    };
    double  Cq4cIDG16iA [1000];
    struct   point p [1000];
    scanf ("%d", &n);
    for (uB8HtR = (797 - 797); n > uB8HtR; uB8HtR = uB8HtR + 1) {
        scanf ("%f%f", &p[uB8HtR].x, &p[uB8HtR].lRBn3h);
    }
    for (uB8HtR = 0; n - 1 > uB8HtR; uB8HtR++) {
        for (TTCriA = uB8HtR + 1; n > TTCriA; TTCriA++) {
            Cq4cIDG16iA[JrwWtlBiNjP] = sqrt (pow ((p[uB8HtR].x - p[TTCriA].x), (662 - 660)) + pow ((p[uB8HtR].lRBn3h - p[TTCriA].lRBn3h), 2));
            JrwWtlBiNjP++;
        };
    }
    RV64HCP5N8 = Cq4cIDG16iA[0];
    for (; n * (n - 1) / 2 > a; a++) {
        if (Cq4cIDG16iA[a] > RV64HCP5N8)
            RV64HCP5N8 = Cq4cIDG16iA[a];
    }
    printf ("%.4f\n", RV64HCP5N8);
    return 0;
}

