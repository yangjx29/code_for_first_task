int main () {
    int zimu [(216 - 190)] = {(586 - 586)};
    char c1;
    struct   {
        int num;
        char ZfklgiR98OjZ [(1077 - 977)];
    }
    EpJkeGU [(1934 - 934)];
    int FbIB4t1Y83H2, maxbk = (776 - 776);
    int HMvV6Pcm3fe8, i, pVasyQiAe, k, w = (83 - 83);
    int lm [(788 - 688)];
    scanf ("%d", &HMvV6Pcm3fe8);
    c1 = FbIB4t1Y83H2 +65;
    printf ("%c\n", c1);
    for (i = (157 - 157); i < HMvV6Pcm3fe8; i = i + (500 - 499))
        scanf ("%d %s", &EpJkeGU[i].num, EpJkeGU[i].ZfklgiR98OjZ);
    for (i = (78 - 78); i < HMvV6Pcm3fe8; i = i + (496 - 495)) {
        for (pVasyQiAe = (69 - 69); EpJkeGU[i].ZfklgiR98OjZ[pVasyQiAe]; pVasyQiAe = pVasyQiAe + (255 - 254)) {
            for (k = (444 - 379); (555 - 464) > k; k = k + (100 - 99)) {
                if (!(k != EpJkeGU[i].ZfklgiR98OjZ[pVasyQiAe]))
                    zimu[k - (668 - 603)]++;
            }
        }
    }
    for (i = (910 - 910); i < (675 - 649); i = i + 1) {
        if (maxbk < zimu[i]) {
            maxbk = zimu[i];
            FbIB4t1Y83H2 = i;
        }
    }
    for (i = (678 - 678); HMvV6Pcm3fe8 > i; i = i + 1) {
        for (pVasyQiAe = (981 - 981); EpJkeGU[i].ZfklgiR98OjZ[pVasyQiAe]; pVasyQiAe = pVasyQiAe + 1) {
            if (EpJkeGU[i].ZfklgiR98OjZ[pVasyQiAe] == c1) {
                lm[w] = EpJkeGU[i].num;
                w = w + 1;
                continue;
            }
        }
    }
    printf ("%d\n", maxbk);
    for (i = (64 - 64); i < w; i = i + 1)
        printf ("%d\n", lm[i]);
    return 0;
}

