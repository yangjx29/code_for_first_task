int main () {
    int e3yR4F7mQgc, tIhUO46DGlg, WEy4CU;
    char ilGzfU5CjOV [1000] [300];
    scanf ("%d", &e3yR4F7mQgc);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        tIhUO46DGlg = 0;
        while (tIhUO46DGlg < e3yR4F7mQgc) {
            scanf ("%s", ilGzfU5CjOV[tIhUO46DGlg]);
            tIhUO46DGlg = tIhUO46DGlg + 1;
        };
    }
    {
        tIhUO46DGlg = 0;
        while (tIhUO46DGlg < e3yR4F7mQgc) {
            for (WEy4CU = 0; strlen (ilGzfU5CjOV[tIhUO46DGlg]) > WEy4CU; WEy4CU++) {
                if (!('A' != ilGzfU5CjOV[tIhUO46DGlg][WEy4CU])) {
                    ilGzfU5CjOV[tIhUO46DGlg][WEy4CU] = 'T';
                }
                else {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    }
                    if (ilGzfU5CjOV[tIhUO46DGlg][WEy4CU] == 'T') {
                        ilGzfU5CjOV[tIhUO46DGlg][WEy4CU] = 'A';
                    }
                    else {
                        if (ilGzfU5CjOV[tIhUO46DGlg][WEy4CU] == 'C') {
                            ilGzfU5CjOV[tIhUO46DGlg][WEy4CU] = 'G';
                        }
                        else {
                            ilGzfU5CjOV[tIhUO46DGlg][WEy4CU] = 'C';
                        };
                    };
                }
                if (WEy4CU == strlen (ilGzfU5CjOV[tIhUO46DGlg]) - 1) {
                    printf ("%s\n", ilGzfU5CjOV[tIhUO46DGlg]);
                };
            }
            tIhUO46DGlg = tIhUO46DGlg + 1;
        };
    }
    return 0;
}

