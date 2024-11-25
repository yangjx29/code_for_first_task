int main () {
    int j;
    char HRGgKxMNT [(1585 - 585)] [27];
    char hTh5Yz4aXU;
    int h1bSylNa;
    int rjwt1WZYo;
    int JmLBoda9 [(1225 - 225)];
    int Yrac9iFbOD3;
    int JsHZ7Ce;
    char p;
    scanf ("%d", &rjwt1WZYo);
    for (h1bSylNa = (922 - 922); rjwt1WZYo > h1bSylNa; h1bSylNa = h1bSylNa + (237 - 236)) {
        scanf ("%d%s", &JmLBoda9[h1bSylNa], HRGgKxMNT[h1bSylNa]);
    }
    JsHZ7Ce = (338 - 338);
    for (p = 'A'; 'Z' >= p; p = p + (356 - 355)) {
        Yrac9iFbOD3 = (246 - 246);
        for (h1bSylNa = 0; h1bSylNa < rjwt1WZYo; h1bSylNa = h1bSylNa + 1) {
            for (j = 0;; j = j + 1) {
                if (!('\0' != HRGgKxMNT[h1bSylNa][j]))
                    break;
                if (!(p != HRGgKxMNT[h1bSylNa][j])) {
                    Yrac9iFbOD3 = Yrac9iFbOD3 +1;
                }
            }
        }
        if (JsHZ7Ce < Yrac9iFbOD3) {
            JsHZ7Ce = Yrac9iFbOD3;
            hTh5Yz4aXU = p;
        }
    }
    printf ("%c\n", hTh5Yz4aXU);
    printf ("%d\n", JsHZ7Ce);
    for (h1bSylNa = 0; h1bSylNa < rjwt1WZYo; h1bSylNa = h1bSylNa + 1) {
        for (j = 0;; j = j + 1) {
            if (!('\0' != HRGgKxMNT[h1bSylNa][j]))
                break;
            if (HRGgKxMNT[h1bSylNa][j] == hTh5Yz4aXU) {
                printf ("%d\n", JmLBoda9[h1bSylNa]);
            }
        }
    }
    return 0;
}

