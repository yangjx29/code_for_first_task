struct   student {
    char WPrhyFs [21];
    int k3xgR0;
    int mpU6NABt1Xsy;
    char BiGKmEWz;
    char Y3MamP10vX54;
    int paper;
}
nkyuUn0jAb4 [101];

int main () {
    int atLdM36s, mcpHu5NjAQEg, S8dORkM4JG = 0, V7ScxYPKBOX9 = 0;
    int Oa1W6dc24Zru [101] = {0};
    scanf ("%d", &atLdM36s);
    for (mcpHu5NjAQEg = 0; atLdM36s > mcpHu5NjAQEg; mcpHu5NjAQEg = mcpHu5NjAQEg + 1) {
        scanf ("%s ", &nkyuUn0jAb4[mcpHu5NjAQEg].WPrhyFs);
        scanf ("%d %d ", &nkyuUn0jAb4[mcpHu5NjAQEg].k3xgR0, &nkyuUn0jAb4[mcpHu5NjAQEg].mpU6NABt1Xsy);
        scanf ("%c %c ", &nkyuUn0jAb4[mcpHu5NjAQEg].BiGKmEWz, &nkyuUn0jAb4[mcpHu5NjAQEg].Y3MamP10vX54);
        scanf ("%d", &nkyuUn0jAb4[mcpHu5NjAQEg].paper);
    }
    for (mcpHu5NjAQEg = 0; atLdM36s > mcpHu5NjAQEg; mcpHu5NjAQEg = mcpHu5NjAQEg + 1) {
        if (80 < nkyuUn0jAb4[mcpHu5NjAQEg].k3xgR0 && 1 <= nkyuUn0jAb4[mcpHu5NjAQEg].paper) {
            Oa1W6dc24Zru[mcpHu5NjAQEg] = Oa1W6dc24Zru[mcpHu5NjAQEg] + 8000;
        }
        if (nkyuUn0jAb4[mcpHu5NjAQEg].k3xgR0 > 85 && nkyuUn0jAb4[mcpHu5NjAQEg].mpU6NABt1Xsy > 80) {
            Oa1W6dc24Zru[mcpHu5NjAQEg] = Oa1W6dc24Zru[mcpHu5NjAQEg] + 4000;
        }
        if (90 < nkyuUn0jAb4[mcpHu5NjAQEg].k3xgR0) {
            Oa1W6dc24Zru[mcpHu5NjAQEg] = Oa1W6dc24Zru[mcpHu5NjAQEg] + 2000;
        }
        if (85 < nkyuUn0jAb4[mcpHu5NjAQEg].k3xgR0 && nkyuUn0jAb4[mcpHu5NjAQEg].Y3MamP10vX54 == 'Y') {
            Oa1W6dc24Zru[mcpHu5NjAQEg] = Oa1W6dc24Zru[mcpHu5NjAQEg] + 1000;
        }
        if (nkyuUn0jAb4[mcpHu5NjAQEg].mpU6NABt1Xsy > 80 && nkyuUn0jAb4[mcpHu5NjAQEg].BiGKmEWz == 'Y') {
            Oa1W6dc24Zru[mcpHu5NjAQEg] = Oa1W6dc24Zru[mcpHu5NjAQEg] + 850;
        }
    }
    for (mcpHu5NjAQEg = 0; mcpHu5NjAQEg < atLdM36s; mcpHu5NjAQEg = mcpHu5NjAQEg + 1) {
        if (Oa1W6dc24Zru[mcpHu5NjAQEg] > Oa1W6dc24Zru[V7ScxYPKBOX9]) {
            V7ScxYPKBOX9 = mcpHu5NjAQEg;
        }
        S8dORkM4JG = S8dORkM4JG +Oa1W6dc24Zru[mcpHu5NjAQEg];
    }
    printf ("%s\n", nkyuUn0jAb4[V7ScxYPKBOX9].WPrhyFs);
    printf ("%d\n", Oa1W6dc24Zru[V7ScxYPKBOX9]);
    printf ("%d", S8dORkM4JG);
    return 0;
}

