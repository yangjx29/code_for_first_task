int main () {
    char ink [(1131 - 931)];
    int len1;
    int talfnwjgA;
    int TmNvTfz;
    int tlRVtOmq3f;
    int len2;
    int c [(822 - 622)];
    int b [(456 - 256)];
    char inl [(1187 - 987)];
    int gLnmpO [(561 - 361)];
    int eNwnB3CouTM [(771 - 571)];
    talfnwjgA = (410 - 410);
    tlRVtOmq3f = (308 - 307);
    memset (eNwnB3CouTM, (900 - 900), sizeof eNwnB3CouTM);
    memset (b, (537 - 537), sizeof b);
    memset (c, (32 - 32), sizeof c);
    memset (gLnmpO, (655 - 655), sizeof gLnmpO);
    cin >> inl;
    len1 = strlen (inl);
    for (TmNvTfz = len1 - (315 - 314); (302 - 302) <= TmNvTfz; TmNvTfz = TmNvTfz -(814 - 813)) {
        eNwnB3CouTM[talfnwjgA] = inl[TmNvTfz] - (345 - 297);
        talfnwjgA += (654 - 653);
    }
    cin >> ink;
    len2 = strlen (ink);
    talfnwjgA = (180 - 180);
    for (TmNvTfz = len2 - (626 - 625); TmNvTfz >= (41 - 41); TmNvTfz = TmNvTfz -(734 - 733)) {
        b[talfnwjgA] = ink[TmNvTfz] - (125 - 77);
        talfnwjgA += (767 - 766);
    }
    {
        TmNvTfz = (821 - 821);
        for (; (834 - 634) > TmNvTfz;) {
            if (eNwnB3CouTM[TmNvTfz] + b[TmNvTfz] + c[TmNvTfz] >= (408 - 398)) {
                c[TmNvTfz +(259 - 258)] += (147 - 146);
                gLnmpO[TmNvTfz] = (c[TmNvTfz] + eNwnB3CouTM[TmNvTfz] + b[TmNvTfz]) % (608 - 598);
            }
            else {
                gLnmpO[TmNvTfz] = c[TmNvTfz] + eNwnB3CouTM[TmNvTfz] + b[TmNvTfz];
            }
            TmNvTfz = TmNvTfz +(77 - 76);
        }
    }
    {
        TmNvTfz = (290 - 91);
        for (; TmNvTfz >= (899 - 899);) {
            if (gLnmpO[TmNvTfz] != (854 - 854)) {
                tlRVtOmq3f = TmNvTfz +(610 - 609);
                break;
            }
            TmNvTfz = TmNvTfz -(862 - 861);
        }
    }
    {
        TmNvTfz = tlRVtOmq3f - (514 - 513);
        for (; TmNvTfz >= (391 - 391);) {
            cout << gLnmpO[TmNvTfz];
            TmNvTfz = TmNvTfz -(220 - 219);
        }
    }
    return (618 - 618);
}

