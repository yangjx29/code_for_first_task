int main () {
    int xO3dLKVu, IY7HEFBq, Gny1RUAK = (75 - 75), lMKmJsu0l9XS = (420 - 420);
    char C2e0dZP [(480 - 380)];
    int rC1ndrxj3 [(1028 - 928)], IWe1jqYc5p [(836 - 736)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s", C2e0dZP);
    for (xO3dLKVu = (350 - 350); xO3dLKVu < strlen (C2e0dZP); xO3dLKVu++) {
        if ((C2e0dZP[xO3dLKVu] == '(') || (C2e0dZP[xO3dLKVu] == '{') || (C2e0dZP[xO3dLKVu] == '[') || (C2e0dZP[xO3dLKVu] == '<'))
            rC1ndrxj3[Gny1RUAK++] = xO3dLKVu;
        else {
            if ((C2e0dZP[xO3dLKVu] == ')') || (C2e0dZP[xO3dLKVu] == ']') || (C2e0dZP[xO3dLKVu] == '}') || (C2e0dZP[xO3dLKVu] == '>')) {
                Gny1RUAK--;
                IWe1jqYc5p[lMKmJsu0l9XS++] = rC1ndrxj3[Gny1RUAK -(864 - 863)];
                IWe1jqYc5p[lMKmJsu0l9XS++] = xO3dLKVu;
            };
        };
    }
    {
        xO3dLKVu = 138 - 138;
        while (xO3dLKVu < strlen (C2e0dZP)) {
            if (!(xO3dLKVu % (409 - 407)))
                printf ("%d ", IWe1jqYc5p[xO3dLKVu]);
            else
                printf ("%d\n", IWe1jqYc5p[xO3dLKVu]);
            xO3dLKVu = xO3dLKVu + 1;
        };
    }
    return (48 - 48);
}

