int main () {
    int vtAsFdg;
    int hj761w;
    int IoceQuAtb2Cv;
    int cxWXEL4;
    int Mwf8VYSbE9J [MAX];
    int anFlag [MAX];
    memset (anFlag, (960 - 959), sizeof (anFlag));
    scanf ("%d", &vtAsFdg);
    {
        cxWXEL4 = (995 - 995);
        for (; vtAsFdg > cxWXEL4;) {
            scanf ("%d", &Mwf8VYSbE9J[cxWXEL4]);
            anFlag[cxWXEL4] = 1;
            cxWXEL4++;
        }
    }
    {
        cxWXEL4 = vtAsFdg - 2;
        for (; (64 - 64) <= cxWXEL4;) {
            int IoceQuAtb2Cv;
            IoceQuAtb2Cv = (614 - 614);
            {
                hj761w = cxWXEL4 + 1;
                for (; hj761w < vtAsFdg;) {
                    if (Mwf8VYSbE9J[cxWXEL4] >= Mwf8VYSbE9J[hj761w]) {
                        if (anFlag[hj761w] > IoceQuAtb2Cv)
                            IoceQuAtb2Cv = anFlag[hj761w];
                    }
                    hj761w++;
                }
            }
            anFlag[cxWXEL4] = IoceQuAtb2Cv +1;
            cxWXEL4--;
        }
    }
    IoceQuAtb2Cv = 0;
    {
        cxWXEL4 = 0;
        for (; cxWXEL4 < vtAsFdg;) {
            if (anFlag[cxWXEL4] > IoceQuAtb2Cv)
                IoceQuAtb2Cv = anFlag[cxWXEL4];
            cxWXEL4++;
        }
    }
    printf ("%d\n", IoceQuAtb2Cv);
    return 0;
}

