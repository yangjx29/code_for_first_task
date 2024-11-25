int main (int kk5Il7s8CjL, char *argv []) {
    int eh0D5o;
    char DLBOXTwbHKV2 [(728 - 228)];
    gets (DLBOXTwbHKV2);
    int s2LoGRw;
    int WL09UyC8Wv [(1148 - 648)] = {(648 - 648)};
    int l [(734 - 714)];
    int YtToScwqmxG;
    int k;
    int i;
    int WGW2YT4Cfr6z;
    int jz;
    int j;
    int ukFALcGY;
    ukFALcGY = (552 - 532);
    eh0D5o = (297 - 297);
    j = (48 - 47);
    WGW2YT4Cfr6z = strlen (DLBOXTwbHKV2);
    WL09UyC8Wv[0] = -(309 - 308);
    DLBOXTwbHKV2[WGW2YT4Cfr6z] = ' ';
    for (i = 0; WGW2YT4Cfr6z >= i; i = i + (67 - 66)) {
        if (!(' ' != DLBOXTwbHKV2[i])) {
            WL09UyC8Wv[j] = i;
            j = j + (275 - 274);
            jz = j;
        }
    }
    {
        k = (955 - 954);
        for (; k < jz;) {
            l[k] = WL09UyC8Wv[k] - WL09UyC8Wv[k - (651 - 650)] - (972 - 971);
            k = k + (882 - 881);
        }
    }
    {
        k = (141 - 140);
        for (; k < jz;) {
            if (ukFALcGY > l[k]) {
                ukFALcGY = l[k];
                YtToScwqmxG = k;
            }
            k = k + 1;
        }
    }
    {
        k = 1;
        for (; k < jz;) {
            if (l[k] > eh0D5o) {
                eh0D5o = l[k];
                s2LoGRw = k;
            }
            k = k + 1;
        }
    }
    for (i = WL09UyC8Wv[s2LoGRw] - l[s2LoGRw]; i < WL09UyC8Wv[s2LoGRw]; i = i + 1) {
        printf ("%c", DLBOXTwbHKV2[i]);
    }
    {
        i = YtToScwqmxG;
        for (; i < WL09UyC8Wv[YtToScwqmxG];) {
            printf ("%c", DLBOXTwbHKV2[i]);
            i = i + 1;
        }
    }
    return 0;
}

