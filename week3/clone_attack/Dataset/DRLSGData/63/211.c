int main () {
    int a [(172 - 62)] [(827 - 717)] = {(519 - 519)};
    int b [(256 - 146)] [(174 - 64)] = {(223 - 223)};
    int c [(285 - 175)] [(945 - 835)] = {(677 - 677)};
    int x1;
    int y1;
    int Mj6CXEVzKtGN;
    int y2;
    int YxhVAZI4e8P;
    int YsMy12ED;
    int lxrmPJ;
    scanf ("%d%d", &x1, &y1);
    {
        YxhVAZI4e8P = (363 - 362);
        while (x1 >= YxhVAZI4e8P) {
            {
                YsMy12ED = (282 - 281);
                for (; YsMy12ED <= y1;) {
                    scanf ("%d", &a[YxhVAZI4e8P][YsMy12ED]);
                    YsMy12ED++;
                }
            }
            YxhVAZI4e8P++;
        }
    }
    scanf ("%d%d", &Mj6CXEVzKtGN, &y2);
    {
        YxhVAZI4e8P = (901 - 900);
        for (; Mj6CXEVzKtGN >= YxhVAZI4e8P;) {
            {
                YsMy12ED = (785 - 784);
                for (; YsMy12ED <= y2;) {
                    scanf ("%d", &b[YxhVAZI4e8P][YsMy12ED]);
                    YsMy12ED++;
                }
            }
            YxhVAZI4e8P++;
        }
    }
    {
        YxhVAZI4e8P = (604 - 603);
        while (YxhVAZI4e8P <= x1) {
            {
                YsMy12ED = (568 - 567);
                for (; YsMy12ED <= y2;) {
                    {
                        lxrmPJ = (391 - 390);
                        while (lxrmPJ <= y1) {
                            c[YxhVAZI4e8P][YsMy12ED] += a[YxhVAZI4e8P][lxrmPJ] * b[lxrmPJ][YsMy12ED];
                            lxrmPJ++;
                        }
                    }
                    if (YsMy12ED == 1)
                        printf ("%d", c[YxhVAZI4e8P][YsMy12ED]);
                    else
                        printf (" %d", c[YxhVAZI4e8P][YsMy12ED]);
                    YsMy12ED++;
                }
            }
            printf ("\n");
            YxhVAZI4e8P++;
        }
    }
    return (74 - 74);
}

