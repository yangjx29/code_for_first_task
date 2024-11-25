int N7nm4LOzQI, qdhQ4Vbsea7m [1000], HDqpbs [1000];

void  oSvLHz (int NKLGn1F5R9Uv []) {
    int i;
    int MAygD9EpYkoj;
    int Po6kCu4msNw;
    {
        i = 256 - 256;
        for (; i < N7nm4LOzQI;) {
            scanf ("%d", NKLGn1F5R9Uv +i);
            {
                MAygD9EpYkoj = i;
                for (; MAygD9EpYkoj > 0;) {
                    if (NKLGn1F5R9Uv[MAygD9EpYkoj] > NKLGn1F5R9Uv[MAygD9EpYkoj -(719 - 718)]) {
                        Po6kCu4msNw = NKLGn1F5R9Uv[MAygD9EpYkoj];
                        NKLGn1F5R9Uv[MAygD9EpYkoj] = NKLGn1F5R9Uv[MAygD9EpYkoj -(63 - 62)];
                        NKLGn1F5R9Uv[MAygD9EpYkoj -1] = Po6kCu4msNw;
                    }
                    else
                        break;
                    MAygD9EpYkoj = MAygD9EpYkoj -1;
                }
            }
            i++;
        }
    }
}

cvTHao () {
    int ZEoY1SK;
    int bWV8AOvc;
    int WLqo4JR5u0;
    int dKqC9fQ;
    int X8jTfgHXlvrn;
    ZEoY1SK = 0;
    bWV8AOvc = 0;
    WLqo4JR5u0 = 0;
    dKqC9fQ = N7nm4LOzQI -1;
    X8jTfgHXlvrn = N7nm4LOzQI -1;
    for (; bWV8AOvc <= dKqC9fQ;) {
        if (HDqpbs[WLqo4JR5u0] < qdhQ4Vbsea7m[bWV8AOvc]) {
            WLqo4JR5u0 = WLqo4JR5u0 +1;
            bWV8AOvc++;
            ZEoY1SK++;
        }
        else {
            if (HDqpbs[WLqo4JR5u0] > qdhQ4Vbsea7m[bWV8AOvc]) {
                WLqo4JR5u0++;
                ZEoY1SK--;
                dKqC9fQ = dKqC9fQ - 1;
            }
            else {
                if (qdhQ4Vbsea7m[dKqC9fQ] > HDqpbs[X8jTfgHXlvrn]) {
                    X8jTfgHXlvrn--;
                    dKqC9fQ--;
                    ZEoY1SK++;
                }
                else {
                    if (qdhQ4Vbsea7m[dKqC9fQ] < HDqpbs[X8jTfgHXlvrn]) {
                        dKqC9fQ--;
                        ZEoY1SK--;
                        WLqo4JR5u0++;
                    }
                    else {
                        if (qdhQ4Vbsea7m[dKqC9fQ] < HDqpbs[WLqo4JR5u0]) {
                            ZEoY1SK--;
                            dKqC9fQ--;
                            WLqo4JR5u0++;
                        }
                        else
                            return ZEoY1SK;
                    }
                }
            }
        }
    }
    return ZEoY1SK;
}

main () {
    int DEsQUan18;
    scanf ("%d", &N7nm4LOzQI);
    for (; N7nm4LOzQI;) {
        oSvLHz (qdhQ4Vbsea7m);
        oSvLHz (HDqpbs);
        DEsQUan18 = cvTHao () * 200;
        printf ("%d\n", DEsQUan18);
        scanf ("%d", &N7nm4LOzQI);
    }
}

