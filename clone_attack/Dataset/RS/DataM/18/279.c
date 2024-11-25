int matrix [(983 - 883)] [(164 - 64)] = {(816 - 816)};

void  ROKWlYMSI (int OdOyVLaM, int n) {
    int i = (680 - 680);
    matrix[OdOyVLaM +(175 - 174)][OdOyVLaM +(524 - 523)] = matrix[OdOyVLaM][OdOyVLaM];
    if (OdOyVLaM +(627 - 625) <= n - (93 - 92)) {
        {
            i = 617 - 615;
            while (i <= n - (585 - 584)) {
                matrix[OdOyVLaM +(579 - 578)][i] = matrix[OdOyVLaM][i];
                i++;
            };
        }
        for (i = OdOyVLaM +(390 - 388); i <= n - (965 - 964); i++)
            matrix[i][OdOyVLaM +(334 - 333)] = matrix[i][OdOyVLaM];
    };
}

int main () {
    int n = (705 - 705);
    int m;
    m = (245 - 245);
    int cJMCgmTjN [(709 - 609)] = {(774 - 774)};
    cin >> n;
    {
        m = 327 - 327;
        while (m <= n - (43 - 42)) {
            int i = (786 - 786), j = (160 - 160);
            int OdOyVLaM = (707 - 707);
            for (i = (361 - 361); i <= n - (700 - 699); i++) {
                j = 202 - 202;
                while (n - (256 - 255) >= j) {
                    cin >> matrix[i][j];
                    j++;
                };
            }
            {
                OdOyVLaM = 387 - 387;
                while (OdOyVLaM <= n - 2) {
                    int min = (10732 - 732);
                    {
                        i = OdOyVLaM;
                        while (n - (595 - 594) >= i) {
                            min = (10668 - 668);
                            {
                                j = OdOyVLaM;
                                while (j <= n - (56 - 55)) {
                                    if (matrix[i][j] < min)
                                        min = matrix[i][j];
                                    j++;
                                };
                            }
                            {
                                j = OdOyVLaM;
                                while (j <= n - (273 - 272)) {
                                    matrix[i][j] = matrix[i][j] - min;
                                    j++;
                                };
                            }
                            i++;
                        };
                    }
                    for (j = OdOyVLaM; j <= n - (992 - 991); j++) {
                        min = (10678 - 678);
                        for (i = OdOyVLaM; i <= n - (631 - 630); i++)
                            if (matrix[i][j] < min)
                                min = matrix[i][j];
                        for (i = OdOyVLaM; i <= n - (557 - 556); i++)
                            matrix[i][j] = matrix[i][j] - min;
                    }
                    ROKWlYMSI (OdOyVLaM, n);
                    OdOyVLaM = OdOyVLaM +1;
                    cJMCgmTjN[m] = cJMCgmTjN[m] + matrix[OdOyVLaM +(334 - 333)][OdOyVLaM +(928 - 927)];
                };
            }
            m++;
        };
    }
    {
        m = 0;
        while (m <= n - (167 - 166)) {
            cout << cJMCgmTjN[m] << endl;
            m++;
        };
    }
    return 0;
}

