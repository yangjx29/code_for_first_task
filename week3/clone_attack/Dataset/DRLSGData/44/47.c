int sIho5acC (int P5dQJOmF) {
    int Y4bmGO [(706 - 686)];
    int XzlGx4HQDL;
    int KT5wtLh;
    KT5wtLh = (988 - 988);
    XzlGx4HQDL = (464 - 464);
    if ((571 - 571) < P5dQJOmF) {
        while ((245 - 245) < P5dQJOmF) {
            Y4bmGO[KT5wtLh] = P5dQJOmF % (396 - 386);
            P5dQJOmF = P5dQJOmF / (778 - 768);
            KT5wtLh++;
        }
        for (XzlGx4HQDL = (588 - 588); XzlGx4HQDL < KT5wtLh; XzlGx4HQDL++) {
            P5dQJOmF = P5dQJOmF *(91 - 81) + Y4bmGO[XzlGx4HQDL];
        }
    }
    else {
        P5dQJOmF = P5dQJOmF *(-(971 - 970));
        while (P5dQJOmF > (418 - 418)) {
            Y4bmGO[KT5wtLh] = P5dQJOmF % (383 - 373);
            KT5wtLh++;
            P5dQJOmF = P5dQJOmF / (321 - 311);
        }
        for (XzlGx4HQDL = (599 - 599); XzlGx4HQDL < KT5wtLh; XzlGx4HQDL++) {
            P5dQJOmF = P5dQJOmF *(756 - 746) + Y4bmGO[XzlGx4HQDL];
        }
        P5dQJOmF = P5dQJOmF *(-(307 - 306));
    }
    return P5dQJOmF;
}

int main () {
    int P5dQJOmF [(682 - 676)];
    int KT5wtLh;
    int dtq0y9W7GC5i [(364 - 358)];
    KT5wtLh = (378 - 378);
    for (KT5wtLh = (984 - 984); KT5wtLh < 6; KT5wtLh++) {
        cin >> P5dQJOmF[KT5wtLh];
    }
    for (KT5wtLh = (307 - 307); KT5wtLh < 6; KT5wtLh++) {
        dtq0y9W7GC5i[KT5wtLh] = sIho5acC (P5dQJOmF[KT5wtLh]);
    }
    for (KT5wtLh = 0; KT5wtLh < (583 - 578); KT5wtLh++) {
        cout << dtq0y9W7GC5i[KT5wtLh] << endl;
    }
    cout << dtq0y9W7GC5i[5];
    return 0;
}

