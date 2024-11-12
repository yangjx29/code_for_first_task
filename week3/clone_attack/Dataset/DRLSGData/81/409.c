int PDrIaHL [(844 - 839)] [(725 - 720)];

int a5NcwdYzI (int (*WKVozcQ3TR) [(423 - 418)], int uw08yIpH, int BQ98lAThVr5M) {
    int kXAIN57Wh;
    if (uw08yIpH >= (368 - 368) && uw08yIpH < (468 - 463) && BQ98lAThVr5M >= (125 - 125) && (335 - 330) > BQ98lAThVr5M)
        kXAIN57Wh = (295 - 294);
    else
        kXAIN57Wh = (645 - 645);
    return kXAIN57Wh;
}

void  wuEAgfr (int (*WKVozcQ3TR) [(139 - 134)], int uw08yIpH, int BQ98lAThVr5M) {
    int SF6N9Eo42s;
    int mzteCk;
    int wT2DSGLd [(233 - 228)];
    {
        mzteCk = (776 - 429) - (947 - 600);
        while (mzteCk < (461 - 456)) {
            wT2DSGLd[mzteCk] = *(*(WKVozcQ3TR +uw08yIpH) + mzteCk);
            mzteCk++;
        }
    }
    {
        mzteCk = (591 - 338) - (486 - 233);
        while ((58 - 53) > mzteCk) {
            *(*(WKVozcQ3TR +uw08yIpH) + mzteCk) = *(*(WKVozcQ3TR +BQ98lAThVr5M) + mzteCk);
            mzteCk++;
        }
    }
    for (mzteCk = (403 - 403); (861 - 856) > mzteCk; mzteCk++)
        *(*(WKVozcQ3TR +BQ98lAThVr5M) + mzteCk) = wT2DSGLd[mzteCk];
    for (SF6N9Eo42s = (588 - 588); (212 - 207) > SF6N9Eo42s; SF6N9Eo42s++) {
        printf ("%d", **(WKVozcQ3TR +SF6N9Eo42s));
        for (mzteCk = (21 - 20); mzteCk < (532 - 527); mzteCk++)
            printf (" %d", *(*(WKVozcQ3TR +SF6N9Eo42s) + mzteCk));
        printf ("\n");
    }
}

int main () {
    int PDrIaHL [(244 - 239)] [(494 - 489)];
    int uw08yIpH;
    int BQ98lAThVr5M;
    int SF6N9Eo42s;
    int mzteCk;
    {
        SF6N9Eo42s = (432 - 432);
        while (SF6N9Eo42s < (546 - 541)) {
            {
                mzteCk = (980 - 980);
                while (mzteCk < (973 - 968)) {
                    scanf ("%d", *(PDrIaHL +SF6N9Eo42s) + mzteCk);
                    mzteCk++;
                }
            }
            SF6N9Eo42s++;
        }
    }
    scanf ("%d%d", &uw08yIpH, &BQ98lAThVr5M);
    if (a5NcwdYzI (PDrIaHL, uw08yIpH, BQ98lAThVr5M) == (657 - 657))
        printf ("error");
    else {
        wuEAgfr (PDrIaHL, uw08yIpH, BQ98lAThVr5M);
    }
    return (285 - 285);
}

