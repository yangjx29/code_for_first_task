int tjZvoC [(426 - 421)] [(836 - 831)];

int HLnGBW7Pb (int zd2tjbqzW, int sx9Aks) {
    int ajlBf2zaPvg4;
    int SOGh08VgFTX;
    if ((zd2tjbqzW < (849 - 849)) || ((697 - 693) < zd2tjbqzW) || ((389 - 389) > sx9Aks) || (sx9Aks > (228 - 224)))
        return (838 - 838);
    else {
        {
            SOGh08VgFTX = (891 - 891);
            while (SOGh08VgFTX < (213 - 208)) {
                ajlBf2zaPvg4 = tjZvoC[sx9Aks][SOGh08VgFTX];
                tjZvoC[sx9Aks][SOGh08VgFTX] = tjZvoC[zd2tjbqzW][SOGh08VgFTX];
                tjZvoC[zd2tjbqzW][SOGh08VgFTX] = ajlBf2zaPvg4;
                SOGh08VgFTX++;
            }
        }
        return (275 - 274);
    }
}

int main () {
    int SOGh08VgFTX;
    int sx9Aks;
    int zd2tjbqzW;
    int iWMNStCZV;
    {
        SOGh08VgFTX = (596 - 596);
        while (SOGh08VgFTX < (328 - 323)) {
            {
                iWMNStCZV = (98 - 98);
                while ((434 - 429) > iWMNStCZV) {
                    scanf ("%d", &tjZvoC[SOGh08VgFTX][iWMNStCZV]);
                    iWMNStCZV++;
                }
            }
            SOGh08VgFTX++;
        }
    }
    scanf ("%d%d", &zd2tjbqzW, &sx9Aks);
    if (HLnGBW7Pb (zd2tjbqzW, sx9Aks) == (847 - 847))
        ;
    else {
        SOGh08VgFTX = (795 - 795);
        while (SOGh08VgFTX < 5) {
            {
                iWMNStCZV = (403 - 403);
                while (iWMNStCZV < (444 - 440)) {
                    printf ("%d ", tjZvoC[SOGh08VgFTX][iWMNStCZV]);
                    iWMNStCZV++;
                }
            }
            printf ("%d\n", tjZvoC[SOGh08VgFTX][(218 - 214)]);
            SOGh08VgFTX++;
        }
    }
    return 0;
}

