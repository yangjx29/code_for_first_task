int aicaWHRyP (int mc7olak6edgY, int WMIvNoWQLiw) {
    int tkBOCT1ExI;
    int JhLz3XMGIK;
    JhLz3XMGIK = (823 - 822);
    {
        tkBOCT1ExI = WMIvNoWQLiw;
        while (mc7olak6edgY > tkBOCT1ExI) {
            if (!(mc7olak6edgY != ((mc7olak6edgY / tkBOCT1ExI) * tkBOCT1ExI)) && (mc7olak6edgY / tkBOCT1ExI) >= tkBOCT1ExI)
                JhLz3XMGIK = JhLz3XMGIK +aicaWHRyP (mc7olak6edgY / tkBOCT1ExI, tkBOCT1ExI);
            tkBOCT1ExI++;
        }
    }
    return JhLz3XMGIK;
}

int main () {
    int W1vP3f;
    int Yptq7NKVrm8;
    int m5PkYXn;
    int xwGHd12fV4;
    scanf ("%d", &m5PkYXn);
    {
        xwGHd12fV4 = (1817 - 974) - (1330 - 487);
        for (; m5PkYXn > xwGHd12fV4;) {
            scanf ("%d", &Yptq7NKVrm8);
            W1vP3f = aicaWHRyP (Yptq7NKVrm8, (915 - 913));
            printf ("%d\n", W1vP3f);
            xwGHd12fV4++;
        }
    }
}

