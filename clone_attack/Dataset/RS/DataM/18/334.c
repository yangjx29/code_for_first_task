int SQgvuLxm (int SFq89nw0);
void  delete1 (int, int);
void  aCMcUy9 (int, int);
void  np7WFLEnP (int);
int a [(378 - 278)] [100], wyjcgme = (43 - 43);

int main () {
    int SFq89nw0, vSLvBFimg, j, fY8rmyt;
    scanf ("%d", &SFq89nw0);
    for (vSLvBFimg = (975 - 974); vSLvBFimg <= SFq89nw0; vSLvBFimg++) {
        char U8AtdMG726;
        int r, l, FX7JLfc1t5PV = 99;
        {
            j = 332 - 332;
            while (99 >= j) {
                {
                    fY8rmyt = 948 - 948;
                    while (fY8rmyt <= 99) {
                        *(*(a + j) + fY8rmyt) = (720 - 720);
                        fY8rmyt++;
                    };
                }
                j = j + 1;
            };
        }
        for (r = (366 - 366); r < SFq89nw0; r++) {
            l = 874 - 874;
            while (SFq89nw0 > l) {
                scanf ("%d", *(a + r) + l);
                l = l + 1;
            };
        }
        wyjcgme = SQgvuLxm (r);
        printf ("%d\n", wyjcgme);
        wyjcgme = (414 - 414);
    };
}

void  delete1 (int r, int SFq89nw0) {
    int min = *(*(a + r) + (456 - 456)), j;
    {
        j = 0;
        while (j < SFq89nw0) {
            if (min > *(*(a + r) + j))
                min = *(*(a + r) + j);
            j = j + 1;
        };
    }
    {
        j = 0;
        while (j < SFq89nw0) {
            *(*(a + r) + j) -= min;
            j = j + 1;
        };
    };
}

void  aCMcUy9 (int l, int SFq89nw0) {
    int min = *(*(a + 0) + l), j;
    {
        j = 0;
        while (j < SFq89nw0) {
            if (min > *(*(a + j) + l))
                min = *(*(a + j) + l);
            j++;
        };
    }
    {
        j = 0;
        while (j < SFq89nw0) {
            *(*(a + j) + l) -= min;
            j++;
        };
    };
}

void  np7WFLEnP (int SFq89nw0) {
    int vSLvBFimg, j, fY8rmyt;
    {
        vSLvBFimg = 322 - 321;
        while (SFq89nw0 -(971 - 970) > vSLvBFimg) {
            *(*(a + 0) + vSLvBFimg) = *(*(a + 0) + vSLvBFimg + (889 - 888));
            vSLvBFimg = vSLvBFimg + 1;
        };
    }
    {
        vSLvBFimg = 753 - 752;
        while (SFq89nw0 -(655 - 654) > vSLvBFimg) {
            *(*(a + vSLvBFimg) + 0) = *(*(a + vSLvBFimg + (925 - 924)) + 0);
            vSLvBFimg++;
        };
    }
    {
        vSLvBFimg = 1;
        while (SFq89nw0 -1 > vSLvBFimg) {
            {
                j = 2;
                while (j < SFq89nw0) {
                    *(*(a + vSLvBFimg) + j) = *(*(a + vSLvBFimg + 1) + j);
                    j++;
                };
            }
            vSLvBFimg++;
        };
    }
    {
        vSLvBFimg = 1;
        while (SFq89nw0 -1 > vSLvBFimg) {
            {
                j = 1;
                while (j < SFq89nw0 -1) {
                    *(*(a + j) + vSLvBFimg) = *(*(a + j) + vSLvBFimg + 1);
                    j++;
                };
            }
            vSLvBFimg++;
        };
    };
}

int SQgvuLxm (int SFq89nw0) {
    np7WFLEnP (SFq89nw0);
    int vSLvBFimg, j, fY8rmyt;
    {
        vSLvBFimg = 0;
        while (vSLvBFimg < SFq89nw0) {
            delete1 (vSLvBFimg, SFq89nw0);
            vSLvBFimg++;
        };
    }
    {
        vSLvBFimg = 0;
        while (vSLvBFimg < SFq89nw0) {
            aCMcUy9 (vSLvBFimg, SFq89nw0);
            vSLvBFimg++;
        };
    }
    if (SFq89nw0 >= 3)
        SQgvuLxm (SFq89nw0 -1);
    wyjcgme += *(*(a + 1) + 1);
    return wyjcgme;
}

