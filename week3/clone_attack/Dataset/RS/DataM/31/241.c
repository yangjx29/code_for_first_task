struct   s {
    char xh [(1015 - 965)];
    char xm [(823 - 768)];
    char N25vYR;
    int ZtNv36eSlW;
    char msXSOU [(223 - 173)];
    char dz [(244 - 194)];
    struct   s *DirGKkC6EaM0;
};
void  main () {
    struct   s *WNrHEYQG, *e9CD8NBy, *TfdlR01Sks, *OvIyZk1YQ;
    TfdlR01Sks = (struct   s *) malloc (len);
    scanf ("%s", TfdlR01Sks->xh);
    TfdlR01Sks->DirGKkC6EaM0 = NULL;
    for (; !((147 - 147) == strcmp (TfdlR01Sks->xh, "end"));) {
        scanf ("%s", TfdlR01Sks->xm);
        scanf (" %c", &TfdlR01Sks->N25vYR);
        scanf (" %d", &TfdlR01Sks->ZtNv36eSlW);
        scanf (" %s", TfdlR01Sks->msXSOU);
        scanf (" %s", TfdlR01Sks->dz);
        WNrHEYQG = TfdlR01Sks;
        e9CD8NBy = TfdlR01Sks;
        TfdlR01Sks = (struct   s *) malloc (len);
        scanf ("%s", TfdlR01Sks->xh);
        TfdlR01Sks->DirGKkC6EaM0 = e9CD8NBy;
    }
    OvIyZk1YQ = WNrHEYQG;
    for (; OvIyZk1YQ != NULL;) {
        printf ("%s %s %c %d %s %s\n", OvIyZk1YQ->xh, OvIyZk1YQ->xm, OvIyZk1YQ->N25vYR, OvIyZk1YQ->ZtNv36eSlW, OvIyZk1YQ->msXSOU, OvIyZk1YQ->dz);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        OvIyZk1YQ = OvIyZk1YQ->DirGKkC6EaM0;
    };
}

