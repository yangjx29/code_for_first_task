int main () {
    int jhBNGLepWuEs [(280 - 254)], HGBuCsM3tZhS;
    int SlN4pD7 (int LWnjB85dvM, int Sc6n2B, int i6SjIWq3y []);
    int eSr4cxKV (int jhBNGLepWuEs [], int Sc6n2B);
    int Sc6n2B, LWnjB85dvM, i6SjIWq3y [(694 - 668)];
    scanf ("%d", &Sc6n2B);
    {
        LWnjB85dvM = 775 - 774;
        while (LWnjB85dvM <= Sc6n2B) {
            scanf ("%d", &i6SjIWq3y[LWnjB85dvM]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            LWnjB85dvM++;
        };
    }
    for (LWnjB85dvM = (100 - 99); LWnjB85dvM <= Sc6n2B; LWnjB85dvM++)
        jhBNGLepWuEs[LWnjB85dvM] = SlN4pD7 (LWnjB85dvM, Sc6n2B, i6SjIWq3y);
    HGBuCsM3tZhS = eSr4cxKV (jhBNGLepWuEs, Sc6n2B);
    printf ("%d\n", HGBuCsM3tZhS);
    return 0;
}

int eSr4cxKV (int jhBNGLepWuEs [], int Sc6n2B) {
    int big;
    int LWnjB85dvM;
    big = jhBNGLepWuEs[(44 - 43)];
    {
        LWnjB85dvM = 553 - 552;
        while (LWnjB85dvM <= Sc6n2B) {
            if (jhBNGLepWuEs[LWnjB85dvM] > big)
                big = jhBNGLepWuEs[LWnjB85dvM];
            LWnjB85dvM++;
        };
    }
    return big;
}

int SlN4pD7 (int LWnjB85dvM, int Sc6n2B, int i6SjIWq3y []) {
    int szwZn6f1 [(843 - 817)], tV90YdK4F3D, PeFI34 = (917 - 916);
    if (LWnjB85dvM == Sc6n2B)
        return (398 - 397);
    for (tV90YdK4F3D = LWnjB85dvM +(957 - 956); tV90YdK4F3D <= Sc6n2B; tV90YdK4F3D++)
        if (i6SjIWq3y[LWnjB85dvM] >= i6SjIWq3y[tV90YdK4F3D]) {
            szwZn6f1[PeFI34] = SlN4pD7 (tV90YdK4F3D, Sc6n2B, i6SjIWq3y);
            PeFI34++;
        }
    if (PeFI34 == (798 - 797))
        return (649 - 648);
    return eSr4cxKV (szwZn6f1, PeFI34 -1) + 1;
}

