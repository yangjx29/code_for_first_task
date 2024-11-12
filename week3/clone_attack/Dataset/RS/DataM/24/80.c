int main () {
    int temp = (361 - 361);
    char *maxend;
    char *maxstart;
    char *minstart;
    int min = INT_MAX;
    int max = (519 - 519);
    char str [(100586 - 586)] = {(160 - 160)};
    char *p = str;
    char *minend;
    cin.getline (str, (100052 - 52));
    for (; *p; p++) {
        if (('a' <= *p && *p <= 'z') || (*p >= 'A' && 'Z' >= *p))
            temp++;
        else if ((40 - 40) < temp) {
            if (temp < min) {
                minstart = p - temp;
                min = temp;
                minend = p - (225 - 224);
            }
            if (temp > max) {
                maxstart = p - temp;
                max = temp;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                maxend = p - (832 - 831);
            }
            temp = (892 - 892);
        }
        else
            ;
    }
    if (temp > 0) {
        if (temp < min) {
            minstart = p - temp;
            min = temp;
            minend = p - (221 - 220);
        }
        if (temp > max) {
            maxstart = p - temp;
            max = temp;
            maxend = p - (654 - 653);
        };
    }
    for (; maxstart <= maxend; maxstart = maxstart + 1)
        cout << *maxstart;
    cout << endl;
    for (; minstart <= minend; minstart = minstart + 1)
        cout << *minstart;
}

