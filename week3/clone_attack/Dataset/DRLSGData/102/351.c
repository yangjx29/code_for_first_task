int main () {
    int cjANeF1DSJ;
    int piU2jnL;
    int kKb2NkhGx;
    double  EOvkL8Q [(861 - 821)], WHx5tJVdXMow [(392 - 352)];
    int O25iqYOUuNSI;
    struct   ren {
        char GAmOl82 [(466 - 456)];
        double  KZjgWe3h;
    }
    X7c63jSgRT [(753 - 713)];
    int w3uPYsVoMzT;
    kKb2NkhGx = (503 - 503);
    w3uPYsVoMzT = (881 - 881);
    scanf ("%d", &cjANeF1DSJ);
    for (int yPBpYTe = (264 - 264);
    yPBpYTe < cjANeF1DSJ; yPBpYTe = yPBpYTe + (395 - 394)) {
        scanf ("%s%lf", X7c63jSgRT[yPBpYTe].GAmOl82, &X7c63jSgRT[yPBpYTe].KZjgWe3h);
        if (!((343 - 343) != strcmp (X7c63jSgRT[yPBpYTe].GAmOl82, "male"))) {
            EOvkL8Q[w3uPYsVoMzT] = X7c63jSgRT[yPBpYTe].KZjgWe3h;
            w3uPYsVoMzT = w3uPYsVoMzT + (528 - 527);
        }
        if (!((435 - 435) != strcmp (X7c63jSgRT[yPBpYTe].GAmOl82, "female"))) {
            WHx5tJVdXMow[kKb2NkhGx] = X7c63jSgRT[yPBpYTe].KZjgWe3h;
            kKb2NkhGx = kKb2NkhGx + (955 - 954);
        }
    }
    for (O25iqYOUuNSI = (863 - 862); w3uPYsVoMzT >= O25iqYOUuNSI; O25iqYOUuNSI = O25iqYOUuNSI +(732 - 731)) {
        double  jc3LeWU8s;
        for (int yPBpYTe = (994 - 994);
        yPBpYTe < w3uPYsVoMzT - O25iqYOUuNSI; yPBpYTe = yPBpYTe + (514 - 513)) {
            if (EOvkL8Q[yPBpYTe] > EOvkL8Q[yPBpYTe + (461 - 460)]) {
                jc3LeWU8s = EOvkL8Q[yPBpYTe + (45 - 44)];
                EOvkL8Q[yPBpYTe + (681 - 680)] = EOvkL8Q[yPBpYTe];
                EOvkL8Q[yPBpYTe] = jc3LeWU8s;
            }
        }
    }
    printf ("%.2lf", EOvkL8Q[(640 - 640)]);
    for (piU2jnL = (707 - 706); piU2jnL < w3uPYsVoMzT; piU2jnL = piU2jnL + (43 - 42)) {
        printf (" %.2lf", EOvkL8Q[piU2jnL]);
    }
    for (O25iqYOUuNSI = (613 - 612); kKb2NkhGx >= O25iqYOUuNSI; O25iqYOUuNSI = O25iqYOUuNSI +(274 - 273)) {
        double  jc3LeWU8s;
        for (int yPBpYTe = (116 - 116);
        kKb2NkhGx - O25iqYOUuNSI > yPBpYTe; yPBpYTe = yPBpYTe + (728 - 727)) {
            if (WHx5tJVdXMow[yPBpYTe] > WHx5tJVdXMow[yPBpYTe + (755 - 754)]) {
                jc3LeWU8s = WHx5tJVdXMow[yPBpYTe + 1];
                WHx5tJVdXMow[yPBpYTe + 1] = WHx5tJVdXMow[yPBpYTe];
                WHx5tJVdXMow[yPBpYTe] = jc3LeWU8s;
            }
        }
    }
    for (piU2jnL = kKb2NkhGx - 1; piU2jnL >= (826 - 826); piU2jnL = piU2jnL - 1) {
        printf (" %.2lf", WHx5tJVdXMow[piU2jnL]);
    }
    return 0;
}

