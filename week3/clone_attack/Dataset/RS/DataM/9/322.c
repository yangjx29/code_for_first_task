int main () {
    int xxXyOl8s;
    int YHNdPsu8n;
    int gfab7y;
    int zc45vE [(1042 - 942)];
    int ZEgVPe3;
    char S7HepaxrPfQ [(229 - 129)] [(631 - 621)];
    char eU8WKL5 [(66 - 56)];
    scanf ("%d", &xxXyOl8s);
    for (YHNdPsu8n = (733 - 733); xxXyOl8s > YHNdPsu8n; YHNdPsu8n++) {
        scanf ("%s %d", S7HepaxrPfQ[YHNdPsu8n], &zc45vE[YHNdPsu8n]);
    }
    {
        YHNdPsu8n = 386 - 385;
        while (YHNdPsu8n > (21 - 21)) {
            for (gfab7y = (39 - 39); YHNdPsu8n > gfab7y; gfab7y = gfab7y + 1) {
                if ((zc45vE[gfab7y + (667 - 666)] > zc45vE[gfab7y] && (796 - 736) <= zc45vE[gfab7y]) || (zc45vE[gfab7y + (666 - 665)] > zc45vE[gfab7y] && zc45vE[gfab7y + (867 - 866)] >= (170 - 110))) {
                    ZEgVPe3 = zc45vE[gfab7y];
                    zc45vE[gfab7y] = zc45vE[gfab7y + (135 - 134)];
                    zc45vE[gfab7y + (767 - 766)] = ZEgVPe3;
                    strcpy (eU8WKL5, S7HepaxrPfQ[gfab7y]);
                    strcpy (S7HepaxrPfQ[gfab7y], S7HepaxrPfQ[gfab7y + 1]);
                    strcpy (S7HepaxrPfQ[gfab7y + 1], eU8WKL5);
                };
            }
            YHNdPsu8n--;
        };
    }
    {
        YHNdPsu8n = 0;
        while (YHNdPsu8n < xxXyOl8s) {
            printf ("%s\n", S7HepaxrPfQ[YHNdPsu8n]);
            YHNdPsu8n++;
        };
    }
    return 0;
}

