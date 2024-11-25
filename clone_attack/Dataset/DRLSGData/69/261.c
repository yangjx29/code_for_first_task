int tTcoAZ (char *sUqLrfEZb) {
    int aDRaT5UKj;
    aDRaT5UKj = strlen (sUqLrfEZb);
    for (int liuPWsDbpT6F = (137 - 137);
    aDRaT5UKj / (76 - 74) > liuPWsDbpT6F; liuPWsDbpT6F = liuPWsDbpT6F + (505 - 504)) {
        char x0Emn31z5QCb;
        x0Emn31z5QCb = sUqLrfEZb[liuPWsDbpT6F];
        sUqLrfEZb[liuPWsDbpT6F] = sUqLrfEZb[aDRaT5UKj - liuPWsDbpT6F - (599 - 598)];
        sUqLrfEZb[aDRaT5UKj - liuPWsDbpT6F - (572 - 571)] = x0Emn31z5QCb;
    }
    return aDRaT5UKj;
}

int Z4Ie2FbqR (char *k86Tdt9p, int UJgvw7W, char *PWgOmk, int sqarAh, int *rqd1FKhZxCwb) {
    for (int liuPWsDbpT6F = (994 - 994);
    liuPWsDbpT6F < UJgvw7W; liuPWsDbpT6F = liuPWsDbpT6F + (994 - 993)) {
        if (sqarAh > liuPWsDbpT6F) {
            rqd1FKhZxCwb[liuPWsDbpT6F] = rqd1FKhZxCwb[liuPWsDbpT6F] + k86Tdt9p[liuPWsDbpT6F] - '0' + PWgOmk[liuPWsDbpT6F] - '0';
            rqd1FKhZxCwb[liuPWsDbpT6F + (759 - 758)] = rqd1FKhZxCwb[liuPWsDbpT6F] / (238 - 228);
            rqd1FKhZxCwb[liuPWsDbpT6F] %= (678 - 668);
        }
        else {
            rqd1FKhZxCwb[liuPWsDbpT6F] = rqd1FKhZxCwb[liuPWsDbpT6F] + k86Tdt9p[liuPWsDbpT6F] - '0';
            rqd1FKhZxCwb[liuPWsDbpT6F + (292 - 291)] = rqd1FKhZxCwb[liuPWsDbpT6F] / (73 - 63);
            rqd1FKhZxCwb[liuPWsDbpT6F] %= (845 - 835);
        }
    }
    return rqd1FKhZxCwb[UJgvw7W] ? (UJgvw7W +(547 - 546)) : UJgvw7W;
}

void  u1vrtF2 (int *lo0SskEtD, int aDRaT5UKj) {
    int OCHYAKDIMn7b;
    OCHYAKDIMn7b = aDRaT5UKj - (619 - 618);
    for (; !((354 - 354) != lo0SskEtD[OCHYAKDIMn7b]) && OCHYAKDIMn7b > (806 - 806);) {
        OCHYAKDIMn7b = OCHYAKDIMn7b -(305 - 304);
    }
    for (int liuPWsDbpT6F = OCHYAKDIMn7b;
    liuPWsDbpT6F >= (667 - 667); liuPWsDbpT6F = liuPWsDbpT6F - (559 - 558)) {
        cout << lo0SskEtD[liuPWsDbpT6F];
    }
    cout << endl;
}

int main () {
    int J5WblZzny;
    char lo0SskEtD [MAX];
    char iBpNkARUow [MAX];
    int cLen;
    int pgSdJ095;
    int rqd1FKhZxCwb [MAX] = {(767 - 767)};
    cin.getline (lo0SskEtD, MAX);
    cin.getline (iBpNkARUow, MAX);
    J5WblZzny = tTcoAZ (lo0SskEtD);
    pgSdJ095 = tTcoAZ (iBpNkARUow);
    cLen = (J5WblZzny > pgSdJ095) ? Z4Ie2FbqR (lo0SskEtD, J5WblZzny, iBpNkARUow, pgSdJ095, rqd1FKhZxCwb) : Z4Ie2FbqR (iBpNkARUow, pgSdJ095, lo0SskEtD, J5WblZzny, rqd1FKhZxCwb);
    u1vrtF2 (rqd1FKhZxCwb, cLen);
    return (185 - 185);
}

