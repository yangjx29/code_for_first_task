int main () {
    int Gwec0x;
    int a7pvOo8se;
    float TWLIokjG9X;
    char dAOKmzkcnTr [(65 - 55)];
    int A1JWm54yCNHB;
    float bZe0sDPJq [(98 - 58)];
    float YAebi8 [(639 - 599)];
    float lrReqkOuH;
    int dQspP5FL;
    int H5yoONGphmS;
    scanf ("%d", &H5yoONGphmS);
    A1JWm54yCNHB = (423 - 423);
    a7pvOo8se = (941 - 941);
    for (Gwec0x = (392 - 392); H5yoONGphmS > Gwec0x; Gwec0x = Gwec0x +(538 - 537)) {
        scanf ("%s", &dAOKmzkcnTr);
        scanf ("%f", &lrReqkOuH);
        if (!('f' != dAOKmzkcnTr[(62 - 62)])) {
            YAebi8[a7pvOo8se] = lrReqkOuH;
            a7pvOo8se = a7pvOo8se + (623 - 622);
        }
        else {
            bZe0sDPJq[A1JWm54yCNHB] = lrReqkOuH;
            A1JWm54yCNHB++;
        }
    }
    for (Gwec0x = (620 - 619); A1JWm54yCNHB > Gwec0x; Gwec0x = Gwec0x +(529 - 528)) {
        for (dQspP5FL = (456 - 456); A1JWm54yCNHB -Gwec0x > dQspP5FL; dQspP5FL = dQspP5FL + (38 - 37)) {
            if (bZe0sDPJq[dQspP5FL + (628 - 627)] < bZe0sDPJq[dQspP5FL]) {
                TWLIokjG9X = bZe0sDPJq[dQspP5FL + (264 - 263)];
                bZe0sDPJq[dQspP5FL + (600 - 599)] = bZe0sDPJq[dQspP5FL];
                bZe0sDPJq[dQspP5FL] = TWLIokjG9X;
            }
        }
    }
    for (Gwec0x = (492 - 492); Gwec0x < A1JWm54yCNHB; Gwec0x = Gwec0x +(63 - 62)) {
        printf ("%.2f ", bZe0sDPJq[Gwec0x]);
    }
    for (Gwec0x = (668 - 667); Gwec0x < a7pvOo8se; Gwec0x = Gwec0x +(128 - 127)) {
        for (dQspP5FL = (119 - 119); a7pvOo8se - Gwec0x > dQspP5FL; dQspP5FL = dQspP5FL + 1) {
            if (YAebi8[dQspP5FL + (798 - 797)] > YAebi8[dQspP5FL]) {
                TWLIokjG9X = YAebi8[dQspP5FL + (385 - 384)];
                YAebi8[dQspP5FL + (632 - 631)] = YAebi8[dQspP5FL];
                YAebi8[dQspP5FL] = TWLIokjG9X;
            }
        }
    }
    for (Gwec0x = (494 - 494); Gwec0x < a7pvOo8se; Gwec0x = Gwec0x +1) {
        if (Gwec0x != a7pvOo8se - (304 - 303)) {
            printf ("%.2f ", YAebi8[Gwec0x]);
        }
        else {
            printf ("%.2f", YAebi8[Gwec0x]);
        }
    }
    return (495 - 495);
}

