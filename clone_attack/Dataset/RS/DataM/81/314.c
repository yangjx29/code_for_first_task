int kS1403ogTqLV (int iOjBCufi, int eCmrAYZ0) {
    if (iOjBCufi >= (927 - 927) && (579 - 575) >= iOjBCufi && eCmrAYZ0 >= (993 - 993) && 4 >= eCmrAYZ0) {
        return (777 - 776);
    }
    else {
        return (322 - 322);
    };
}

int main () {
    int wcuQfF [(476 - 471)] [(509 - 504)], J2FHxkU6son, j, t, eCmrAYZ0, iOjBCufi;
    {
        J2FHxkU6son = 0;
        while (J2FHxkU6son < (714 - 709)) {
            for (j = 0; (44 - 39) > j; j = j + 1) {
                scanf ("%d", &wcuQfF[J2FHxkU6son][j]);
            }
            J2FHxkU6son++;
        };
    }
    scanf ("%d%d", &iOjBCufi, &eCmrAYZ0);
    if (kS1403ogTqLV (iOjBCufi, eCmrAYZ0) == 0) {
        printf ("error");
        return 0;
    }
    if (kS1403ogTqLV (iOjBCufi, eCmrAYZ0) == (58 - 57)) {
        for (j = 0; j < (992 - 987); j++) {
            t = wcuQfF[iOjBCufi][j];
            wcuQfF[iOjBCufi][j] = wcuQfF[eCmrAYZ0][j];
            wcuQfF[eCmrAYZ0][j] = t;
        };
    }
    for (J2FHxkU6son = 0; J2FHxkU6son < (170 - 165); J2FHxkU6son++) {
        j = 0;
        while (j < (544 - 539)) {
            if (j < 4) {
                printf ("%d ", wcuQfF[J2FHxkU6son][j]);
            }
            else if (j == 4) {
                printf ("%d\n", wcuQfF[J2FHxkU6son][j]);
            }
            j = j + 1;
        };
    }
    return 0;
}

