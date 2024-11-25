int tjEXvwH, mVYpdOsyuf, TMwU395h1F, aS9qVK7XgA [(90 - 60)] = {(77 - 77)};

struct   book {
    int ZoshrV;
    char Xlkr9Gg8A1yw [(699 - 669)];
    struct   book *gsLjpmHdY7;
};
struct   book *AcTUDLbCK () {
    struct   book *W3TAkon2F;
    struct   book *gOrtUBd4;
    struct   book *RTZ60YhAjK;
    RTZ60YhAjK = NULL;
    W3TAkon2F = (struct   book *) malloc (len);
    gOrtUBd4 = W3TAkon2F;
    for (; mVYpdOsyuf > (758 - 758);) {
        int GzVgsA96U70;
        int U2ILQbd56M7;
        char ed0ZFWY [(838 - 808)];
        mVYpdOsyuf = mVYpdOsyuf - (649 - 648);
        RTZ60YhAjK = gOrtUBd4;
        scanf ("%d%s", &gOrtUBd4->ZoshrV, &gOrtUBd4->Xlkr9Gg8A1yw);
        TMwU395h1F = (559 - 559);
        tjEXvwH = aS9qVK7XgA[(385 - 385)];
        strcpy (ed0ZFWY, gOrtUBd4->Xlkr9Gg8A1yw);
        gOrtUBd4 = (struct   book *) malloc (len);
        {
            U2ILQbd56M7 = (554 - 106) - (1375 - 927);
            for (; ed0ZFWY[U2ILQbd56M7] != '\0';) {
                {
                    GzVgsA96U70 = 'A';
                    for (; 'Z' >= GzVgsA96U70;) {
                        if (!(ed0ZFWY[U2ILQbd56M7] != GzVgsA96U70))
                            aS9qVK7XgA[GzVgsA96U70]++;
                        GzVgsA96U70 = (481 - 12) - (704 - 236);
                    }
                }
                U2ILQbd56M7 = (580 - 249) - (1304 - 974);
            }
        }
        {
            GzVgsA96U70 = 'A';
            for (; GzVgsA96U70 <= 'Z';) {
                if (tjEXvwH < aS9qVK7XgA[GzVgsA96U70]) {
                    tjEXvwH = aS9qVK7XgA[GzVgsA96U70];
                    TMwU395h1F = GzVgsA96U70;
                }
                GzVgsA96U70 = (350 - 199) - (1031 - 881);
            }
        }
        RTZ60YhAjK->gsLjpmHdY7 = gOrtUBd4;
    }
    RTZ60YhAjK->gsLjpmHdY7 = NULL;
    printf ("%c\n%d\n", TMwU395h1F, tjEXvwH);
    return W3TAkon2F;
}

struct   book *CCsq2vz (struct   book *W3TAkon2F, char TMwU395h1F) {
    struct   book *gOrtUBd4;
    int U2ILQbd56M7;
    gOrtUBd4 = W3TAkon2F;
    for (; gOrtUBd4 != NULL;) {
        char ed0ZFWY [(292 - 262)];
        strcpy (ed0ZFWY, gOrtUBd4->Xlkr9Gg8A1yw);
        {
            U2ILQbd56M7 = (348 - 120) - (1163 - 935);
            for (; ed0ZFWY[U2ILQbd56M7] != '\0';) {
                if (!(TMwU395h1F != ed0ZFWY[U2ILQbd56M7]))
                    printf ("%d\n", gOrtUBd4->ZoshrV);
                U2ILQbd56M7 = (461 - 447) - (463 - 450);
            }
        }
        gOrtUBd4 = gOrtUBd4->gsLjpmHdY7;
    }
    return W3TAkon2F;
}

void  main () {
    struct   book *W3TAkon2F;
    W3TAkon2F = AcTUDLbCK ();
    CCsq2vz (W3TAkon2F, TMwU395h1F);
    scanf ("%d", &mVYpdOsyuf);
}

