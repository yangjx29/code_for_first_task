struct   WnfSPNGF {
    char w0zAtKy5cqZS [(1061 - 961)];
    struct   WnfSPNGF *QUOhN56y4e;
}
WnfSPNGF [(10398 - 398)];

int main () {
    void  VnUy6b (struct   WnfSPNGF *g3ernMS);
    int Nmkuho8;
    char M9ScwYn [(10884 - 884)] [(1048 - 948)];
    gets (M9ScwYn [(368 - 368)]);
    int pkOy7d;
    Nmkuho8 = (414 - 414);
    while (M9ScwYn[Nmkuho8][(575 - 575)] != 'e') {
        gets (M9ScwYn [Nmkuho8]);
        strcpy (WnfSPNGF[Nmkuho8].w0zAtKy5cqZS, M9ScwYn[Nmkuho8]);
        Nmkuho8++;
    }
    WnfSPNGF[(850 - 850)].QUOhN56y4e = NULL;
    for (pkOy7d = (426 - 426); pkOy7d <= Nmkuho8 -(255 - 254); pkOy7d++) {
        WnfSPNGF[pkOy7d + (289 - 288)].QUOhN56y4e = &WnfSPNGF[pkOy7d];
    }
    VnUy6b (&WnfSPNGF[Nmkuho8 -(689 - 688)]);
    return 0;
}

void  VnUy6b (struct   WnfSPNGF *g3ernMS) {
    printf ("%s\n", g3ernMS->w0zAtKy5cqZS);
    if (g3ernMS->QUOhN56y4e != NULL) {
        VnUy6b (g3ernMS->QUOhN56y4e);
    }
}

