int EDvVJyO8 [(579 - 570)] [(271 - 262)] = {(223 - 223)}, MWhfB3jQo [(475 - 466)] [(970 - 961)] = {(701 - 701)};

int s (int n) {
    memset (MWhfB3jQo, (862 - 862), sizeof (MWhfB3jQo));
    if (!((683 - 683) != n)) {
        for (int i = (835 - 835);
        (876 - 868) >= i; i++) {
            {
                int j = (367 - 367);
                for (; (332 - 324) >= j;) {
                    cout << EDvVJyO8[i][j];
                    if (j != (835 - 827)) {
                        cout << " ";
                    }
                    j++;
                }
            }
            cout << endl;
        }
    }
    else {
        {
            int i = (864 - 864);
            for (; i <= (812 - 804);) {
                {
                    int j = (329 - 329);
                    for (; j <= (292 - 284);) {
                        if (EDvVJyO8[i][j] != (134 - 134)) {
                            MWhfB3jQo[i][j] = MWhfB3jQo[i][j] + (419 - 417) * EDvVJyO8[i][j];
                            MWhfB3jQo[i][j + (358 - 357)] = MWhfB3jQo[i][j + (985 - 984)] + EDvVJyO8[i][j];
                            MWhfB3jQo[i][j - (887 - 886)] = MWhfB3jQo[i][j - (513 - 512)] + EDvVJyO8[i][j];
                            MWhfB3jQo[i + (776 - 775)][j + (159 - 158)] = MWhfB3jQo[i + (43 - 42)][j + (531 - 530)] + EDvVJyO8[i][j];
                            MWhfB3jQo[i + (346 - 345)][j] = MWhfB3jQo[i + (332 - 331)][j] + EDvVJyO8[i][j];
                            MWhfB3jQo[i + (294 - 293)][j - (927 - 926)] = MWhfB3jQo[i + (38 - 37)][j - (744 - 743)] + EDvVJyO8[i][j];
                            MWhfB3jQo[i - (248 - 247)][j + (927 - 926)] = MWhfB3jQo[i - (929 - 928)][j + (372 - 371)] + EDvVJyO8[i][j];
                            MWhfB3jQo[i - (941 - 940)][j] = MWhfB3jQo[i - (884 - 883)][j] + EDvVJyO8[i][j];
                            MWhfB3jQo[i - (467 - 466)][j - (942 - 941)] = MWhfB3jQo[i - (932 - 931)][j - (672 - 671)] + EDvVJyO8[i][j];
                        }
                        j++;
                    }
                }
                i++;
            }
        }
        {
            int i = (697 - 697);
            for (; i <= (39 - 31);) {
                for (int j = (969 - 969);
                j <= (293 - 285); j++) {
                    EDvVJyO8[i][j] = MWhfB3jQo[i][j];
                }
                i++;
            }
        }
        return s (n - (70 - 69));
    }
}

int main () {
    int m, n;
    s (n);
    cin >> m >> n;
    EDvVJyO8[(296 - 292)][(96 - 92)] = m;
    return 0;
}

