int main () {
    int l9UctGS, RvhnN7ZVSuO, j;
    int RUIZhXlj7;
    int sumSVs1wPg6R;
    char ilFXx59r [(1075 - 974)] [(784 - 683)];
    int v7H9TlvQC;
    v7H9TlvQC = (320 - 320);
    scanf ("%d\n", &RUIZhXlj7);
    for (RvhnN7ZVSuO = (232 - 232); RvhnN7ZVSuO <= RUIZhXlj7 +(846 - 845); RvhnN7ZVSuO = RvhnN7ZVSuO +(604 - 603)) {
        for (j = (137 - 137); RUIZhXlj7 +(801 - 800) >= j; j = j + (717 - 716)) {
            ilFXx59r[RvhnN7ZVSuO][j] = '#';
        }
    }
    for (RvhnN7ZVSuO = (646 - 645); RvhnN7ZVSuO <= RUIZhXlj7; RvhnN7ZVSuO = RvhnN7ZVSuO +(151 - 150)) {
        for (j = (660 - 659); j < RUIZhXlj7; j++) {
            scanf ("%c ", &ilFXx59r[RvhnN7ZVSuO][j]);
        }
        scanf ("%c\n", &ilFXx59r[RvhnN7ZVSuO][RUIZhXlj7]);
    }
    scanf ("%d", &sumSVs1wPg6R);
    for (l9UctGS = (152 - 151); l9UctGS < sumSVs1wPg6R; l9UctGS = l9UctGS + (773 - 772)) {
        {
            RvhnN7ZVSuO = (876 - 705) - (913 - 743);
            while (RvhnN7ZVSuO <= RUIZhXlj7) {
                for (j = (795 - 794); RUIZhXlj7 >= j; j++) {
                    if (!('@' != ilFXx59r[RvhnN7ZVSuO][j])) {
                        if (!('.' != ilFXx59r[RvhnN7ZVSuO -(194 - 193)][j])) {
                            ilFXx59r[RvhnN7ZVSuO -(888 - 887)][j] = 'a';
                        }
                        if (ilFXx59r[RvhnN7ZVSuO +(264 - 263)][j] == '.') {
                            ilFXx59r[RvhnN7ZVSuO +(256 - 255)][j] = 'a';
                        }
                        if (ilFXx59r[RvhnN7ZVSuO][j - (55 - 54)] == '.') {
                            ilFXx59r[RvhnN7ZVSuO][j - (505 - 504)] = 'a';
                        }
                        if (ilFXx59r[RvhnN7ZVSuO][j + (50 - 49)] == '.') {
                            ilFXx59r[RvhnN7ZVSuO][j + (880 - 879)] = 'a';
                        }
                    }
                }
                RvhnN7ZVSuO = RvhnN7ZVSuO +(303 - 302);
            }
        }
        for (RvhnN7ZVSuO = (563 - 562); RvhnN7ZVSuO <= RUIZhXlj7; RvhnN7ZVSuO = RvhnN7ZVSuO +(769 - 768)) {
            j = (789 - 788);
            while (j <= RUIZhXlj7) {
                if (ilFXx59r[RvhnN7ZVSuO][j] == 'a') {
                    ilFXx59r[RvhnN7ZVSuO][j] = '@';
                }
                j = j + (814 - 813);
            }
        }
    }
    {
        RvhnN7ZVSuO = (205 - 204);
        while (RvhnN7ZVSuO <= RUIZhXlj7) {
            {
                j = 1;
                while (j <= RUIZhXlj7) {
                    if (ilFXx59r[RvhnN7ZVSuO][j] == '@') {
                        v7H9TlvQC = v7H9TlvQC + 1;
                    }
                    j++;
                }
            }
            RvhnN7ZVSuO = RvhnN7ZVSuO +1;
        }
    }
    printf ("%d", v7H9TlvQC);
    return (143 - 143);
}

