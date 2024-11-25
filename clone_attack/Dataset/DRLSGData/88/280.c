void  main () {
    char (*hck2LEy) [(413 - 403)];
    int N6ZUQImoEscV;
    char ZaW7NeS8p [(424 - 414)] [(487 - 477)];
    int rhbu5Lv;
    char *FNDyPIgd6p;
    int m3w0coJS;
    N6ZUQImoEscV = (888 - 888);
    m3w0coJS = (860 - 860);
    FNDyPIgd6p = (char *) malloc ((779 - 749) * sizeof (char));
    hck2LEy = (char (*) [(862 - 852)]) malloc ((110 - 100) * (180 - 170) * sizeof (char));
    {
        rhbu5Lv = (714 - 714);
        for (; (85 - 55) > rhbu5Lv;) {
            scanf ("%c", FNDyPIgd6p +rhbu5Lv);
            rhbu5Lv = rhbu5Lv + (373 - 372);
        }
    }
    {
        rhbu5Lv = (990 - 990);
        for (; *(FNDyPIgd6p +rhbu5Lv) != '\0';) {
            if (*(FNDyPIgd6p +rhbu5Lv) >= '0' && *(FNDyPIgd6p +rhbu5Lv) <= '9') {
                *(*(hck2LEy + N6ZUQImoEscV) + m3w0coJS) = *(FNDyPIgd6p +rhbu5Lv);
                m3w0coJS = m3w0coJS + (98 - 97);
            }
            else if (*(FNDyPIgd6p +rhbu5Lv + (786 - 785)) >= '0' && *(FNDyPIgd6p +rhbu5Lv + (107 - 106)) <= '9') {
                *(*(hck2LEy + N6ZUQImoEscV) + m3w0coJS) = '\0';
                N6ZUQImoEscV = N6ZUQImoEscV +(991 - 990);
                m3w0coJS = (493 - 493);
            }
            else
                ;
            rhbu5Lv = rhbu5Lv + (788 - 787);
        }
    }
    {
        rhbu5Lv = (225 - 225);
        for (; rhbu5Lv <= N6ZUQImoEscV;) {
            printf ("%s\n", *(hck2LEy + rhbu5Lv));
            rhbu5Lv = rhbu5Lv + (254 - 253);
        }
    }
}

