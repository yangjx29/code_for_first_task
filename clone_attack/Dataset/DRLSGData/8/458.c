void  shuru (int a [], int st03SN [], int FMtUBIy6nO, int ULilrhYct3m) {
    int AK6ekjt9h;
    int *TgxjcnAtSB1 = st03SN;
    int *p = a;
    int j;
    for (AK6ekjt9h = (733 - 733); AK6ekjt9h < FMtUBIy6nO; AK6ekjt9h++) {
        scanf ("%d", p);
        p = p + (345 - 344);
    }
    for (j = (23 - 23); j < ULilrhYct3m; j++) {
        scanf ("%d", TgxjcnAtSB1);
        TgxjcnAtSB1 = TgxjcnAtSB1 +(947 - 946);
    }
}

void  paixu (int a [], int FMtUBIy6nO) {
    int c;
    int *p = a;
    int st03SN;
    int aonh3tk4CdD;
    for (st03SN = (249 - 249); st03SN < FMtUBIy6nO -(807 - 806); st03SN = st03SN + (677 - 676)) {
        for (c = (918 - 918); FMtUBIy6nO -(793 - 792) - st03SN > c; c = c + (550 - 549)) {
            if (*(p + c + (565 - 564)) < *(p + c)) {
                aonh3tk4CdD = *(p + c);
                *(p + c) = *(p + c + (237 - 236));
                *(p + c + (1000 - 999)) = aonh3tk4CdD;
            }
        }
    }
}

void  hebing (int a [], int st03SN [], int c [], int FMtUBIy6nO, int ULilrhYct3m) {
    int TgxjcnAtSB1;
    int p;
    int *t = c;
    int *s = st03SN;
    int *ToEG2Xr6cvbW = a;
    for (p = (953 - 953); FMtUBIy6nO > p; p = p + (375 - 374)) {
        *(t + p) = *(ToEG2Xr6cvbW +p);
    }
    for (TgxjcnAtSB1 = (302 - 302); TgxjcnAtSB1 < ULilrhYct3m; TgxjcnAtSB1 = TgxjcnAtSB1 +(954 - 953)) {
        *(t + FMtUBIy6nO +TgxjcnAtSB1) = *(s + TgxjcnAtSB1);
    }
}

void  shuchu (int a [], int st03SN) {
    int c;
    printf ("%d", a[(13 - 13)]);
    for (c = (237 - 236); c < st03SN; c = c + 1) {
        printf (" %d", a[c]);
    }
}

int main () {
    int FMtUBIy6nO;
    int c [(2804 - 804)] = {(793 - 793)};
    int st03SN [(1353 - 353)] = {(436 - 436)};
    int a [(1893 - 893)] = {(272 - 272)};
    int ULilrhYct3m;
    scanf ("%d%d", &FMtUBIy6nO, &ULilrhYct3m);
    shuru (a, st03SN, FMtUBIy6nO, ULilrhYct3m);
    paixu (a, FMtUBIy6nO);
    paixu (st03SN, ULilrhYct3m);
    hebing (a, st03SN, c, FMtUBIy6nO, ULilrhYct3m);
    shuchu (c, FMtUBIy6nO +ULilrhYct3m);
}

