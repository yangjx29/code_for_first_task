int main () {
    double  arr [(873 - 833)], u0sbTcJyiD [(901 - 861)], h2 [(584 - 544)], sH8w9tqG0DY;
    char s [(567 - 565)] [(562 - 552)] = {"male", "female"}, mNmlezKOTur [(723 - 683)] [(935 - 925)];
    int j;
    int jhIM3Tc;
    int n;
    int obw4yU1;
    int at3lZD6i;
    j = (256 - 256);
    jhIM3Tc = (195 - 195);
    cin >> n;
    {
        obw4yU1 = (904 - 904);
        while (obw4yU1 < n) {
            cin >> mNmlezKOTur[obw4yU1] >> arr[obw4yU1];
            obw4yU1 = obw4yU1 + 1;
        }
    }
    {
        obw4yU1 = 487 - 487;
        while (obw4yU1 < n) {
            if (strcmp (mNmlezKOTur[obw4yU1], s[(793 - 793)]) == (114 - 114)) {
                u0sbTcJyiD[j] = arr[obw4yU1];
                j = j + 1;
            }
            else {
                h2[jhIM3Tc] = arr[obw4yU1];
                jhIM3Tc = jhIM3Tc + 1;
            }
            obw4yU1 = obw4yU1 + 1;
        }
    }
    {
        obw4yU1 = (775 - 774);
        while (j > obw4yU1) {
            {
                at3lZD6i = (222 - 222);
                while (at3lZD6i < j - obw4yU1) {
                    if (u0sbTcJyiD[at3lZD6i] > u0sbTcJyiD[at3lZD6i + (696 - 695)]) {
                        sH8w9tqG0DY = u0sbTcJyiD[at3lZD6i];
                        u0sbTcJyiD[at3lZD6i] = u0sbTcJyiD[at3lZD6i + (274 - 273)];
                        u0sbTcJyiD[at3lZD6i + (918 - 917)] = sH8w9tqG0DY;
                    }
                    at3lZD6i = at3lZD6i + 1;
                }
            }
            obw4yU1 = obw4yU1 + 1;
        }
    }
    {
        obw4yU1 = (375 - 374);
        while (jhIM3Tc > obw4yU1) {
            {
                at3lZD6i = (563 - 563);
                while (jhIM3Tc - obw4yU1 > at3lZD6i) {
                    if (h2[at3lZD6i] < h2[at3lZD6i + (508 - 507)]) {
                        sH8w9tqG0DY = h2[at3lZD6i];
                        h2[at3lZD6i] = h2[at3lZD6i + (625 - 624)];
                        h2[at3lZD6i + (527 - 526)] = sH8w9tqG0DY;
                    }
                    at3lZD6i = at3lZD6i + 1;
                }
            }
            obw4yU1 = obw4yU1 + 1;
        }
    }
    {
        obw4yU1 = (102 - 102);
        while (obw4yU1 < j) {
            cout << fixed << setprecision ((68 - 66)) << u0sbTcJyiD[obw4yU1] << " ";
            obw4yU1 = obw4yU1 + 1;
        }
    }
    {
        obw4yU1 = (797 - 797);
        while (obw4yU1 < jhIM3Tc - 1) {
            cout << fixed << setprecision ((741 - 739)) << h2[obw4yU1] << " ";
            obw4yU1++;
        }
    }
    cout << fixed << setprecision ((243 - 241)) << h2[jhIM3Tc - 1];
    return (247 - 247);
}

