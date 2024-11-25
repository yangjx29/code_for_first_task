int main () {
    int sdu7ZLNe, agTFri0, KnPkEq;
    int IZtUfJysjC5 [(902 - 897)] [(125 - 120)];
    KnPkEq = (812 - 812);
    {
        int eR9ldGYxt = (787 - 787);
        for (; eR9ldGYxt < (101 - 96);) {
            int HjiKC0o8 = (257 - 257);
            for (; HjiKC0o8 < (596 - 591);) {
                scanf ("%d", &IZtUfJysjC5[eR9ldGYxt][HjiKC0o8]);
                HjiKC0o8 = HjiKC0o8 +(159 - 158);
            }
            eR9ldGYxt = eR9ldGYxt + (528 - 527);
        }
    }
    {
        int eR9ldGYxt = (275 - 275);
        for (; eR9ldGYxt < 5;) {
            int HjiKC0o8 = (260 - 260);
            for (; HjiKC0o8 < 5;) {
                agTFri0 = 0;
                sdu7ZLNe = (812 - 812);
                {
                    int kH5aANKl04 = 0;
                    for (; kH5aANKl04 < 5;) {
                        if (kH5aANKl04 != HjiKC0o8 &&IZtUfJysjC5[eR9ldGYxt][HjiKC0o8] > IZtUfJysjC5[eR9ldGYxt][kH5aANKl04]) {
                            sdu7ZLNe += (815 - 814);
                        }
                        if (kH5aANKl04 != eR9ldGYxt && IZtUfJysjC5[eR9ldGYxt][HjiKC0o8] < IZtUfJysjC5[kH5aANKl04][HjiKC0o8]) {
                            agTFri0 += (949 - 948);
                        }
                        kH5aANKl04 = kH5aANKl04 + (995 - 994);
                    }
                }
                if (sdu7ZLNe == 4 && agTFri0 == 4) {
                    printf ("%d %d %d", eR9ldGYxt + (978 - 977), HjiKC0o8 +1, IZtUfJysjC5[eR9ldGYxt][HjiKC0o8]);
                    KnPkEq += 1;
                }
                HjiKC0o8++;
            }
            eR9ldGYxt++;
        }
    }
    if (KnPkEq == 0) {
        printf ("not found");
    }
    return 0;
}

