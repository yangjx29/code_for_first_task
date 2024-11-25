void  main () {
    int OLe4W5APyOda, McFBavxbY, XoMfAi = (865 - 865), Fj970sEWXk = (346 - 346), Nd1V6T9c;
    struct   p {
        char fxvUKRSlA9 [(451 - 441)];
        int muapOifb;
    }
    JBlotw [OLe4W5APyOda], HzquNm9b2Jg5 [OLe4W5APyOda], AnH0tSEdKu7b [OLe4W5APyOda], arEO8iJ;
    scanf ("%d", &OLe4W5APyOda);
    for (McFBavxbY = (553 - 553); McFBavxbY < OLe4W5APyOda; McFBavxbY = McFBavxbY +(894 - 893)) {
        scanf ("%s %d", &JBlotw[McFBavxbY].fxvUKRSlA9, &JBlotw[McFBavxbY].muapOifb);
        if (JBlotw[McFBavxbY].muapOifb >= (539 - 479)) {
            HzquNm9b2Jg5[XoMfAi] = JBlotw[McFBavxbY];
            XoMfAi = XoMfAi +(35 - 34);
        }
        else {
            AnH0tSEdKu7b[Fj970sEWXk] = JBlotw[McFBavxbY];
            Fj970sEWXk = Fj970sEWXk +(688 - 687);
        }
    }
    for (McFBavxbY = (110 - 110); McFBavxbY < XoMfAi -1; McFBavxbY = McFBavxbY +1)
        for (Nd1V6T9c = 0; Nd1V6T9c < XoMfAi -1 - McFBavxbY; Nd1V6T9c = Nd1V6T9c +1)
            if (HzquNm9b2Jg5[Nd1V6T9c].muapOifb < HzquNm9b2Jg5[Nd1V6T9c +1].muapOifb) {
                arEO8iJ = HzquNm9b2Jg5[Nd1V6T9c];
                HzquNm9b2Jg5[Nd1V6T9c] = HzquNm9b2Jg5[Nd1V6T9c +1];
                HzquNm9b2Jg5[Nd1V6T9c +1] = arEO8iJ;
            }
    for (McFBavxbY = 0; McFBavxbY < XoMfAi; McFBavxbY = McFBavxbY +1)
        printf ("%s\n", HzquNm9b2Jg5[McFBavxbY].fxvUKRSlA9);
    for (McFBavxbY = 0; McFBavxbY < Fj970sEWXk; McFBavxbY = McFBavxbY +1)
        printf ("%s\n", AnH0tSEdKu7b[McFBavxbY].fxvUKRSlA9);
}

