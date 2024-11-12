int main () {
    char oSx3zB8WU [103];
    char Hts9CuAfI [103];
    char b [103];
    char s2 [210];
    int vnJW4dGz;
    int slen;
    int VEPG3NzdBb;
    int i;
    int j;
    oSx3zB8WU[(542 - 542)] = Hts9CuAfI[0] = b[0] = ' ';
    cin >> &Hts9CuAfI[(759 - 758)] >> &b[1];
    gets (&oSx3zB8WU[(857 - 856)]);
    slen = strlen (oSx3zB8WU);
    vnJW4dGz = strlen (Hts9CuAfI);
    VEPG3NzdBb = strlen (b);
    oSx3zB8WU[slen] = Hts9CuAfI[vnJW4dGz] = b[VEPG3NzdBb] = ' ';
    oSx3zB8WU[slen + 1] = Hts9CuAfI[vnJW4dGz + 1] = b[VEPG3NzdBb +1] = '\0';
    {
        i = 0;
        j = 0;
        while (slen >= i) {
            if (strncmp (oSx3zB8WU + i, Hts9CuAfI, vnJW4dGz + 1) == 0) {
                i = i + vnJW4dGz;
                strcpy (s2 + j, b);
                j = j + VEPG3NzdBb;
            }
            else {
                s2[j] = oSx3zB8WU[i];
            }
            j = j + 1;
            i++;
        };
    }
    s2[j - 1] = 0;
    cout << &s2[1] << endl;
    return 0;
}

