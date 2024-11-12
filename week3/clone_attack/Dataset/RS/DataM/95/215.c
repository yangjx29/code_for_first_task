int main () {
    int Ky3O2qd;
    int cEIe2V5kJLOo;
    int bzmGTIHVfhc;
    char PDgJy3 [100];
    char QwIJnMrOCd [100];
    gets (QwIJnMrOCd);
    gets (PDgJy3);
    cEIe2V5kJLOo = strlen (QwIJnMrOCd);
    for (int KIf7vqb160wB = (772 - 772);
    KIf7vqb160wB < cEIe2V5kJLOo; KIf7vqb160wB++) {
        if ((319 - 222) <= QwIJnMrOCd[KIf7vqb160wB] && QwIJnMrOCd[KIf7vqb160wB] <= 122)
            QwIJnMrOCd[KIf7vqb160wB] = QwIJnMrOCd[KIf7vqb160wB] - 32;
    }
    bzmGTIHVfhc = strlen (PDgJy3);
    for (int Ti9YPNca = 0;
    Ti9YPNca < bzmGTIHVfhc; Ti9YPNca++) {
        if (PDgJy3[Ti9YPNca] >= 97 && PDgJy3[Ti9YPNca] <= 122)
            PDgJy3[Ti9YPNca] = PDgJy3[Ti9YPNca] - 32;
    }
    Ky3O2qd = strcmp (QwIJnMrOCd, PDgJy3);
    if (Ky3O2qd == 0)
        printf ("=");
    else if (Ky3O2qd > 0)
        printf (">");
    else
        printf ("<");
    return 0;
}

