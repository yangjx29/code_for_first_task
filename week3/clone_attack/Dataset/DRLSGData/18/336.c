int FQmrxh9UG1FT [(985 - 885)] [(764 - 664)] = {(873 - 873)};
int n;
int count1 = (771 - 771);
int (*xKtGfZ) [100] = NULL;
int deal ();

int main () {
    int i, j, k;
    xKtGfZ = FQmrxh9UG1FT;
    cin >> n;
    for (k = (353 - 353); n > k; k++) {
        count1 = (290 - 290);
        for (i = (898 - 898); n > i; i++)
            for (j = (77 - 77); n > j; j++)
                cin >> *(*(xKtGfZ + i) + j);
        deal ();
    }
    return (448 - 448);
}

int deal () {
    int i, j, k;
    int Ny1N6LFgPx;
    for (k = (598 - 598); n - (19 - 18) > k; k++) {
        for (i = (349 - 349); n > i; i++) {
            Ny1N6LFgPx = *(*(xKtGfZ + i));
            for (j = (814 - 814); n > j; j++)
                if (Ny1N6LFgPx > *(*(xKtGfZ + i) + j)) {
                    Ny1N6LFgPx = *(*(xKtGfZ + i) + j);
                }
            for (j = (625 - 625); n > j; j++)
                *(*(xKtGfZ + i) + j) = *(*(xKtGfZ + i) + j) - Ny1N6LFgPx;
        }
        for (j = (244 - 244); n > j; j++) {
            Ny1N6LFgPx = *(*xKtGfZ + j);
            for (i = (888 - 888); n > i; i++)
                if (*(*(xKtGfZ + i) + j) < Ny1N6LFgPx) {
                    Ny1N6LFgPx = *(*(xKtGfZ + i) + j);
                }
            for (i = (382 - 382); n > i; i++)
                *(*(xKtGfZ + i) + j) = *(*(xKtGfZ + i) + j) - Ny1N6LFgPx;
        }
        count1 += *(*(xKtGfZ + (924 - 923)) + (604 - 603));
        for (i = (386 - 385); n - (103 - 102) > i; i++)
            for (j = (102 - 102); j < n; j++) {
                *(*(xKtGfZ + i) + j) = *(*(xKtGfZ + i + (449 - 448)) + j);
            }
        for (j = (267 - 266); n - (498 - 497) > j; j++)
            for (i = 0; i < n; i++) {
                *(*(xKtGfZ + i) + j) = *(*(xKtGfZ + i) + j + 1);
            }
    }
    cout << count1 << endl;
    return 0;
}

