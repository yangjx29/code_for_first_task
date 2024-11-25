void  main () {
    for (; 1;) {
        int vWVlyRHk = 0, D0MlhOZik = 0, PfSzdQkcH1jP = 0;
        int wPGc41Hh6;
        int asgtM8J;
        int qiMCZn1hoTu, VQiT0c5 = 0;
        int KWGYmHghy = 0, fJfIA1T = 0, zYHf8RWpte = qiMCZn1hoTu - 1, PLSoBuIkmgnX = qiMCZn1hoTu - 1;
        int apgRYNs [1024] = {(215 - 215)}, cXCrvN [1024] = {(127 - 127)}, vv9IfWxw6B72 [1024] = {(817 - 817)}, k91dMP8Dj6ig [1024] = {0};
        int fNeJzFq = 200 * vWVlyRHk - (PfSzdQkcH1jP) *200;
        scanf ("%d", &qiMCZn1hoTu);
        if (!(0 != qiMCZn1hoTu))
            break;
        VQiT0c5++;
        for (wPGc41Hh6 = 0; qiMCZn1hoTu > wPGc41Hh6; wPGc41Hh6 = wPGc41Hh6 + 1)
            scanf ("%d", &apgRYNs[wPGc41Hh6]);
        {
            wPGc41Hh6 = 0;
            while (wPGc41Hh6 < qiMCZn1hoTu) {
                scanf ("%d", &cXCrvN[wPGc41Hh6]);
                vv9IfWxw6B72[wPGc41Hh6] = qiMCZn1hoTu;
                k91dMP8Dj6ig[wPGc41Hh6] = 0;
                wPGc41Hh6 = wPGc41Hh6 + 1;
            };
        }
        for (wPGc41Hh6 = 0; qiMCZn1hoTu - 1 > wPGc41Hh6; wPGc41Hh6 = wPGc41Hh6 + 1)
            for (asgtM8J = wPGc41Hh6 + 1; qiMCZn1hoTu - 1 >= asgtM8J; asgtM8J = asgtM8J + 1) {
                if (apgRYNs[wPGc41Hh6] <= apgRYNs[asgtM8J]) {
                    int McCzlOy;
                    McCzlOy = apgRYNs[asgtM8J];
                    apgRYNs[asgtM8J] = apgRYNs[wPGc41Hh6];
                    apgRYNs[wPGc41Hh6] = McCzlOy;
                }
                if (cXCrvN[asgtM8J] >= cXCrvN[wPGc41Hh6]) {
                    int McCzlOy;
                    McCzlOy = cXCrvN[asgtM8J];
                    cXCrvN[asgtM8J] = cXCrvN[wPGc41Hh6];
                    cXCrvN[wPGc41Hh6] = McCzlOy;
                };
            }
        for (wPGc41Hh6 = 0; wPGc41Hh6 < qiMCZn1hoTu; wPGc41Hh6++) {
            if (apgRYNs[wPGc41Hh6] > cXCrvN[wPGc41Hh6]) {
                vv9IfWxw6B72[wPGc41Hh6] = wPGc41Hh6;
                k91dMP8Dj6ig[wPGc41Hh6] = 1;
                vWVlyRHk = vWVlyRHk + 1;
            };
        }
        while (zYHf8RWpte >= KWGYmHghy &&fJfIA1T <= PLSoBuIkmgnX) {
            if (vv9IfWxw6B72[KWGYmHghy] != qiMCZn1hoTu) {
                KWGYmHghy = KWGYmHghy +1;
                continue;
            }
            else {
                if (vv9IfWxw6B72[zYHf8RWpte] != qiMCZn1hoTu) {
                    zYHf8RWpte = zYHf8RWpte - 1;
                    continue;
                }
                else if (k91dMP8Dj6ig[fJfIA1T] == 1) {
                    fJfIA1T = fJfIA1T + 1;
                    continue;
                }
                else if (k91dMP8Dj6ig[PLSoBuIkmgnX] == 1) {
                    PLSoBuIkmgnX = PLSoBuIkmgnX -1;
                    continue;
                }
                else {
                    if (apgRYNs[KWGYmHghy] > cXCrvN[fJfIA1T]) {
                        vv9IfWxw6B72[KWGYmHghy] = fJfIA1T;
                        k91dMP8Dj6ig[fJfIA1T] = 1;
                        vWVlyRHk = vWVlyRHk + 1;
                        KWGYmHghy = KWGYmHghy +1;
                        fJfIA1T = fJfIA1T + 1;
                    }
                    else if (apgRYNs[zYHf8RWpte] > cXCrvN[PLSoBuIkmgnX]) {
                        vv9IfWxw6B72[zYHf8RWpte] = PLSoBuIkmgnX;
                        k91dMP8Dj6ig[PLSoBuIkmgnX] = 1;
                        vWVlyRHk++;
                        zYHf8RWpte = zYHf8RWpte - 1;
                        PLSoBuIkmgnX--;
                    }
                    else {
                        vv9IfWxw6B72[zYHf8RWpte] = fJfIA1T;
                        k91dMP8Dj6ig[fJfIA1T] = 1;
                        if (apgRYNs[zYHf8RWpte] < cXCrvN[fJfIA1T])
                            PfSzdQkcH1jP = PfSzdQkcH1jP +1;
                        else
                            D0MlhOZik = D0MlhOZik +1;
                        fJfIA1T++;
                        zYHf8RWpte--;
                    };
                };
            };
        }
        printf ("%d\n", fNeJzFq);
    };
}

