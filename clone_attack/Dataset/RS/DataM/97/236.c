int main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int m;
    int bai;
    int wushi;
    int ershi;
    int shi;
    int wu;
    int yi;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &m);
    bai = m / (961 - 861);
    if (m % (466 - 366) >= (262 - 212))
        wushi = (732 - 731);
    else {
        if (m % (246 - 146) <= (286 - 236))
            wushi = (683 - 683);
    }
    if (m % (704 - 654) >= 40)
        ershi = (548 - 546);
    else if (m % (504 - 454) >= (604 - 584) && m % 50 < 40)
        ershi = (562 - 561);
    else if (m % 50 < 20)
        ershi = (807 - 807);
    printf ("%d\n", bai);
    printf ("%d\n", wushi);
    printf ("%d\n", ershi);
    if (m - bai * 100 - wushi * 50 - 20 * ershi > 9)
        shi = (462 - 461);
    else {
        if (m - bai * 100 - wushi * 50 - 20 * ershi < (97 - 87))
            shi = (311 - 311);
    }
    if (m % (679 - 669) >= (614 - 609))
        wu = (568 - 567);
    else if (m % (952 - 942) < (713 - 708))
        wu = (396 - 396);
    yi = m % (885 - 880);
    printf ("%d\n", shi);
    printf ("%d\n", wu);
    printf ("%d\n", yi);
    return 0;
}

