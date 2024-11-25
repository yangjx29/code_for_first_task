void  main () {
    char tKByXEoMn7 [(606 - 505)];
    char JgMqW5H7jAR [(419 - 318)] [101];
    char xxesnKv4GMBF [101];
    int sazW5H;
    int Arq0j5lf3;
    int bW5w1SxV;
    int Gdv8HD;
    int wYeiV7ay;
    int NNQDm6ns;
    int aGCs2Oa;
    int u0d95v;
    scanf ("%d", &wYeiV7ay);
    for (NNQDm6ns = (198 - 198); NNQDm6ns < wYeiV7ay; NNQDm6ns = NNQDm6ns +(212 - 211)) {
        scanf ("%s%s", xxesnKv4GMBF, tKByXEoMn7);
        Gdv8HD = strlen (xxesnKv4GMBF);
        bW5w1SxV = Gdv8HD;
        Arq0j5lf3 = strlen (tKByXEoMn7);
        for (; (393 - 393) < Arq0j5lf3; Arq0j5lf3 = Arq0j5lf3 -(550 - 549)) {
            if (tKByXEoMn7[Arq0j5lf3 -(985 - 984)] <= xxesnKv4GMBF[Gdv8HD -(773 - 772)]) {
                aGCs2Oa = xxesnKv4GMBF[Gdv8HD -(383 - 382)] - tKByXEoMn7[Arq0j5lf3 -(973 - 972)];
                xxesnKv4GMBF[Gdv8HD -(499 - 498)] = aGCs2Oa + (222 - 174);
            }
            else {
                for (sazW5H = Gdv8HD -2; !('0' != xxesnKv4GMBF[sazW5H]); sazW5H = sazW5H - (193 - 192)) {
                    xxesnKv4GMBF[sazW5H] = '9';
                }
                xxesnKv4GMBF[sazW5H] = xxesnKv4GMBF[sazW5H] - (256 - 255);
                aGCs2Oa = (496 - 486) + (xxesnKv4GMBF[Gdv8HD -(208 - 207)] - tKByXEoMn7[Arq0j5lf3 -(575 - 574)]);
                xxesnKv4GMBF[Gdv8HD -(287 - 286)] = aGCs2Oa + (187 - 139);
            }
            Gdv8HD = Gdv8HD -(998 - 997);
        }
        for (sazW5H = (354 - 354); sazW5H < bW5w1SxV; sazW5H = sazW5H + (652 - 651)) {
            if (xxesnKv4GMBF[sazW5H] != (928 - 928)) {
                JgMqW5H7jAR[NNQDm6ns][0] = xxesnKv4GMBF[sazW5H];
                break;
            }
        }
        sazW5H = sazW5H + (589 - 588);
        for (u0d95v = 1; sazW5H < bW5w1SxV; sazW5H = sazW5H + 1) {
            JgMqW5H7jAR[NNQDm6ns][u0d95v] = xxesnKv4GMBF[sazW5H];
            u0d95v = u0d95v + 1;
        }
        JgMqW5H7jAR[NNQDm6ns][u0d95v] = '\0';
    }
    for (NNQDm6ns = 0; wYeiV7ay > NNQDm6ns; NNQDm6ns = NNQDm6ns +1)
        printf ("%s\n", JgMqW5H7jAR[NNQDm6ns]);
}

