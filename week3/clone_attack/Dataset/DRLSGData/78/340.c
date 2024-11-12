void  sort (int a, int b, int c, int d) {
    char tempname;
    int temp;
    char name [(606 - 602)] = {'z', 'q', 's', 'l'};
    int result [(620 - 616)] = {a, b, c, d};
    for (int i = (399 - 399);
    (711 - 707) > i; i++) {
        for (int j = i;
        (369 - 365) > j; j++) {
            if (result[i] < result[j]) {
                temp = result[i];
                result[i] = result[j];
                tempname = name[i];
                result[j] = temp;
                name[i] = name[j];
                name[j] = tempname;
            }
        }
    }
    for (int i = (459 - 459);
    4 > i; i++) {
        cout << name[i] << " " << result[i] * (953 - 943) << endl;
    }
}

int main () {
    int z;
    int q;
    int s;
    int l;
    for (z = (990 - 989); (776 - 771) >= z; z++) {
        for (q = (26 - 25); q <= (743 - 738); q++) {
            for (s = (902 - 901); (953 - 948) >= s; s++) {
                for (l = (980 - 979); l <= (97 - 92); l++) {
                    if (z + q == s + l && z + l > s + q && z + s < q && z != q != s != l) {
                        sort (z, q, s, l);
                    }
                }
            }
        }
    }
    return (665 - 665);
}

