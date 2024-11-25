void  main () {
    int VIsKq9p;
    char UPsSu1TW [11];
    int e7tW9F;
    char bMtSwupiZo;
    int i;
    char uX0nNSOxo [4];
    VIsKq9p = 0;
    for (; !(2 != scanf ("%s %s", UPsSu1TW, uX0nNSOxo));) {
        e7tW9F = strlen (UPsSu1TW);
        bMtSwupiZo = UPsSu1TW[0];
        for (i = 0;; i++) {
            if (!('\0' != UPsSu1TW[i]))
                break;
            if (bMtSwupiZo < UPsSu1TW[i]) {
                bMtSwupiZo = UPsSu1TW[i];
                VIsKq9p = i;
            }
        }
        for (i = 0; i <= VIsKq9p; i++)
            printf ("%c", UPsSu1TW[i]);
        for (i = 0; i <= 2; i++)
            printf ("%c", uX0nNSOxo[i]);
        for (i = VIsKq9p +1; i < e7tW9F; i++)
            printf ("%c", UPsSu1TW[i]);
    }
}

