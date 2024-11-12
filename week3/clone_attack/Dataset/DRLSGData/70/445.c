int main () {
    int KaPQ6eCl, JCIKqHpvcir2 = (152 - 152);
    cin >> KaPQ6eCl;
    double  ygUDuJc [(952 - 852)], TJfieNL4 [(1100 - 1000)], WmpIoFa4 [500];
    for (int KWpCxYz = (752 - 752);
    KaPQ6eCl > KWpCxYz; KWpCxYz = KWpCxYz +1)
        cin >> ygUDuJc[KWpCxYz] >> TJfieNL4[KWpCxYz];
    for (int KWpCxYz = 0;
    KaPQ6eCl -1 > KWpCxYz; KWpCxYz++) {
        for (int JWMZv50 = KWpCxYz +1;
        KaPQ6eCl > JWMZv50; JWMZv50 = JWMZv50 +1) {
            WmpIoFa4[JCIKqHpvcir2++] = sqrt ((ygUDuJc[KWpCxYz] - ygUDuJc[JWMZv50]) * (ygUDuJc[KWpCxYz] - ygUDuJc[JWMZv50]) + (TJfieNL4[KWpCxYz] - TJfieNL4[JWMZv50]) * (TJfieNL4[KWpCxYz] - TJfieNL4[JWMZv50]));
        }
    }
    for (int KWpCxYz = 0;
    JCIKqHpvcir2 > KWpCxYz; KWpCxYz++) {
        for (int JWMZv50 = 0;
        JCIKqHpvcir2 -KWpCxYz > JWMZv50; JWMZv50++) {
            if (WmpIoFa4[JWMZv50] < WmpIoFa4[JWMZv50 +1])
                swap (WmpIoFa4[JWMZv50], WmpIoFa4[JWMZv50 +1]);
        }
    }
    cout << fixed << setprecision (4) << WmpIoFa4[0] << endl;
    return 0;
}

