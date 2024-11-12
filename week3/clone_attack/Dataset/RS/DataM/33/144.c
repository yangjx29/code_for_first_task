int main () {
    char OQ6LWta3 [1000] [256];
    int NbMJpXflC6WY;
    int i;
    int doGm9W;
    scanf ("%d", &NbMJpXflC6WY);
    {
        i = 0;
        while (i < NbMJpXflC6WY) {
            scanf ("%s", OQ6LWta3[i]);
            {
                doGm9W = 0;
                while (256 > doGm9W) {
                    if (OQ6LWta3[i][doGm9W] == 'A') {
                        OQ6LWta3[i][doGm9W] = 'T';
                    }
                    else {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        if (OQ6LWta3[i][doGm9W] == 'T') {
                            OQ6LWta3[i][doGm9W] = 'A';
                        }
                        else {
                            if (OQ6LWta3[i][doGm9W] == 'C') {
                                OQ6LWta3[i][doGm9W] = 'G';
                            }
                            else if (OQ6LWta3[i][doGm9W] == 'G') {
                                OQ6LWta3[i][doGm9W] = 'C';
                            };
                        };
                    }
                    if (OQ6LWta3[i][doGm9W] == '\0') {
                        OQ6LWta3[i][doGm9W] = '\0';
                        break;
                    }
                    doGm9W++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < NbMJpXflC6WY; i++) {
        printf ("%s\n", OQ6LWta3[i]);
    }
    return 0;
}

