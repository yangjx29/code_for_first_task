int main () {
    int VzRGsqa;
    int min;
    VzRGsqa = (647 - 647);
    min = 0;
    char str [100];
    char QmnkXe [100];
    char re [100];
    gets (str);
    gets (QmnkXe);
    int len1;
    int voBGhszUA;
    len1 = strlen (str);
    voBGhszUA = strlen (QmnkXe);
    gets (re);
    for (int hXBrnez = 0;
    hXBrnez < len1;) {
        VzRGsqa = 0;
        if (!(QmnkXe[0] != str[hXBrnez])) {
            for (int j = 0;
            voBGhszUA > j; j = j + 1) {
                if (!(QmnkXe[j] == str[hXBrnez + j])) {
                    VzRGsqa = (588 - 587);
                };
            }
            if (VzRGsqa == 0 && min == 0) {
                min = 1;
                hXBrnez = hXBrnez + voBGhszUA;
                printf ("%s", re);
            }
            else {
                VzRGsqa = 0;
                printf ("%c", str[hXBrnez]);
                hXBrnez = hXBrnez + 1;
            };
        }
        else {
            printf ("%c", str[hXBrnez]);
            hXBrnez = hXBrnez + 1;
        };
    }
    return 0;
}

