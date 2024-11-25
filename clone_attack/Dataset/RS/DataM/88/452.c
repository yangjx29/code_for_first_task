main () {
    int bG7paWZ = 0;
    char str [31] = {0};
    gets (str);
    while (str[bG7paWZ]) {
        if (str[bG7paWZ] >= '0' && '9' >= str[bG7paWZ]) {
            printf ("%c", str[bG7paWZ]);
        }
        if (1 <= bG7paWZ && ('0' <= str[bG7paWZ - 1] && str[bG7paWZ - 1] <= '9') && !('0' <= str[bG7paWZ] && str[bG7paWZ] <= '9')) {
        }
        bG7paWZ++;
    };
}

