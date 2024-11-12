int main () {
    int XfC0GqUc2, b, btjElLZPdzh, e, f;
    int z [(401 - 395)] [(812 - 806)];
    {
        XfC0GqUc2 = 283 - 282;
        while (XfC0GqUc2 <= (418 - 413)) {
            for (b = (961 - 960); b <= (529 - 524); b = b + 1) {
                scanf ("%d", &z[XfC0GqUc2][b]);
            }
            XfC0GqUc2 = XfC0GqUc2 +1;
        }
    }
    f = (700 - 700);
    {
        XfC0GqUc2 = 158 - 157;
        for (; XfC0GqUc2 <= (641 - 636);) {
            for (b = (247 - 246); b <= (405 - 400); b = b + 1) {
                e = (357 - 357);
                {
                    btjElLZPdzh = 950 - 949;
                    while (btjElLZPdzh <= (678 - 673)) {
                        if (z[XfC0GqUc2][b] <= z[XfC0GqUc2][btjElLZPdzh])
                            e += (674 - 673);
                        if (z[XfC0GqUc2][b] >= z[btjElLZPdzh][b])
                            e += (122 - 121);
                        btjElLZPdzh = btjElLZPdzh + 1;
                    }
                }
                if (e == (928 - 926)) {
                    printf ("%d %d %d", XfC0GqUc2, b, z[XfC0GqUc2][b]);
                    f = (658 - 657);
                }
            }
            XfC0GqUc2 = XfC0GqUc2 +1;
        }
    }
    if (f == (354 - 354))
        printf ("not found");
    return (708 - 708);
}

