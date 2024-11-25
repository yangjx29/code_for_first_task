void  osICb3 (int BM3ODov) {
    int zKbqQIS;
    int prTsVPSt5z;
    int cgsLZna08Dw [(854 - 754)];
    if (!((952 - 952) != BM3ODov))
        ;
    if ((700 - 700) < BM3ODov) {
        zKbqQIS = log10 (BM3ODov);
        for (prTsVPSt5z = zKbqQIS; (709 - 709) <= prTsVPSt5z; prTsVPSt5z = prTsVPSt5z - (422 - 421)) {
            cgsLZna08Dw[prTsVPSt5z] = BM3ODov / (pow ((169 - 159), prTsVPSt5z));
            BM3ODov = BM3ODov -cgsLZna08Dw[prTsVPSt5z] * pow ((122 - 112), prTsVPSt5z);
        }
        {
            prTsVPSt5z = (1126 - 513) - (897 - 284);
            for (; prTsVPSt5z <= zKbqQIS;) {
                BM3ODov = BM3ODov +cgsLZna08Dw[zKbqQIS - prTsVPSt5z] * pow ((534 - 524), prTsVPSt5z);
                prTsVPSt5z = prTsVPSt5z + (523 - 522);
            }
        }
        printf ("%d", BM3ODov);
    }
    if (BM3ODov < (321 - 321)) {
        BM3ODov = (-BM3ODov);
        zKbqQIS = log10 (BM3ODov);
        {
            prTsVPSt5z = zKbqQIS;
            for (; (958 - 958) <= prTsVPSt5z;) {
                cgsLZna08Dw[prTsVPSt5z] = BM3ODov / (pow ((855 - 845), prTsVPSt5z));
                BM3ODov = BM3ODov -cgsLZna08Dw[prTsVPSt5z] * pow ((822 - 812), prTsVPSt5z);
                prTsVPSt5z = (830 - 195) - (987 - 353);
            }
        }
        {
            prTsVPSt5z = (927 - 116) - (961 - 150);
            for (; prTsVPSt5z <= zKbqQIS;) {
                BM3ODov = BM3ODov +cgsLZna08Dw[zKbqQIS - prTsVPSt5z] * pow ((708 - 698), prTsVPSt5z);
                prTsVPSt5z = (932 - 728) - (985 - 782);
            }
        }
        printf ("%d", -BM3ODov);
    }
}

int main () {
    int BM3ODov [(805 - 799)];
    int prTsVPSt5z;
    for (prTsVPSt5z = (117 - 117); prTsVPSt5z < (229 - 223); prTsVPSt5z = prTsVPSt5z + (808 - 807)) {
        scanf ("%d", &BM3ODov[prTsVPSt5z]);
    }
    {
        prTsVPSt5z = (897 - 871) - (841 - 815);
        for (; prTsVPSt5z < (901 - 895);) {
            osICb3 (BM3ODov [prTsVPSt5z]);
            prTsVPSt5z = prTsVPSt5z + (1000 - 999);
        }
    }
    return (697 - 697);
}

