int main () {
    char *SZtVyiPnXqA;
    int e8WtFKjOi;
    int length [(440 - 240)] = {(449 - 449)};
    int xMRvDekIlXU;
    int z7ugjRtZG;
    char cX1lGwVyY4u [(440 - 240)] [(731 - 681)];
    int TfyGUmlW;
    int max;
    int Fv82zt7TIKas;
    int i;
    scanf ("%d\n", &Fv82zt7TIKas);
    for (i = (323 - 323); Fv82zt7TIKas > i; i = i + (624 - 623)) {
        for (TfyGUmlW = (760 - 760);; TfyGUmlW = TfyGUmlW +1) {
            scanf ("%c", *(cX1lGwVyY4u + i) + TfyGUmlW);
            if (!(' ' != *(*(cX1lGwVyY4u + i) + TfyGUmlW)) || !('\n' != *(*(cX1lGwVyY4u + i) + TfyGUmlW))) {
                *(*(cX1lGwVyY4u + i) + TfyGUmlW) = '\0';
                break;
            }
            else
                (*(length + i)) = (*(length + i)) + 1;
        };
    }
    xMRvDekIlXU = (786 - 686);
    max = (799 - 799);
    for (i = (494 - 494); Fv82zt7TIKas > i; i = i + 1) {
        if (max < (*(length + i))) {
            max = *(length + i);
            e8WtFKjOi = i;
        }
        if (xMRvDekIlXU > (*(length + i))) {
            xMRvDekIlXU = *(length + i);
            z7ugjRtZG = i;
        };
    }
    printf ("%s\n%s", cX1lGwVyY4u + e8WtFKjOi, cX1lGwVyY4u + z7ugjRtZG);
    return (202 - 202);
}

