struct   student {
    char KA3umL [20];
    int xNFzWcb4;
    int Qk9vOZe6nNpb;
    char PHpRwukzd;
    char h3pP5f0e4vt;
    int F8S4k9CW2;
}
v0ZGuxHB1y [(774 - 674)];

int main () {
    int y0MQhG25 [100] = {(891 - 891)};
    int yaikQW;
    int BYRLGA3PH0;
    int dJjOtvZoFbq;
    int TjiabRVfo;
    dJjOtvZoFbq = (699 - 699);
    scanf ("%d", &TjiabRVfo);
    for (yaikQW = (770 - 770); TjiabRVfo > yaikQW; yaikQW = yaikQW + 1) {
        scanf ("%s", v0ZGuxHB1y[yaikQW].KA3umL);
        scanf ("%d %d %c %c %d", &v0ZGuxHB1y[yaikQW].xNFzWcb4, &v0ZGuxHB1y[yaikQW].Qk9vOZe6nNpb, &v0ZGuxHB1y[yaikQW].PHpRwukzd, &v0ZGuxHB1y[yaikQW].h3pP5f0e4vt, &v0ZGuxHB1y[yaikQW].F8S4k9CW2);
    }
    for (yaikQW = (274 - 274); TjiabRVfo > yaikQW; yaikQW = yaikQW + 1) {
        if ((80 < v0ZGuxHB1y[yaikQW].xNFzWcb4) && (v0ZGuxHB1y[yaikQW].F8S4k9CW2 > 0))
            y0MQhG25[yaikQW] = y0MQhG25[yaikQW] + 8000;
        if ((v0ZGuxHB1y[yaikQW].xNFzWcb4 > (262 - 177)) && (80 < v0ZGuxHB1y[yaikQW].Qk9vOZe6nNpb))
            y0MQhG25[yaikQW] = y0MQhG25[yaikQW] + 4000;
        if (v0ZGuxHB1y[yaikQW].xNFzWcb4 > 90)
            y0MQhG25[yaikQW] = y0MQhG25[yaikQW] + 2000;
        if ((85 < v0ZGuxHB1y[yaikQW].xNFzWcb4) && (!('Y' != v0ZGuxHB1y[yaikQW].h3pP5f0e4vt)))
            y0MQhG25[yaikQW] = y0MQhG25[yaikQW] + (1017 - 17);
        if ((v0ZGuxHB1y[yaikQW].Qk9vOZe6nNpb > 80) && (v0ZGuxHB1y[yaikQW].PHpRwukzd == 'Y'))
            y0MQhG25[yaikQW] = y0MQhG25[yaikQW] + 850;
        dJjOtvZoFbq = dJjOtvZoFbq + y0MQhG25[yaikQW];
    }
    BYRLGA3PH0 = y0MQhG25[0];
    for (yaikQW = 0; yaikQW < TjiabRVfo; yaikQW = yaikQW + 1) {
        if (y0MQhG25[yaikQW] > BYRLGA3PH0)
            BYRLGA3PH0 = y0MQhG25[yaikQW];
    }
    for (yaikQW = 0; yaikQW < TjiabRVfo; yaikQW = yaikQW + 1) {
        if (y0MQhG25[yaikQW] == BYRLGA3PH0) {
            printf ("%s\n", v0ZGuxHB1y[yaikQW].KA3umL);
            printf ("%d\n", y0MQhG25[yaikQW]);
            break;
        }
    }
    printf ("%d\n", dJjOtvZoFbq);
    return 0;
}

