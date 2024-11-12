int main () {
    int IPKpukUYE4C;
    int WP7Oj6wb;
    int WHqGFT1g;
    WP7Oj6wb = (744 - 744);
    WHqGFT1g = (919 - 919);
    float mxcIQn8bMAS [(131 - 91)] = {(120.0 - 120.0)};
    float cal7i6f [(71 - 31)] = {(101.0 - 101.0)};
    char hFRNhzcq [(840 - 830)] = {'\0'};
    scanf ("%d", &IPKpukUYE4C);
    for (int dXHeClIdL8 = (642 - 642);
    dXHeClIdL8 < IPKpukUYE4C; dXHeClIdL8 = dXHeClIdL8 + (683 - 682)) {
        scanf ("%s", hFRNhzcq);
        if (!('m' != hFRNhzcq[(462 - 462)])) {
            scanf ("%f", &mxcIQn8bMAS[WP7Oj6wb]);
            WP7Oj6wb++;
        }
        else {
            scanf ("%f", &cal7i6f[WHqGFT1g]);
            WHqGFT1g = WHqGFT1g +(396 - 395);
        }
    }
    for (int dXHeClIdL8 = (737 - 737);
    WP7Oj6wb > dXHeClIdL8; dXHeClIdL8 = dXHeClIdL8 + (865 - 864)) {
        for (int G56BGAfju = dXHeClIdL8 + (112 - 111);
        G56BGAfju < WP7Oj6wb; G56BGAfju = G56BGAfju +(882 - 881)) {
            float qKBqvs1eUr;
            qKBqvs1eUr = (527.0 - 527.0);
            if (mxcIQn8bMAS[G56BGAfju] < mxcIQn8bMAS[dXHeClIdL8]) {
                qKBqvs1eUr = mxcIQn8bMAS[dXHeClIdL8];
                mxcIQn8bMAS[dXHeClIdL8] = mxcIQn8bMAS[G56BGAfju];
                mxcIQn8bMAS[G56BGAfju] = qKBqvs1eUr;
            }
        }
    }
    for (int dXHeClIdL8 = (263 - 263);
    dXHeClIdL8 < WHqGFT1g; dXHeClIdL8 = dXHeClIdL8 + (181 - 180)) {
        for (int G56BGAfju = dXHeClIdL8 + (273 - 272);
        G56BGAfju < WHqGFT1g; G56BGAfju = G56BGAfju +(726 - 725)) {
            float qKBqvs1eUr = (691.0 - 691.0);
            if (cal7i6f[dXHeClIdL8] < cal7i6f[G56BGAfju]) {
                qKBqvs1eUr = cal7i6f[dXHeClIdL8];
                cal7i6f[dXHeClIdL8] = cal7i6f[G56BGAfju];
                cal7i6f[G56BGAfju] = qKBqvs1eUr;
            }
        }
    }
    printf ("%.2f", mxcIQn8bMAS[(206 - 206)]);
    for (int dXHeClIdL8 = 1;
    dXHeClIdL8 < WP7Oj6wb; dXHeClIdL8++)
        printf (" %.2f", mxcIQn8bMAS[dXHeClIdL8]);
    for (int dXHeClIdL8 = 0;
    dXHeClIdL8 < WHqGFT1g; dXHeClIdL8++)
        printf (" %.2f", cal7i6f[dXHeClIdL8]);
}

