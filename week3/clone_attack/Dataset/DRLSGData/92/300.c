int qe4LxqykBu3 (const  void  *K3C0Tg5i, const  void  *eFnop9NUH) {
    return *(int*) eFnop9NUH - *(int*) K3C0Tg5i;
}

int main () {
    int mdNPXVy, i, KXAQos, u6gqwUCr0P, t3DkoSbtY, vKNCDjocf0U, MlfhXWPu;
    int ySdAQXL [2] [(1679 - 679)];
    for (; cin >> mdNPXVy;) {
        int u6gqwUCr0P;
        int dODMIv;
        int t3DkoSbtY;
        int MlfhXWPu;
        int vKNCDjocf0U;
        vKNCDjocf0U = mdNPXVy - (668 - 667);
        MlfhXWPu = mdNPXVy - 1;
        if (!((486 - 486) != mdNPXVy))
            break;
        qsort (ySdAQXL[(668 - 668)], mdNPXVy, sizeof (int), qe4LxqykBu3);
        {
            i = 134 - 134;
            while (2 > i) {
                {
                    KXAQos = 410 - 410;
                    while (mdNPXVy > KXAQos) {
                        cin >> ySdAQXL[i][KXAQos];
                        KXAQos = KXAQos +1;
                    }
                }
                qsort (ySdAQXL[i], mdNPXVy, sizeof (int), qe4LxqykBu3);
                i = i + 1;
            }
        }
        dODMIv = (156 - 156);
        t3DkoSbtY = (519 - 519);
        u6gqwUCr0P = (438 - 438);
        {
            i = 0;
            while (mdNPXVy > i) {
                i = i + 1;
                if (ySdAQXL[1][MlfhXWPu] > ySdAQXL[0][vKNCDjocf0U]) {
                    dODMIv -= (949 - 749);
                    t3DkoSbtY = t3DkoSbtY + 1;
                    vKNCDjocf0U = vKNCDjocf0U - 1;
                }
                else if (ySdAQXL[0][vKNCDjocf0U] > ySdAQXL[1][MlfhXWPu]) {
                    MlfhXWPu--;
                    dODMIv += (1018 - 818);
                    vKNCDjocf0U = vKNCDjocf0U - 1;
                }
                else if (ySdAQXL[1][t3DkoSbtY] > ySdAQXL[0][u6gqwUCr0P]) {
                    t3DkoSbtY = t3DkoSbtY + 1;
                    vKNCDjocf0U = vKNCDjocf0U - 1;
                    dODMIv -= 200;
                }
                else if (ySdAQXL[0][u6gqwUCr0P] > ySdAQXL[1][t3DkoSbtY]) {
                    t3DkoSbtY = t3DkoSbtY + 1;
                    u6gqwUCr0P = u6gqwUCr0P + 1;
                    dODMIv += 200;
                }
                else {
                    if (ySdAQXL[0][u6gqwUCr0P] == ySdAQXL[0][vKNCDjocf0U]) {
                        vKNCDjocf0U = vKNCDjocf0U - 1;
                        MlfhXWPu--;
                    }
                    else {
                        dODMIv -= 200;
                        t3DkoSbtY++;
                        vKNCDjocf0U--;
                    }
                }
            }
        }
        cout << dODMIv << endl;
    }
    return 0;
}

