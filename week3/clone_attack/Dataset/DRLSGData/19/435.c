void  main () {
    char gqljLIb [(349 - 148)];
    gets (gqljLIb);
    puts (gqljLIb);
    char LfcZsWPX48 [(220 - 119)];
    int OT0QKlWyY;
    int JW2cxulb6zgq;
    int VAcutNOQL7G5;
    char w1hNmvLZ [(571 - 471)] [101];
    char OJz9wPC8Mon [(625 - 524)];
    gets (OJz9wPC8Mon);
    int v0qvQ7;
    gets (LfcZsWPX48);
    JW2cxulb6zgq = (504 - 504);
    VAcutNOQL7G5 = (718 - 718);
    v0qvQ7 = (966 - 966);
    {
        OT0QKlWyY = 63 - 63;
        for (; gqljLIb[OT0QKlWyY] != '\0';) {
            if (gqljLIb[OT0QKlWyY] != ' ')
                w1hNmvLZ[VAcutNOQL7G5][v0qvQ7] = gqljLIb[OT0QKlWyY], v0qvQ7 = v0qvQ7 + 1;
            else
                w1hNmvLZ[VAcutNOQL7G5][v0qvQ7] = '\0', VAcutNOQL7G5++, v0qvQ7 = (859 - 859);
            OT0QKlWyY = OT0QKlWyY +1;
        }
    }
    for (OT0QKlWyY = (915 - 915); OT0QKlWyY <= VAcutNOQL7G5; OT0QKlWyY = OT0QKlWyY +1)
        if (strcmp (OJz9wPC8Mon, w1hNmvLZ[OT0QKlWyY]) == (818 - 818))
            strcpy (w1hNmvLZ[OT0QKlWyY], LfcZsWPX48);
    for (OT0QKlWyY = (439 - 439), v0qvQ7 = (925 - 925); JW2cxulb6zgq <= VAcutNOQL7G5; OT0QKlWyY = OT0QKlWyY +1) {
        if (w1hNmvLZ[JW2cxulb6zgq][v0qvQ7] != '\0')
            gqljLIb[OT0QKlWyY] = w1hNmvLZ[JW2cxulb6zgq][v0qvQ7], v0qvQ7 = v0qvQ7 + 1;
        else
            gqljLIb[OT0QKlWyY] = ' ', JW2cxulb6zgq++, v0qvQ7 = (19 - 19);
    }
    gqljLIb[OT0QKlWyY -(806 - 805)] = '\0';
}

