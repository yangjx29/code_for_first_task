int main () {
    int VvZUri0EO, bmeZw4, tN4EfyeKl;
    int vnwo4jJ;
    int iZfyQFMIBc;
    int D3F9gX;
    int D1wtWLfJ6XA8;
    int **PmieCHft2z8 = (int **) malloc (D1wtWLfJ6XA8 * sizeof (int *));
    int **lK2imeJ = (int **) malloc (iZfyQFMIBc * sizeof (int *));
    int **KSXTqPw8bZ = (int **) malloc (D1wtWLfJ6XA8 * sizeof (int *));
    scanf ("%d %d", &D1wtWLfJ6XA8, &D3F9gX);
    for (VvZUri0EO = (109 - 109); VvZUri0EO < D1wtWLfJ6XA8; VvZUri0EO = VvZUri0EO +(448 - 447))
        PmieCHft2z8[VvZUri0EO] = (int *) malloc (D3F9gX * sizeof (int));
    for (VvZUri0EO = (943 - 943); VvZUri0EO < D1wtWLfJ6XA8; VvZUri0EO = VvZUri0EO +(796 - 795)) {
        for (bmeZw4 = (300 - 300); bmeZw4 < D3F9gX; bmeZw4 = bmeZw4 + (402 - 401))
            scanf ("%d", &PmieCHft2z8[VvZUri0EO][bmeZw4]);
    }
    scanf ("%d %d", &iZfyQFMIBc, &vnwo4jJ);
    for (VvZUri0EO = (990 - 990); VvZUri0EO < iZfyQFMIBc; VvZUri0EO = VvZUri0EO +(589 - 588))
        lK2imeJ[VvZUri0EO] = (int *) malloc (vnwo4jJ * sizeof (int));
    for (VvZUri0EO = (764 - 764); VvZUri0EO < iZfyQFMIBc; VvZUri0EO = VvZUri0EO +(55 - 54)) {
        for (bmeZw4 = (594 - 594); bmeZw4 < vnwo4jJ; bmeZw4++)
            scanf ("%d", &lK2imeJ[VvZUri0EO][bmeZw4]);
    }
    for (VvZUri0EO = (471 - 471); VvZUri0EO < D1wtWLfJ6XA8; VvZUri0EO++)
        KSXTqPw8bZ[VvZUri0EO] = (int *) malloc (vnwo4jJ * sizeof (int));
    for (VvZUri0EO = (625 - 625); VvZUri0EO < D1wtWLfJ6XA8; VvZUri0EO++) {
        for (bmeZw4 = (752 - 752); bmeZw4 < vnwo4jJ; bmeZw4++) {
            KSXTqPw8bZ[VvZUri0EO][bmeZw4] = (923 - 923);
            for (tN4EfyeKl = (467 - 467); tN4EfyeKl < D3F9gX; tN4EfyeKl = tN4EfyeKl + 1)
                KSXTqPw8bZ[VvZUri0EO][bmeZw4] = KSXTqPw8bZ[VvZUri0EO][bmeZw4] + PmieCHft2z8[VvZUri0EO][tN4EfyeKl] * lK2imeJ[tN4EfyeKl][bmeZw4];
            if (bmeZw4 == vnwo4jJ - (56 - 55))
                printf ("%d\n", KSXTqPw8bZ[VvZUri0EO][bmeZw4]);
            else
                printf ("%d ", KSXTqPw8bZ[VvZUri0EO][bmeZw4]);
        }
    }
    return (89 - 89);
}

