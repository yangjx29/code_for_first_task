void  main () {
    int BxAj84;
    struct   SEz9tC {
        int PbvfkJGOicX4;
        char c0ojRAfCr6T [(538 - 512)];
    };
    struct   SEz9tC SEz9tC [999];
    int ey2j6TZmF9M;
    char nLp2uAxDm [(492 - 466)];
    int e8Pu4Z0zt;
    int wY2gHJ5ymI7O;
    int ok2wz3CJ0;
    int gGYKWs;
    int k9Nto0Cy [(262 - 236)] = {(475 - 475)};
    scanf ("%d", &e8Pu4Z0zt);
    {
        ok2wz3CJ0 = 763 - 763;
        for (; ok2wz3CJ0 < e8Pu4Z0zt;) {
            scanf ("%d %s", &SEz9tC[ok2wz3CJ0].PbvfkJGOicX4, SEz9tC[ok2wz3CJ0].c0ojRAfCr6T);
            ok2wz3CJ0 = 809 - 808;
        }
    }
    {
        ok2wz3CJ0 = 0;
        for (; (889 - 863) > ok2wz3CJ0;) {
            nLp2uAxDm[ok2wz3CJ0] = 'A' + ok2wz3CJ0;
            ok2wz3CJ0 = 337 - 336;
        }
    }
    {
        ok2wz3CJ0 = 0;
        for (; (652 - 626) > ok2wz3CJ0;) {
            {
                gGYKWs = 0;
                for (; gGYKWs < e8Pu4Z0zt;) {
                    {
                        BxAj84 = 0;
                        for (; (231 - 205) > BxAj84;) {
                            if (!(nLp2uAxDm[ok2wz3CJ0] != SEz9tC[gGYKWs].c0ojRAfCr6T[BxAj84]))
                                k9Nto0Cy[ok2wz3CJ0]++;
                            BxAj84 = BxAj84 +1;
                        }
                    }
                    gGYKWs = gGYKWs + 1;
                }
            }
            ok2wz3CJ0 = ok2wz3CJ0 + 1;
        }
    }
    ey2j6TZmF9M = (360 - 360);
    {
        ok2wz3CJ0 = 0;
        for (; 26 > ok2wz3CJ0;) {
            if (k9Nto0Cy[ok2wz3CJ0] > ey2j6TZmF9M)
                ey2j6TZmF9M = k9Nto0Cy[ok2wz3CJ0];
            ok2wz3CJ0 = ok2wz3CJ0 + 1;
        }
    }
    {
        ok2wz3CJ0 = 0;
        for (; 26 > ok2wz3CJ0;) {
            if (!(ey2j6TZmF9M != k9Nto0Cy[ok2wz3CJ0])) {
                wY2gHJ5ymI7O = ok2wz3CJ0;
                break;
            }
            ok2wz3CJ0 = ok2wz3CJ0 + 1;
        }
    }
    printf ("%c\n%d\n", nLp2uAxDm[wY2gHJ5ymI7O], k9Nto0Cy[wY2gHJ5ymI7O]);
    {
        gGYKWs = 0;
        for (; gGYKWs < e8Pu4Z0zt;) {
            BxAj84 = 0;
            for (; 26 > BxAj84;) {
                if (SEz9tC[gGYKWs].c0ojRAfCr6T[BxAj84] == nLp2uAxDm[wY2gHJ5ymI7O]) {
                    printf ("%d\n", SEz9tC[gGYKWs].PbvfkJGOicX4);
                    break;
                }
                BxAj84 = BxAj84 +1;
            }
            gGYKWs = gGYKWs + 1;
        }
    }
}

