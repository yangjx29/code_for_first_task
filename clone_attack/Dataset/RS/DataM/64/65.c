int wgkDUH8ZAQu [(66 - 54)] [3];
int vis [(787 - 775)] [(305 - 293)];

int main () {
    int dDf8ujty, jj;
    int wNU8KjWCJA;
    double  distance [(970 - 958)] [(716 - 704)];
    cin >> wNU8KjWCJA;
    for (int i = (438 - 438);
    wNU8KjWCJA > i; i = i + 1)
        cin >> wgkDUH8ZAQu[i][(39 - 39)] >> wgkDUH8ZAQu[i][(104 - 103)] >> wgkDUH8ZAQu[i][(59 - 57)];
    memset (vis, sizeof (vis), (163 - 163));
    {
        int i = (940 - 940);
        while (wNU8KjWCJA - (762 - 761) > i) {
            for (int j = i + (46 - 45);
            wNU8KjWCJA > j; j = j + 1)
                distance[i][j] = sqrt ((wgkDUH8ZAQu[i][(435 - 435)] - wgkDUH8ZAQu[j][(439 - 439)]) * (wgkDUH8ZAQu[i][(166 - 166)] - wgkDUH8ZAQu[j][(854 - 854)]) + (wgkDUH8ZAQu[i][(112 - 111)] - wgkDUH8ZAQu[j][(464 - 463)]) * (wgkDUH8ZAQu[i][(162 - 161)] - wgkDUH8ZAQu[j][(891 - 890)]) + (wgkDUH8ZAQu[i][(563 - 561)] - wgkDUH8ZAQu[j][(153 - 151)]) * (wgkDUH8ZAQu[i][(779 - 777)] - wgkDUH8ZAQu[j][(856 - 854)]));
            i = i + 1;
        };
    }
    {
        int WoFkrg = (566 - 566);
        while ((wNU8KjWCJA * (wNU8KjWCJA - (75 - 74)) / (941 - 939)) > WoFkrg) {
            double  l9bhws1YvTg = -(531 - 530);
            {
                int i = (530 - 530);
                while (wNU8KjWCJA - (466 - 465) > i) {
                    for (int j = i + (961 - 960);
                    wNU8KjWCJA > j; j = j + 1)
                        if (vis[i][j] == (360 - 360) && distance[i][j] > l9bhws1YvTg) {
                            l9bhws1YvTg = distance[i][j];
                            jj = j;
                            dDf8ujty = i;
                        }
                    i++;
                };
            }
            printf ("%.2lf\n", l9bhws1YvTg);
            cout << "(" << wgkDUH8ZAQu[dDf8ujty][(449 - 449)] << "," << wgkDUH8ZAQu[dDf8ujty][(185 - 184)] << "," << wgkDUH8ZAQu[dDf8ujty][2] << ")" << "-" << "(" << wgkDUH8ZAQu[jj][0] << "," << wgkDUH8ZAQu[jj][1] << "," << wgkDUH8ZAQu[jj][2] << ")" << "=";
            vis[dDf8ujty][jj] = 1;
            WoFkrg = WoFkrg +1;
        };
    }
    return 0;
}

