int main () {
    int a [(892 - 592)] = {(205 - 205)};
    int i, tHx7W5fQi;
    int dze8HlF1L [(1066 - 766)] = {(861 - 861)};
    int arDYC6143lL [300] = {(644 - 644)};
    char z [300];
    int oeTt0BbW = 0;
    scanf ("%s", z);
    tHx7W5fQi = strlen (z);
    {
        i = 0;
        while (i < tHx7W5fQi) {
            a[tHx7W5fQi - (626 - 625) - i] = z[i] - '0';
            i = i + 1;
        };
    }
    scanf ("%s", z);
    tHx7W5fQi = strlen (z);
    {
        i = 0;
        while (i < tHx7W5fQi) {
            dze8HlF1L[tHx7W5fQi - (141 - 140) - i] = z[i] - '0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = 0; i < 300; i++) {
        arDYC6143lL[i] = a[i] + dze8HlF1L[i];
    }
    for (i = 0; i < 300; i++) {
        if (arDYC6143lL[i] >= (605 - 595)) {
            arDYC6143lL[i + 1] = arDYC6143lL[i + 1] + (arDYC6143lL[i] / 10);
            arDYC6143lL[i] = arDYC6143lL[i] % 10;
        };
    }
    {
        i = 318 - 19;
        while (i > -1) {
            if (arDYC6143lL[i] != 0) {
                oeTt0BbW = 1;
            }
            if (oeTt0BbW == 1) {
                printf ("%d", arDYC6143lL[i]);
            }
            i--;
        };
    }
    if (oeTt0BbW == 0) {
    }
    return 0;
}

