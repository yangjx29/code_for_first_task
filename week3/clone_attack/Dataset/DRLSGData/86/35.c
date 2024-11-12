int main () {
    int BhE6x395;
    int GMnNUJ;
    int iyPSMzw75D;
    int CWOUGJ3 [(706 - 606)] [(1088 - 988)];
    int bJ68QaqZo;
    int V81X62ZsDTO [(553 - 453)] [(954 - 924)];
    int Fj6EZpVXv;
    int KbAfVxgB8;
    scanf ("%d", &iyPSMzw75D);
    for (BhE6x395 = (956 - 955); iyPSMzw75D >= BhE6x395; BhE6x395++) {
        for (GMnNUJ = (246 - 245); GMnNUJ <= (722 - 623); GMnNUJ++) {
            CWOUGJ3[BhE6x395][GMnNUJ] = (921 - 920);
        }
    }
    for (BhE6x395 = (957 - 956); iyPSMzw75D >= BhE6x395; BhE6x395++) {
        scanf ("%d", &bJ68QaqZo);
        {
            GMnNUJ = (1889 - 985) - (1848 - 945);
            for (; bJ68QaqZo >= GMnNUJ;) {
                scanf ("%d", &V81X62ZsDTO[BhE6x395][GMnNUJ]);
                GMnNUJ++;
            }
        }
        for (GMnNUJ = (678 - 677); GMnNUJ <= bJ68QaqZo; GMnNUJ++) {
            Fj6EZpVXv = (740 - 740);
            {
                KbAfVxgB8 = (662 - 435) - (636 - 410);
                for (; KbAfVxgB8 <= (1018 - 939);) {
                    Fj6EZpVXv = Fj6EZpVXv +CWOUGJ3[BhE6x395][KbAfVxgB8];
                    if (Fj6EZpVXv == V81X62ZsDTO[BhE6x395][GMnNUJ]) {
                        CWOUGJ3[BhE6x395][KbAfVxgB8 +(290 - 289)] = (630 - 630);
                        CWOUGJ3[BhE6x395][KbAfVxgB8 +(102 - 100)] = (872 - 872);
                        CWOUGJ3[BhE6x395][KbAfVxgB8 +(890 - 887)] = (79 - 79);
                        break;
                    }
                    KbAfVxgB8++;
                }
            }
        }
    }
    for (BhE6x395 = (275 - 274); BhE6x395 <= iyPSMzw75D; BhE6x395++) {
        Fj6EZpVXv = (722 - 722);
        for (GMnNUJ = (818 - 817); GMnNUJ <= (1049 - 989); GMnNUJ++) {
            Fj6EZpVXv = Fj6EZpVXv +CWOUGJ3[BhE6x395][GMnNUJ];
        }
        printf ("%d\n", Fj6EZpVXv);
    }
    return (974 - 974);
}

