int main () {
    int V9dxQCR;
    int a;
    int i;
    int KVu54Zj6l;
    int q;
    int pj4k2Byxi;
    scanf ("%d", &V9dxQCR);
    while (V9dxQCR = V9dxQCR -1) {
        scanf ("%d", &a);
        if ((a == 1) || (a == 2)) {
            printf ("1\n");
        }
        else {
            KVu54Zj6l = 1;
            q = 1;
            for (i = 2; i < a; i = i + 1) {
                pj4k2Byxi = KVu54Zj6l +q;
                KVu54Zj6l = q;
                q = pj4k2Byxi;
            }
            printf ("%d\n", pj4k2Byxi);
        };
    }
    return 0;
}

