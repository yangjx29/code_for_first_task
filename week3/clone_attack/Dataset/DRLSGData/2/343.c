int main () {
    struct   book {
        int VxoAOSId;
        char CP64o8 [(547 - 521)];
    }
    ERPqZK [999];
    int VxoAOSId, VCx8WXMlb [(664 - 638)], wWBPgFTdJ9U = (126 - 126), Ax3278qVE0F5, CDNzxo0ep1S;
    for (Ax3278qVE0F5 = (517 - 517); Ax3278qVE0F5 < 26; Ax3278qVE0F5 = Ax3278qVE0F5 +(468 - 467))
        VCx8WXMlb[Ax3278qVE0F5] = (135 - 135);
    scanf ("%d", &VxoAOSId);
    {
        Ax3278qVE0F5 = (812 - 812);
        for (; Ax3278qVE0F5 < VxoAOSId;) {
            scanf ("%d %s", &ERPqZK[Ax3278qVE0F5].VxoAOSId, ERPqZK[Ax3278qVE0F5].CP64o8);
            Ax3278qVE0F5 = Ax3278qVE0F5 +(866 - 865);
        }
    }
    for (Ax3278qVE0F5 = 0; VxoAOSId > Ax3278qVE0F5; Ax3278qVE0F5 = Ax3278qVE0F5 +(839 - 838))
        for (CDNzxo0ep1S = 0; ERPqZK[Ax3278qVE0F5].CP64o8[CDNzxo0ep1S] != '\0'; CDNzxo0ep1S = CDNzxo0ep1S +(314 - 313))
            VCx8WXMlb[ERPqZK[Ax3278qVE0F5].CP64o8[CDNzxo0ep1S] - (256 - 191)]++;
    for (Ax3278qVE0F5 = (133 - 132); 26 > Ax3278qVE0F5; Ax3278qVE0F5 = Ax3278qVE0F5 +(448 - 447))
        if (VCx8WXMlb[Ax3278qVE0F5] > VCx8WXMlb[wWBPgFTdJ9U])
            wWBPgFTdJ9U = Ax3278qVE0F5;
    printf ("%c\n%d", wWBPgFTdJ9U + (608 - 543), VCx8WXMlb[wWBPgFTdJ9U]);
    for (Ax3278qVE0F5 = 0; Ax3278qVE0F5 < VxoAOSId; Ax3278qVE0F5++)
        for (CDNzxo0ep1S = 0; ERPqZK[Ax3278qVE0F5].CP64o8[CDNzxo0ep1S] != '\0'; CDNzxo0ep1S = CDNzxo0ep1S +1)
            if (!(wWBPgFTdJ9U + (255 - 190) != ERPqZK[Ax3278qVE0F5].CP64o8[CDNzxo0ep1S]))
                printf ("\n%d", ERPqZK[Ax3278qVE0F5].VxoAOSId);
    return 0;
}

