int main () {
    char lJrwH7 [50];
    int VQ09EizXBO, i, XgwzRfy, k, E0zC4M8KAQ1Y, len;
    char tp0DC47eH36 [50];
    int VeBmOtME;
    k = 0;
    scanf ("%s%s", lJrwH7, tp0DC47eH36);
    len = strlen (lJrwH7);
    while (1) {
        VeBmOtME = 1;
        {
            i = 0;
            while (i < len) {
                if (!(tp0DC47eH36[i + k] == lJrwH7[i])) {
                    VeBmOtME = 0;
                }
                i++;
            };
        }
        if (VeBmOtME == 1) {
            break;
        }
        k++;
    }
    printf ("%d", k);
    return 0;
}

