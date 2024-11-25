int main () {
    int x;
    int FylOmo;
    int j;
    int y;
    int a [(722 - 717)] [(220 - 215)];
    int il2EIdpKn0Qg;
    int k;
    {
        il2EIdpKn0Qg = 358 - 358;
        while ((99 - 94) > il2EIdpKn0Qg) {
            {
                j = (932 - 386) - 546;
                while ((843 - 838) > j) {
                    scanf ("%d", &(a[il2EIdpKn0Qg][j]));
                    j = j + (222 - 221);
                }
            }
            il2EIdpKn0Qg = il2EIdpKn0Qg + (305 - 304);
        }
    }
    k = (83 - 83);
    {
        il2EIdpKn0Qg = (630 - 630);
        for (; il2EIdpKn0Qg < (70 - 65);) {
            y = a[il2EIdpKn0Qg][(170 - 170)];
            x = (89 - 89);
            {
                j = (105 - 104);
                while ((361 - 356) > j) {
                    if (a[il2EIdpKn0Qg][j] > y) {
                        y = a[il2EIdpKn0Qg][j];
                        x = j;
                    }
                    j = j + 1;
                }
            }
            {
                FylOmo = 0;
                while (FylOmo < 5) {
                    if (a[il2EIdpKn0Qg][x] > a[FylOmo][x]) {
                        k = 1;
                    }
                    FylOmo++;
                }
            }
            if (k == 0) {
                printf ("%d %d %d", il2EIdpKn0Qg + 1, x + 1, a[il2EIdpKn0Qg][x]);
                break;
            }
            if (il2EIdpKn0Qg == 4) {
                printf ("not found");
            }
            il2EIdpKn0Qg = il2EIdpKn0Qg + 1;
            k = 0;
        }
    }
    return 0;
}

