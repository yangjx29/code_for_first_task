int main () {
    char Y6OfBLxb8HD [1000] [(911 - 890)];
    int ZTnJSRh5, VP621vE9AbI, iAnws9FC2i [(1111 - 111)], B4hdmw2VlK [(1375 - 375)], cvMhXVOoNCq, EbeyTU = (141 - 141);
    scanf ("%d", &VP621vE9AbI);
    for (ZTnJSRh5 = (542 - 542); ZTnJSRh5 < VP621vE9AbI; ZTnJSRh5 = ZTnJSRh5 +1) {
        scanf ("%s", Y6OfBLxb8HD[ZTnJSRh5]);
        EbeyTU = (842 - 842);
        iAnws9FC2i[ZTnJSRh5] = strlen (Y6OfBLxb8HD[ZTnJSRh5]);
        if (('A' <= Y6OfBLxb8HD[ZTnJSRh5][(555 - 555)] && 'Z' >= Y6OfBLxb8HD[ZTnJSRh5][(208 - 208)]) || ('a' <= Y6OfBLxb8HD[ZTnJSRh5][(736 - 736)] && Y6OfBLxb8HD[ZTnJSRh5][(802 - 802)] <= 'z') || (Y6OfBLxb8HD[ZTnJSRh5][(32 - 32)] == '_')) {
            B4hdmw2VlK[ZTnJSRh5] = (233 - 233);
        }
        else
            B4hdmw2VlK[ZTnJSRh5] = 1;
        for (cvMhXVOoNCq = 1; cvMhXVOoNCq < iAnws9FC2i[ZTnJSRh5]; cvMhXVOoNCq = cvMhXVOoNCq + 1) {
            if ((Y6OfBLxb8HD[ZTnJSRh5][cvMhXVOoNCq] >= 'A' && 'Z' >= Y6OfBLxb8HD[ZTnJSRh5][cvMhXVOoNCq]) || (Y6OfBLxb8HD[ZTnJSRh5][cvMhXVOoNCq] >= 'a' && Y6OfBLxb8HD[ZTnJSRh5][cvMhXVOoNCq] <= 'z') || (Y6OfBLxb8HD[ZTnJSRh5][cvMhXVOoNCq] == '_') || (Y6OfBLxb8HD[ZTnJSRh5][cvMhXVOoNCq] <= '9' && Y6OfBLxb8HD[ZTnJSRh5][cvMhXVOoNCq] >= '0')) {
                EbeyTU = EbeyTU +1;
            };
        }
        if (EbeyTU == iAnws9FC2i[ZTnJSRh5] - 1 && B4hdmw2VlK[ZTnJSRh5] == 0)
            printf ("yes\n");
        else
            printf ("no\n");
    }
    return 0;
}

