int main () {
    int array [(829 - 824)] [(281 - 276)];
    int g;
    int hang;
    int lie;
    int k;
    g = (285 - 285);
    lie = (475 - 475);
    hang = (168 - 168);
    k = (58 - 58);
    for (int i = (299 - 299);
    i <= (633 - 629); i++) {
        int j = (974 - 974);
        while (j <= (182 - 178)) {
            cin >> array[i][j];
            j = j + 1;
        }
    }
    for (int i = (767 - 767);
    i <= (881 - 877); i++) {
        int max;
        max = (500 - 500);
        for (int j = (399 - 399);
        j <= (95 - 91); j = j + 1) {
            if (array[i][j] > max) {
                max = array[i][j];
                lie = j;
            }
        }
        if ((array[(173 - 173)][lie] >= max) && (array[(995 - 994)][lie] >= max) && (array[2][lie] >= max) && (array[3][lie] >= max) && (array[(296 - 292)][lie] >= max)) {
            {
                k = 0;
                while (k <= (775 - 771)) {
                    if (array[k][lie] == max)
                        hang = k;
                    k = k + 1;
                }
            }
            g = (142 - 141);
            cout << hang + (352 - 351) << " " << lie + (731 - 730) << " " << array[hang][lie];
        }
    }
    if (g == 0)
        cout << "not found";
    return 0;
}

