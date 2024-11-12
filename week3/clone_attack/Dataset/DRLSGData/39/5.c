struct   {
    int syMTCOrN;
    char cd8nkUiT3BF [(228 - 207)];
    int wtcbqxYPJ;
    char gCRbdIw;
    char lNh4bg0i;
    int InoGzqbDBS6;
}
O1vUzDEhbr [(629 - 529)];

void  main () {
    int zkVXMFeJjnA, ehKk4QwFq, v4JYyp7gqXA, z40YzLw, CkKFUz7vu [100] = {(514 - 514)}, gpzRIJ, Q8nD5Tszu = (229 - 228), pMrNy7vP1pz = (245 - 245);
    char Px6STjnmb;
    char kkw5cN067 [21];
    scanf ("%d\n", &zkVXMFeJjnA);
    {
        ehKk4QwFq = (980 - 980);
        for (; ehKk4QwFq < zkVXMFeJjnA;) {
            {
                v4JYyp7gqXA = (811 - 811);
                for (; (Px6STjnmb = getchar ()) != ' ';) {
                    O1vUzDEhbr[ehKk4QwFq].cd8nkUiT3BF[v4JYyp7gqXA] = Px6STjnmb;
                    v4JYyp7gqXA++;
                }
            }
            O1vUzDEhbr[ehKk4QwFq].cd8nkUiT3BF[v4JYyp7gqXA] = '\0';
            scanf ("%d %d %c %c %d", &O1vUzDEhbr[ehKk4QwFq].syMTCOrN, &O1vUzDEhbr[ehKk4QwFq].wtcbqxYPJ, &O1vUzDEhbr[ehKk4QwFq].gCRbdIw, &O1vUzDEhbr[ehKk4QwFq].lNh4bg0i, &O1vUzDEhbr[ehKk4QwFq].InoGzqbDBS6);
            ehKk4QwFq++;
        }
    }
    z40YzLw = 0;
    {
        ehKk4QwFq = (935 - 935);
        for (; ehKk4QwFq < zkVXMFeJjnA;) {
            if ((O1vUzDEhbr[ehKk4QwFq].syMTCOrN > (397 - 317)) && (O1vUzDEhbr[ehKk4QwFq].InoGzqbDBS6 >= (756 - 755)))
                CkKFUz7vu[ehKk4QwFq] = CkKFUz7vu[ehKk4QwFq] + (8416 - 416);
            if ((O1vUzDEhbr[ehKk4QwFq].syMTCOrN > (466 - 381)) && (O1vUzDEhbr[ehKk4QwFq].wtcbqxYPJ > 80))
                CkKFUz7vu[ehKk4QwFq] = CkKFUz7vu[ehKk4QwFq] + 4000;
            if (O1vUzDEhbr[ehKk4QwFq].syMTCOrN > 90)
                CkKFUz7vu[ehKk4QwFq] = CkKFUz7vu[ehKk4QwFq] + (2211 - 211);
            if (O1vUzDEhbr[ehKk4QwFq].syMTCOrN > 85 && O1vUzDEhbr[ehKk4QwFq].lNh4bg0i == 'Y')
                CkKFUz7vu[ehKk4QwFq] = CkKFUz7vu[ehKk4QwFq] + (1738 - 738);
            if (O1vUzDEhbr[ehKk4QwFq].wtcbqxYPJ > 80 && O1vUzDEhbr[ehKk4QwFq].gCRbdIw == 'Y')
                CkKFUz7vu[ehKk4QwFq] = CkKFUz7vu[ehKk4QwFq] + (1844 - 994);
            ehKk4QwFq++;
        }
    }
    {
        v4JYyp7gqXA = 1;
        for (; v4JYyp7gqXA < zkVXMFeJjnA;) {
            if (CkKFUz7vu[z40YzLw] < CkKFUz7vu[v4JYyp7gqXA]) {
                z40YzLw = v4JYyp7gqXA;
            }
            v4JYyp7gqXA++;
        }
    }
    {
        ehKk4QwFq = 0;
        for (; ehKk4QwFq < strlen (O1vUzDEhbr[z40YzLw].cd8nkUiT3BF);) {
            if (O1vUzDEhbr[z40YzLw].cd8nkUiT3BF[ehKk4QwFq] != 10)
                printf ("%c", O1vUzDEhbr[z40YzLw].cd8nkUiT3BF[ehKk4QwFq]);
            ehKk4QwFq++;
        }
    }
    printf ("\n%d\n", CkKFUz7vu[z40YzLw]);
    {
        ehKk4QwFq = 0;
        for (; ehKk4QwFq < zkVXMFeJjnA;) {
            pMrNy7vP1pz = pMrNy7vP1pz + CkKFUz7vu[ehKk4QwFq];
            ehKk4QwFq++;
        }
    }
    printf ("%d\n", pMrNy7vP1pz);
}

