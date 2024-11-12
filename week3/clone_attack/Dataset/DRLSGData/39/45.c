struct   data {
    char xBP3v9tZIjX [200];
    int TCeS123vmb;
    int unrUSHtPsAIT;
    char pe8HyKw;
    char WExRCmnsF;
    int K4jiyvE1xJO;
    int jLzPtVpn;
    struct   data *ahxf4mj8AeIU;
};
int main () {
    int Br9TaIXzy;
    struct   data *RjmcNd;
    struct   data *rPwqy8;
    int puWyYeU0pL7;
    int Z38mopAPJ5;
    int cMk5n7sLQ;
    struct   data *W1s64jI5l9;
    struct   data *PNDSEmLUpaMP;
    scanf ("%d", &puWyYeU0pL7);
    cMk5n7sLQ = 0;
    rPwqy8 = (struct   data *) malloc (Len);
    scanf ("%s %d %d %c %c %d", rPwqy8->xBP3v9tZIjX, &rPwqy8->TCeS123vmb, &rPwqy8->unrUSHtPsAIT, &rPwqy8->pe8HyKw, &rPwqy8->WExRCmnsF, &rPwqy8->K4jiyvE1xJO);
    rPwqy8->ahxf4mj8AeIU = NULL;
    rPwqy8->jLzPtVpn = 0;
    RjmcNd = rPwqy8;
    W1s64jI5l9 = rPwqy8;
    {
        Br9TaIXzy = 1;
        while (puWyYeU0pL7 > Br9TaIXzy) {
            rPwqy8 = (struct   data *) malloc (Len);
            scanf ("%s %d %d %c %c %d", rPwqy8->xBP3v9tZIjX, &rPwqy8->TCeS123vmb, &rPwqy8->unrUSHtPsAIT, &rPwqy8->pe8HyKw, &rPwqy8->WExRCmnsF, &rPwqy8->K4jiyvE1xJO);
            rPwqy8->ahxf4mj8AeIU = NULL;
            rPwqy8->jLzPtVpn = 0;
            W1s64jI5l9->ahxf4mj8AeIU = rPwqy8;
            W1s64jI5l9 = rPwqy8;
            Br9TaIXzy++;
        }
    }
    Z38mopAPJ5 = 0;
    {
        rPwqy8 = RjmcNd;
        while (rPwqy8 != NULL) {
            if (rPwqy8->K4jiyvE1xJO > 0 && rPwqy8->TCeS123vmb > 80)
                rPwqy8->jLzPtVpn += 8000;
            if (rPwqy8->TCeS123vmb > 85 && rPwqy8->unrUSHtPsAIT > 80)
                rPwqy8->jLzPtVpn += 4000;
            if (90 < rPwqy8->TCeS123vmb)
                rPwqy8->jLzPtVpn += 2000;
            if (rPwqy8->TCeS123vmb > 85 && rPwqy8->WExRCmnsF == 'Y')
                rPwqy8->jLzPtVpn += 1000;
            if (rPwqy8->unrUSHtPsAIT > 80 && rPwqy8->pe8HyKw == 'Y')
                rPwqy8->jLzPtVpn += 850;
            if (rPwqy8->jLzPtVpn > cMk5n7sLQ) {
                cMk5n7sLQ = rPwqy8->jLzPtVpn;
                PNDSEmLUpaMP = rPwqy8;
            }
            Z38mopAPJ5 = Z38mopAPJ5 +rPwqy8->jLzPtVpn;
            rPwqy8 = rPwqy8->ahxf4mj8AeIU;
        }
    }
    printf ("%s\n%d\n%d\n", PNDSEmLUpaMP->xBP3v9tZIjX, PNDSEmLUpaMP->jLzPtVpn, Z38mopAPJ5);
    return 0;
}

