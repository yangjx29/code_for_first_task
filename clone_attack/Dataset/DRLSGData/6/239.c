int main () {
    int nshD1OJU0, AkSzdE8ylZ, ITKucORFJLvB, QIof4mEkv29 [100] [100], UTnQmKoLrYV, Da6tKV, VXvFORPhT4xI, wIdrbYDKRT, dQRYT9un7zBo;
    scanf ("%d", &nshD1OJU0);
    {
        UTnQmKoLrYV = 1;
        while (nshD1OJU0 >= UTnQmKoLrYV) {
            scanf ("\n%d %d", &AkSzdE8ylZ, &ITKucORFJLvB);
            {
                Da6tKV = 0;
                while (Da6tKV <= AkSzdE8ylZ -1) {
                    scanf ("\n%d", &QIof4mEkv29[Da6tKV][0]);
                    {
                        VXvFORPhT4xI = 1;
                        while (ITKucORFJLvB -1 >= VXvFORPhT4xI) {
                            scanf (" %d", &QIof4mEkv29[Da6tKV][VXvFORPhT4xI]);
                            VXvFORPhT4xI++;
                        }
                    }
                    Da6tKV++;
                }
            }
            dQRYT9un7zBo = 0;
            if (AkSzdE8ylZ == 1 && ITKucORFJLvB == 1) {
                dQRYT9un7zBo = QIof4mEkv29[0][0];
                printf ("%d\n", dQRYT9un7zBo);
                continue;
            }
            UTnQmKoLrYV = UTnQmKoLrYV +1;
            {
                Da6tKV = 0;
                while (Da6tKV <= ITKucORFJLvB -1) {
                    dQRYT9un7zBo = dQRYT9un7zBo + QIof4mEkv29[0][Da6tKV] + QIof4mEkv29[AkSzdE8ylZ -1][Da6tKV];
                    Da6tKV++;
                }
            }
            {
                Da6tKV = 0;
                while (Da6tKV <= AkSzdE8ylZ -1) {
                    dQRYT9un7zBo = dQRYT9un7zBo + QIof4mEkv29[Da6tKV][0] + QIof4mEkv29[Da6tKV][ITKucORFJLvB -1];
                    Da6tKV++;
                }
            }
            dQRYT9un7zBo = dQRYT9un7zBo - QIof4mEkv29[0][0] - QIof4mEkv29[0][ITKucORFJLvB -1] - QIof4mEkv29[AkSzdE8ylZ -1][0] - QIof4mEkv29[AkSzdE8ylZ -1][ITKucORFJLvB -1];
            printf ("%d\n", dQRYT9un7zBo);
        }
    }
}

