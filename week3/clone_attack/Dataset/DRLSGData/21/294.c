void  main () {
    float wDJWNFoAwHj = (940 - 940), yUDKak, WWUTtnQ [(1330 - 930)], UrjqQAnk4Ivz [400];
    unsigned  int Wyq8cRzo5pa, hzUBrAQ65Y, De5469Cb [400], s = 0, t = 0;
    scanf ("%d", &Wyq8cRzo5pa);
    for (hzUBrAQ65Y = 0; Wyq8cRzo5pa > hzUBrAQ65Y; hzUBrAQ65Y = hzUBrAQ65Y + (855 - 854)) {
        scanf ("%d", &De5469Cb[hzUBrAQ65Y]);
        s = s + De5469Cb[hzUBrAQ65Y];
    }
    wDJWNFoAwHj = (float) s / (float) Wyq8cRzo5pa;
    {
        hzUBrAQ65Y = 0;
        for (; hzUBrAQ65Y < Wyq8cRzo5pa;) {
            UrjqQAnk4Ivz[hzUBrAQ65Y] = (float) De5469Cb[hzUBrAQ65Y];
            WWUTtnQ[hzUBrAQ65Y] = qjdz (UrjqQAnk4Ivz[hzUBrAQ65Y], wDJWNFoAwHj);
            hzUBrAQ65Y = hzUBrAQ65Y + (724 - 723);
        }
    }
    yUDKak = WWUTtnQ[0];
    {
        hzUBrAQ65Y = 0;
        while (hzUBrAQ65Y < Wyq8cRzo5pa) {
            if (yUDKak < WWUTtnQ[hzUBrAQ65Y])
                yUDKak = WWUTtnQ[hzUBrAQ65Y];
            hzUBrAQ65Y = hzUBrAQ65Y + 1;
        }
    }
    {
        hzUBrAQ65Y = 0;
        while (hzUBrAQ65Y < Wyq8cRzo5pa) {
            if (WWUTtnQ[hzUBrAQ65Y] == yUDKak) {
                if (t > 0)
                    printf (",");
                printf ("%d", De5469Cb[hzUBrAQ65Y]);
                t = 1;
            }
            hzUBrAQ65Y++;
        }
    }
}

