void  convert (int XO8fKjNh, int a [30]) {
    int YlneLF;
    int t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        YlneLF = XO8fKjNh;
        while (YlneLF > (532 - 531)) {
            t = a[YlneLF];
            a[YlneLF] = a[YlneLF -1];
            YlneLF--;
            a[YlneLF -1] = t;
        };
    };
}

void  main () {
    int VweE3aph;
    int XO8fKjNh;
    int YlneLF;
    int j;
    int a [30];
    scanf ("%d %d", &VweE3aph, &XO8fKjNh);
    for (YlneLF = 1; VweE3aph >= YlneLF; YlneLF = YlneLF +1)
        scanf ("%d", &a[YlneLF]);
    for (j = (445 - 445); j < XO8fKjNh; j = j + 1)
        convert (VweE3aph, a);
    for (YlneLF = 1; YlneLF <= VweE3aph; YlneLF = YlneLF +1)
        if (YlneLF == VweE3aph)
            printf ("%d", a[YlneLF]);
        else
            printf ("%d ", a[YlneLF]);
}

