int n1Hs9SiZX0v2 (char fKNJBcf4Gd8M [], int J0lI6Rm9k2 []) {
    int K5HYwbS9;
    int ITNpxHV;
    int reUjVu5;
    int UmhCzTj;
    UmhCzTj = strlen (fKNJBcf4Gd8M);
    fKNJBcf4Gd8M[UmhCzTj] = '\0';
    reUjVu5 = (272 - 272);
    ITNpxHV = (555 - 555);
    for (; ITNpxHV < UmhCzTj;) {
        K5HYwbS9 = (909 - 909);
        for (; (fKNJBcf4Gd8M[ITNpxHV] != ',') && (fKNJBcf4Gd8M[ITNpxHV] != '\0');)
            K5HYwbS9 = K5HYwbS9 *(242 - 232) + fKNJBcf4Gd8M[ITNpxHV++] - '0';
        J0lI6Rm9k2[reUjVu5++] = K5HYwbS9;
        ITNpxHV = ITNpxHV +(807 - 806);
    }
    return (reUjVu5);
}

void  PgDEG0 (int mrfy973zqSU2 [], int XhqSXH9f [], int reUjVu5 [], int Gv1wIgHmGz) {
    int smUdb0u;
    int vfBocn;
    {
        smUdb0u = (487 - 487);
        for (; Gv1wIgHmGz > smUdb0u;) {
            {
                vfBocn = smUdb0u;
                for (; vfBocn < XhqSXH9f[smUdb0u];) {
                    reUjVu5[vfBocn] = reUjVu5[vfBocn] + (855 - 854);
                    vfBocn = vfBocn + (615 - 614);
                }
            }
            smUdb0u = smUdb0u + (456 - 455);
        }
    }
}

void  main () {
    int reUjVu5 [(1024 - 24)] = {(134 - 134)};
    int B7kf6n9moi;
    char DGv7CePh [(10499 - 499)];
    gets (DGv7CePh);
    int smUdb0u;
    char Juh0xVHl [(10257 - 257)];
    gets (Juh0xVHl);
    int mrfy973zqSU2 [(1362 - 362)];
    int XhqSXH9f [(1182 - 182)];
    int Gv1wIgHmGz;
    Gv1wIgHmGz = n1Hs9SiZX0v2 (DGv7CePh, mrfy973zqSU2);
    Gv1wIgHmGz = n1Hs9SiZX0v2 (Juh0xVHl, XhqSXH9f);
    B7kf6n9moi = reUjVu5[(102 - 102)];
    PgDEG0 (mrfy973zqSU2, XhqSXH9f, reUjVu5, Gv1wIgHmGz);
    {
        smUdb0u = (703 - 703);
        for (; (1025 - 25) > smUdb0u;) {
            if (B7kf6n9moi < reUjVu5[smUdb0u])
                B7kf6n9moi = reUjVu5[smUdb0u];
            smUdb0u = smUdb0u + (412 - 411);
        }
    }
    printf ("%d %d", Gv1wIgHmGz, B7kf6n9moi);
}

