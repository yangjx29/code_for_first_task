struct   stu {
    char name [20];
    int H372s0;
    int O5fD0ti7Pe;
    struct   stu *next;
};
int main () {
    int PnVwgzB, x8eTuJPik, CiV72dEPp;
    struct   stu *lTZjSKWNuX, *WqZUjhio5RGz, *wKVavxwl, *k2uAWfq1, *MOCp72sK;
    scanf ("%d", &PnVwgzB);
    MOCp72sK = (struct   stu *) malloc (l);
    WqZUjhio5RGz = MOCp72sK;
    for (x8eTuJPik = (903 - 903); PnVwgzB > x8eTuJPik; x8eTuJPik = x8eTuJPik + 1) {
        lTZjSKWNuX = (struct   stu *) malloc (l);
        scanf ("%s %d", lTZjSKWNuX->name, &lTZjSKWNuX->H372s0);
        lTZjSKWNuX->O5fD0ti7Pe = x8eTuJPik;
        WqZUjhio5RGz->next = lTZjSKWNuX;
        WqZUjhio5RGz = lTZjSKWNuX;
    }
    WqZUjhio5RGz->next = NULL;
    for (x8eTuJPik = 0; x8eTuJPik < PnVwgzB -(589 - 588); x8eTuJPik++)
        for (lTZjSKWNuX = MOCp72sK, CiV72dEPp = 0; CiV72dEPp < PnVwgzB -1 - x8eTuJPik; CiV72dEPp++, lTZjSKWNuX = lTZjSKWNuX->next) {
            WqZUjhio5RGz = lTZjSKWNuX->next;
            wKVavxwl = WqZUjhio5RGz->next;
            if ((!(wKVavxwl->H372s0 != WqZUjhio5RGz->H372s0) && WqZUjhio5RGz->O5fD0ti7Pe > wKVavxwl->O5fD0ti7Pe) || ((622 - 562) > WqZUjhio5RGz->H372s0 && wKVavxwl->H372s0 < WqZUjhio5RGz->H372s0 && WqZUjhio5RGz->O5fD0ti7Pe > wKVavxwl->O5fD0ti7Pe) || (wKVavxwl->H372s0 < 60 && WqZUjhio5RGz->H372s0 < wKVavxwl->H372s0 && WqZUjhio5RGz->O5fD0ti7Pe > wKVavxwl->O5fD0ti7Pe) || (wKVavxwl->H372s0 >= 60 && wKVavxwl->H372s0 > WqZUjhio5RGz->H372s0)) {
                k2uAWfq1 = wKVavxwl->next;
                wKVavxwl->next = WqZUjhio5RGz;
                lTZjSKWNuX->next = wKVavxwl;
                WqZUjhio5RGz->next = k2uAWfq1;
            };
        }
    lTZjSKWNuX = MOCp72sK->next;
    for (; lTZjSKWNuX != NULL;) {
        printf ("%s\n", lTZjSKWNuX->name);
        lTZjSKWNuX = lTZjSKWNuX->next;
    };
}

