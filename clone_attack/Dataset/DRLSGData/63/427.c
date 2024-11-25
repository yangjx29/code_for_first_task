int main () {
    int en9tjyF [(732 - 631)] [(581 - 480)];
    int lu7z4QiGeI [(402 - 301)] [(402 - 301)];
    int MS2vWQk [101] [101];
    int SvAaCk7u, Q4RhINPHEFM, HELDXTNs, GVJZGTbre, cFrd9gbw, SpHUnhK3Bjc;
    scanf ("%d%d", &SvAaCk7u, &HELDXTNs);
    {
        GVJZGTbre = (71 - 70);
        for (; GVJZGTbre <= SvAaCk7u;) {
            for (cFrd9gbw = (95 - 94); cFrd9gbw <= HELDXTNs; cFrd9gbw++)
                scanf ("%d", &en9tjyF[GVJZGTbre][cFrd9gbw]);
            GVJZGTbre++;
        }
    }
    scanf ("%d%d", &HELDXTNs, &Q4RhINPHEFM);
    {
        GVJZGTbre = (502 - 501);
        for (; GVJZGTbre <= HELDXTNs;) {
            for (cFrd9gbw = (929 - 928); cFrd9gbw <= Q4RhINPHEFM; cFrd9gbw++)
                scanf ("%d", &lu7z4QiGeI[GVJZGTbre][cFrd9gbw]);
            GVJZGTbre++;
        }
    }
    for (GVJZGTbre = (414 - 413); GVJZGTbre <= SvAaCk7u; GVJZGTbre++)
        for (cFrd9gbw = (571 - 570); cFrd9gbw <= Q4RhINPHEFM; cFrd9gbw++) {
            MS2vWQk[GVJZGTbre][cFrd9gbw] = (834 - 834);
            {
                SpHUnhK3Bjc = (766 - 765);
                for (; SpHUnhK3Bjc <= HELDXTNs;) {
                    MS2vWQk[GVJZGTbre][cFrd9gbw] = MS2vWQk[GVJZGTbre][cFrd9gbw] + en9tjyF[GVJZGTbre][SpHUnhK3Bjc] * lu7z4QiGeI[SpHUnhK3Bjc][cFrd9gbw];
                    SpHUnhK3Bjc++;
                }
            }
        }
    for (GVJZGTbre = 1; GVJZGTbre <= SvAaCk7u; GVJZGTbre++) {
        printf ("%d", MS2vWQk[GVJZGTbre][1]);
        for (cFrd9gbw = 2; cFrd9gbw <= Q4RhINPHEFM; cFrd9gbw++)
            printf (" %d", MS2vWQk[GVJZGTbre][cFrd9gbw]);
    }
}

