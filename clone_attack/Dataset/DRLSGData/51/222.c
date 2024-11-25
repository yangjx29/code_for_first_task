int main () {
    int a6CtaZJpXdUF;
    int x23nVHEZmF;
    int KakSEBIGebj [(712 - 211)] = {(344 - 344)};
    int hzA4fU2jq;
    char S5Z3dae1wjpC [(1144 - 643)] [(966 - 960)] = {(978 - 978)};
    int lmcd3ryw;
    char a [501];
    int m;
    scanf ("%d", &a6CtaZJpXdUF);
    x23nVHEZmF = (385 - 385);
    scanf ("%s", a);
    m = strlen (a);
    {
        hzA4fU2jq = (109 - 109);
        for (; m - a6CtaZJpXdUF >= hzA4fU2jq;) {
            {
                lmcd3ryw = (689 - 689);
                for (; lmcd3ryw < a6CtaZJpXdUF;) {
                    S5Z3dae1wjpC[hzA4fU2jq][lmcd3ryw] = a[lmcd3ryw + hzA4fU2jq];
                    lmcd3ryw = lmcd3ryw + (519 - 518);
                }
            }
            hzA4fU2jq = hzA4fU2jq + (257 - 256);
        }
    }
    {
        hzA4fU2jq = (807 - 807);
        for (; hzA4fU2jq <= m - a6CtaZJpXdUF;) {
            {
                lmcd3ryw = hzA4fU2jq + (126 - 125);
                for (; m - a6CtaZJpXdUF >= lmcd3ryw;) {
                    if (!((608 - 608) != strcmp (S5Z3dae1wjpC[lmcd3ryw], S5Z3dae1wjpC[hzA4fU2jq]))) {
                        KakSEBIGebj[hzA4fU2jq]++;
                    }
                    lmcd3ryw = lmcd3ryw + 1;
                }
            }
            hzA4fU2jq = hzA4fU2jq + 1;
        }
    }
    {
        lmcd3ryw = (830 - 830);
        for (; m - a6CtaZJpXdUF >= lmcd3ryw;) {
            if (KakSEBIGebj[lmcd3ryw] > KakSEBIGebj[x23nVHEZmF]) {
                x23nVHEZmF = lmcd3ryw;
            }
            lmcd3ryw = lmcd3ryw + 1;
        }
    }
    if (!((296 - 296) != KakSEBIGebj[x23nVHEZmF])) {
    }
    if (KakSEBIGebj[x23nVHEZmF] != (873 - 873)) {
        printf ("%d\n", KakSEBIGebj[x23nVHEZmF] + 1);
        for (hzA4fU2jq = 0; hzA4fU2jq <= m - a6CtaZJpXdUF; hzA4fU2jq = hzA4fU2jq + 1) {
            if (KakSEBIGebj[hzA4fU2jq] == KakSEBIGebj[x23nVHEZmF]) {
                for (lmcd3ryw = 0; lmcd3ryw < a6CtaZJpXdUF; lmcd3ryw = lmcd3ryw + 1) {
                    printf ("%c", S5Z3dae1wjpC[hzA4fU2jq][lmcd3ryw]);
                }
            }
        }
    }
    return 0;
}

