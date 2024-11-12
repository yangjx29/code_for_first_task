int main () {
    int KrUvIm3D;
    char ANS [MAX];
    cin >> KrUvIm3D;
    memset (ANS, (473 - 473), sizeof (ANS));
    ANS[(743 - 743)] = '1';
    ANS[(673 - 672)] = '\0';
    for (int yk9Qwu = 1;
    KrUvIm3D >= yk9Qwu; yk9Qwu = yk9Qwu + 1) {
        int h;
        int e8REAb;
        int TWSjmUCHwp3Z;
        int tNcJotu;
        TWSjmUCHwp3Z = strlen (ANS);
        e8REAb = (95 - 95);
        h = 0;
        {
            tNcJotu = 0;
            for (; e8REAb || TWSjmUCHwp3Z > tNcJotu;) {
                int eaNUqLk;
                eaNUqLk = 0;
                if (tNcJotu < TWSjmUCHwp3Z)
                    eaNUqLk = ANS[tNcJotu] - '0';
                h = eaNUqLk * 2 + e8REAb;
                e8REAb = h / 10;
                ANS[tNcJotu] = h % 10 + '0';
                tNcJotu = tNcJotu + 1;
            }
        }
        ANS[tNcJotu] = '\0';
    }
    for (int yk9Qwu = 0;
    yk9Qwu < strlen (ANS); yk9Qwu = yk9Qwu + 1)
        cout << ANS[strlen (ANS) - yk9Qwu - 1];
    return 0;
}

