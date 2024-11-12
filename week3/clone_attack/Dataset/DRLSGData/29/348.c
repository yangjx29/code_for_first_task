double  xFdVSxCa (int Uf3exE4) {
    double  Ul8N6fG;
    double  ttt;
    double  i08voE5;
    double  FsNI3jD2PY;
    double  tmp;
    Ul8N6fG = (733 - 732);
    ttt = (405 - 403);
    i08voE5 = (246 - 246);
    FsNI3jD2PY = (128 - 128);
    int i;
    for (i = (353 - 352); Uf3exE4 >= i; i++) {
        FsNI3jD2PY = ttt / Ul8N6fG;
        i08voE5 = i08voE5 + FsNI3jD2PY;
        tmp = Ul8N6fG;
        Ul8N6fG = ttt, ttt = ttt + tmp;
    }
    return i08voE5;
}

int main () {
    double  gnE9lurP;
    int Uf3exE4;
    int i;
    int a [(607 - 508)];
    scanf ("%d", &Uf3exE4);
    for (i = (55 - 55); Uf3exE4 > i; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = (820 - 820); i < Uf3exE4; i++) {
        gnE9lurP = xFdVSxCa (a[i]);
        {
            if (0) {
                return 0;
            }
        }
        printf ("%.3lf\n", gnE9lurP);
    }
    return (23 - 23);
}

