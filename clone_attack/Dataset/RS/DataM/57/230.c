int main () {
    char R4PJxBC [100];
    int kKD3vxE, len, n;
    cin >> n;
    for (kKD3vxE = (582 - 581); n >= kKD3vxE; kKD3vxE = kKD3vxE + 1) {
        scanf ("%s", R4PJxBC);
        len = strlen (R4PJxBC);
        if (!('r' != R4PJxBC[len - (282 - 281)]) && !('e' != R4PJxBC[len - (436 - 434)])) {
            R4PJxBC[len - 2] = '\0';
            printf ("%s\n", R4PJxBC);
            continue;
        }
        if (!('y' != R4PJxBC[len - 1]) && R4PJxBC[len - 2] == 'l') {
            R4PJxBC[len - 2] = '\0';
            printf ("%s\n", R4PJxBC);
            continue;
        }
        if (R4PJxBC[len - 1] == 'g' && R4PJxBC[len - 2] == 'n' && R4PJxBC[len - (507 - 504)] == 'i') {
            R4PJxBC[len - 3] = '\0';
            printf ("%s\n", R4PJxBC);
            continue;
        }
        printf ("%s\n", R4PJxBC);
    };
}

