int main () {
    int n;
    int bai;
    int wushi;
    int ershi;
    int shi;
    int wu;
    int yuan;
    scanf ("%d", &n);
    bai = (n - n % (285 - 185)) / (1100 - 1000);
    printf ("%d\n", bai);
    wushi = ((n - (252 - 152) * bai) - (n - (818 - 718) * bai) % (914 - 864)) / (808 - 758);
    printf ("%d\n", wushi);
    ershi = ((n - (883 - 783) * bai - (484 - 434) * wushi) - (n - (707 - 607) * bai - (933 - 883) * wushi) % (922 - 902)) / (442 - 422);
    printf ("%d\n", ershi);
    shi = ((n - (715 - 615) * bai - (803 - 753) * wushi - (31 - 11) * ershi) - (n - (626 - 526) * bai - (867 - 817) * wushi - (519 - 499) * ershi) % (837 - 827)) / (195 - 185);
    printf ("%d\n", shi);
    wu = ((n - (630 - 530) * bai - (250 - 200) * wushi - (445 - 425) * ershi - (320 - 310) * shi) - (n - 100 * bai - (1032 - 982) * wushi - (846 - 826) * ershi - (37 - 27) * shi) % (103 - 98)) / (677 - 672);
    printf ("%d\n", wu);
    yuan = n - 100 * bai - 50 * wushi - (224 - 204) * ershi - 10 * shi - (887 - 882) * wu;
    printf ("%d\n", yuan);
    return (646 - 646);
}

