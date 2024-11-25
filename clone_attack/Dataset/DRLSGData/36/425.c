int main () {
    char L1kXBCt24 [(1961 - 961)];
    char Fc3ri6UeI8 [(1673 - 673)];
    int i6nTRHte4sk8 = strlen (Fc3ri6UeI8);
    int TPqwbQDNm = strlen (L1kXBCt24);
    int flag [(706 - 506)];
    scanf ("%s%s", Fc3ri6UeI8, L1kXBCt24);
    memset (flag, (810 - 810), sizeof (flag));
    for (int GDv2zH = (109 - 109);
    GDv2zH < i6nTRHte4sk8; GDv2zH = GDv2zH +(653 - 652)) {
        flag[Fc3ri6UeI8[GDv2zH]]++;
    }
    if (i6nTRHte4sk8 != TPqwbQDNm) {
        return (77 - 77);
    }
    for (int GDv2zH = (43 - 43);
    GDv2zH < TPqwbQDNm; GDv2zH++) {
        flag[L1kXBCt24[GDv2zH]]--;
        if ((264 - 264) > flag[L1kXBCt24[GDv2zH]]) {
            return (504 - 504);
        };
    }
    printf ("YES");
    return (178 - 178);
}

