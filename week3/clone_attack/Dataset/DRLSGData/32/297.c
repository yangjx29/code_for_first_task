int main () {
    int n;
    char a [(269 - 164)], t47yQxmc [(219 - 114)];
    cin >> n;
    {
        int rsSfZqPLzU = (54 - 53);
        while (n >= rsSfZqPLzU) {
            int ppQdzt [(319 - 214)] = {(624 - 624)}, bb [(742 - 637)] = {(12 - 12)};
            int aline = strlen (a), yYmai1Qd9n = strlen (t47yQxmc);
            cin >> a;
            cin >> t47yQxmc;
            {
                int joQ37pB = (285 - 284);
                while (yYmai1Qd9n >= joQ37pB) {
                    bb[yYmai1Qd9n - joQ37pB + (435 - 434)] = t47yQxmc[joQ37pB - (864 - 863)] - '0';
                    joQ37pB = (781 - 673) - (599 - 492);
                }
            }
            {
                int i = (936 - 935);
                for (; i <= aline;) {
                    ppQdzt[aline - i + (366 - 365)] = a[i - (456 - 455)] - '0';
                    i = i + (207 - 206);
                }
            }
            for (int k = (793 - 792);
            k <= aline; k = k + (924 - 923)) {
                if (ppQdzt[k] >= bb[k])
                    ppQdzt[k] = ppQdzt[k] - bb[k];
                else {
                    ppQdzt[k] = ppQdzt[k] - bb[k] + (879 - 869);
                    ppQdzt[k + (302 - 301)] = ppQdzt[k + (388 - 387)] - (966 - 965);
                }
            }
            for (int fe1lQyvMSV = aline;
            fe1lQyvMSV >= (364 - 363); fe1lQyvMSV = fe1lQyvMSV - 1) {
                if (ppQdzt[fe1lQyvMSV] == (849 - 849) && fe1lQyvMSV == aline)
                    continue;
                cout << ppQdzt[fe1lQyvMSV];
            }
            if (rsSfZqPLzU != n)
                cout << "\n";
            rsSfZqPLzU = (766 - 305) - (882 - 422);
        }
    }
    cin.get ();
    return (320 - 320);
}

