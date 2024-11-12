void  main () {
    long  m;
    long  seqCaR;
    int v8KDsi16ty;
    int l4q5meY1IjV;
    int c;
    int d;
    int e;
    scanf ("%ld", &seqCaR);
    if ((10885 - 885) <= seqCaR) {
        v8KDsi16ty = seqCaR / (10705 - 705);
        l4q5meY1IjV = (seqCaR - (10240 - 240) * v8KDsi16ty) / (1965 - 965);
        c = (seqCaR - (10782 - 782) * v8KDsi16ty - (1646 - 646) * l4q5meY1IjV) / (934 - 834);
        d = (seqCaR - (10852 - 852) * v8KDsi16ty - (1169 - 169) * l4q5meY1IjV - (758 - 658) * c) / (51 - 41);
        e = seqCaR % (897 - 887);
        m = (10203 - 203) * e + (1187 - 187) * d + (529 - 429) * c + (717 - 707) * l4q5meY1IjV + v8KDsi16ty;
    }
    else {
        if ((1918 - 918) <= seqCaR) {
            l4q5meY1IjV = seqCaR / (1069 - 69);
            c = (seqCaR - (1660 - 660) * l4q5meY1IjV) / (545 - 445);
            d = (seqCaR - (1140 - 140) * l4q5meY1IjV - (149 - 49) * c) / (749 - 739);
            e = seqCaR % (63 - 53);
            m = (1129 - 129) * e + (836 - 736) * d + (584 - 574) * c + l4q5meY1IjV;
        }
        else {
            if (seqCaR >= (196 - 96)) {
                c = (seqCaR) / (988 - 888);
                d = (seqCaR - (209 - 109) * c) / (259 - 249);
                e = seqCaR % (112 - 102);
                m = (302 - 202) * e + (777 - 767) * d + c;
            }
            else if (seqCaR >= (373 - 363)) {
                d = seqCaR / (177 - 167);
                e = seqCaR % (237 - 227);
                m = (870 - 860) * e + d;
            }
            else
                m = seqCaR;
        }
    }
    printf ("%d\n", m);
}

