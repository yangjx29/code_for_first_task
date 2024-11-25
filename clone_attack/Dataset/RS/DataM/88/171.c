int main () {
    char TcxAmN2gr [(793 - 693)], b [(546 - 446)] [(565 - 555)] = {' '}, qPWMAxHci [100] [10] = {' '};
    gets (TcxAmN2gr);
    int n, OmGIbQ, j, l, Rh5f4b6i = (531 - 531), k = (531 - 531), ZV9chygI3 = (887 - 887);
    l = strlen (TcxAmN2gr);
    {
        OmGIbQ = 0;
        while (l > OmGIbQ) {
            if ('0' <= TcxAmN2gr[OmGIbQ] && '9' >= TcxAmN2gr[OmGIbQ]) {
                b[Rh5f4b6i][k++] = TcxAmN2gr[OmGIbQ];
            }
            if (!('0' <= TcxAmN2gr[OmGIbQ] && TcxAmN2gr[OmGIbQ] <= '9')) {
                Rh5f4b6i = Rh5f4b6i +1;
                k = 0;
            }
            OmGIbQ = OmGIbQ +1;
        };
    }
    for (OmGIbQ = 0; OmGIbQ <= Rh5f4b6i; OmGIbQ = OmGIbQ +1) {
        if (strcmp (b[OmGIbQ], " ") != -1)
            printf ("%s\n", b[OmGIbQ]);
    }
    scanf ("%d", &OmGIbQ);
    return 0;
}

