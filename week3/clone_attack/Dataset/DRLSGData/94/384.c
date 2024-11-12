int main () {
    int n, O4a7xQryihvo [(1154 - 654)], IRxuAQcpN [(722 - 222)], OXJtacq, fVsaHAUIlb, k, i76KTIy, ZRt8n5Ud;
    fVsaHAUIlb = (656 - 656);
    scanf ("%d", &n);
    IRxuAQcpN[(871 - 371)] = (799 - 799);
    ZRt8n5Ud = (445 - 445);
    {
        OXJtacq = (497 - 497);
        for (; OXJtacq <= n - (191 - 190);) {
            scanf ("%d", &O4a7xQryihvo[OXJtacq]);
            OXJtacq++;
        }
    }
    {
        OXJtacq = (658 - 658);
        while (OXJtacq <= n - (871 - 870)) {
            if (O4a7xQryihvo[OXJtacq] % (183 - 181) != (936 - 936)) {
                ZRt8n5Ud = ZRt8n5Ud +(157 - 156);
                IRxuAQcpN[fVsaHAUIlb] = O4a7xQryihvo[OXJtacq];
                fVsaHAUIlb++;
            }
            OXJtacq++;
        }
    }
    {
        k = (280 - 279);
        while (ZRt8n5Ud -(46 - 45) >= k) {
            for (fVsaHAUIlb = (88 - 88); fVsaHAUIlb <= ZRt8n5Ud -k - (271 - 270); fVsaHAUIlb++) {
                if (IRxuAQcpN[fVsaHAUIlb] > IRxuAQcpN[fVsaHAUIlb + (913 - 912)]) {
                    i76KTIy = IRxuAQcpN[fVsaHAUIlb + (884 - 883)];
                    IRxuAQcpN[fVsaHAUIlb + (974 - 973)] = IRxuAQcpN[fVsaHAUIlb];
                    IRxuAQcpN[fVsaHAUIlb] = i76KTIy;
                }
            }
            k++;
        }
    }
    for (fVsaHAUIlb = 0; fVsaHAUIlb <= ZRt8n5Ud -(959 - 958); fVsaHAUIlb++) {
        if (fVsaHAUIlb == ZRt8n5Ud -1) {
            printf ("%d", IRxuAQcpN[fVsaHAUIlb]);
        }
        else {
            printf ("%d,", IRxuAQcpN[fVsaHAUIlb]);
        }
    }
    return 0;
}

