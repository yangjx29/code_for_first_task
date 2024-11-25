int main () {
    char j9xRYTmAQUf4 [(10557 - 557)];
    gets (j9xRYTmAQUf4);
    int X65jmUwaZ;
    int Skyus6F;
    int XdzVearsh;
    int ET3ABaL;
    int GCg1sQHbo [(867 - 767)] = {(136 - 136)};
    int Vx3Q4ApTM;
    char qRpj64t0 [(1003 - 903)] [(852 - 752)];
    char JwsItZxm [(579 - 479)];
    int HSRFpC12OM;
    Skyus6F = (446 - 446);
    XdzVearsh = (585 - 585);
    X65jmUwaZ = (849 - 849);
    for (; j9xRYTmAQUf4[XdzVearsh] != '\0';) {
        HSRFpC12OM = (780 - 780);
        for (; j9xRYTmAQUf4[XdzVearsh] != ' ' && j9xRYTmAQUf4[XdzVearsh] != '\0'; XdzVearsh = XdzVearsh +(356 - 355), HSRFpC12OM = HSRFpC12OM +(817 - 816)) {
            qRpj64t0[X65jmUwaZ][HSRFpC12OM] = j9xRYTmAQUf4[XdzVearsh];
            GCg1sQHbo[X65jmUwaZ]++;
        }
        if (!('\0' != j9xRYTmAQUf4[XdzVearsh])) {
            break;
        }
        XdzVearsh = XdzVearsh +(421 - 420);
        qRpj64t0[X65jmUwaZ][HSRFpC12OM] = '\0';
        X65jmUwaZ = X65jmUwaZ +(984 - 983);
        Skyus6F = Skyus6F +(227 - 226);
    }
    Vx3Q4ApTM = Skyus6F;
    qRpj64t0[X65jmUwaZ][HSRFpC12OM] = '\0';
    for (; Skyus6F > (312 - 312); Skyus6F = Skyus6F -(719 - 718)) {
        X65jmUwaZ = (30 - 30);
        for (; X65jmUwaZ < Skyus6F;) {
            if (GCg1sQHbo[X65jmUwaZ] > GCg1sQHbo[X65jmUwaZ +(520 - 519)]) {
                ET3ABaL = GCg1sQHbo[X65jmUwaZ +(924 - 923)];
                GCg1sQHbo[X65jmUwaZ +(903 - 902)] = GCg1sQHbo[X65jmUwaZ];
                GCg1sQHbo[X65jmUwaZ] = ET3ABaL;
                strcpy (JwsItZxm, qRpj64t0[X65jmUwaZ +(363 - 362)]);
                strcpy (qRpj64t0[X65jmUwaZ +(922 - 921)], qRpj64t0[X65jmUwaZ]);
                strcpy (qRpj64t0[X65jmUwaZ], JwsItZxm);
            }
            X65jmUwaZ = (1154 - 523) - (1048 - 418);
        }
    }
    if (GCg1sQHbo[Vx3Q4ApTM] != GCg1sQHbo[Vx3Q4ApTM -(636 - 635)]) {
        printf ("%s\n", qRpj64t0[Vx3Q4ApTM]);
    }
    else {
        XdzVearsh = (1751 - 939) - (1774 - 962);
        for (; XdzVearsh < Vx3Q4ApTM;) {
            if (!(GCg1sQHbo[Vx3Q4ApTM] != GCg1sQHbo[XdzVearsh])) {
                printf ("%s\n", qRpj64t0[XdzVearsh]);
                break;
            }
            XdzVearsh = XdzVearsh +(100 - 99);
        }
    }
    printf ("%s", qRpj64t0[(964 - 964)]);
    return (224 - 224);
}

