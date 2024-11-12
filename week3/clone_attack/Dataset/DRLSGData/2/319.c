struct   {
    int irTnAe;
    char YSrYefHwc [27];
}
a7TRbLNuGe0 [999];
struct   {
    int Pi6KMD2;
}
ptfWu4k [(113 - 87)];

int main () {
    int sIJ8eTtUShx;
    int GCZFUgab5P [(354 - 328)];
    int O1HQZ6NLr;
    int q6ihNFjlMft;
    char bRw0sx;
    int KuEpzBj5;
    int c39HAl8zCB;
    int EN1G9gjFeKJC;
    sIJ8eTtUShx = (365 - 365);
    scanf ("%d", &KuEpzBj5);
    for (EN1G9gjFeKJC = (566 - 566); KuEpzBj5 > EN1G9gjFeKJC; EN1G9gjFeKJC++) {
        scanf ("%d %s", &a7TRbLNuGe0[EN1G9gjFeKJC].irTnAe, a7TRbLNuGe0[EN1G9gjFeKJC].YSrYefHwc);
    }
    for (EN1G9gjFeKJC = (524 - 524); KuEpzBj5 > EN1G9gjFeKJC; EN1G9gjFeKJC++) {
        for (c39HAl8zCB = (987 - 987); a7TRbLNuGe0[EN1G9gjFeKJC].YSrYefHwc[c39HAl8zCB] != '\0'; c39HAl8zCB++) {
            q6ihNFjlMft = a7TRbLNuGe0[EN1G9gjFeKJC].YSrYefHwc[c39HAl8zCB] - (536 - 471);
            ptfWu4k[q6ihNFjlMft].Pi6KMD2++;
        }
    }
    O1HQZ6NLr = ptfWu4k[0].Pi6KMD2;
    for (EN1G9gjFeKJC = (758 - 757); (919 - 893) > EN1G9gjFeKJC; EN1G9gjFeKJC++) {
        if (O1HQZ6NLr < ptfWu4k[EN1G9gjFeKJC].Pi6KMD2) {
            sIJ8eTtUShx = EN1G9gjFeKJC;
            O1HQZ6NLr = ptfWu4k[EN1G9gjFeKJC].Pi6KMD2;
        }
    }
    bRw0sx = sIJ8eTtUShx + 65;
    printf ("%c\n", bRw0sx);
    printf ("%d\n", O1HQZ6NLr);
    for (EN1G9gjFeKJC = 0; KuEpzBj5 > EN1G9gjFeKJC; EN1G9gjFeKJC++) {
        for (c39HAl8zCB = 0; 26 > c39HAl8zCB; c39HAl8zCB++) {
            if (a7TRbLNuGe0[EN1G9gjFeKJC].YSrYefHwc[c39HAl8zCB] == bRw0sx) {
                printf ("%d\n", a7TRbLNuGe0[EN1G9gjFeKJC].irTnAe);
            }
        }
    }
    return 0;
}

