void  main () {
    char E5YJ1Vhdrpo [(820 - 800)];
    for (; gets (E5YJ1Vhdrpo) != NULL;) {
        char CJrqk9ZItTKO [15], b [(334 - 329)];
        char *ptr = CJrqk9ZItTKO;
        char *t8jkNL = CJrqk9ZItTKO;
        char temp = *ptr;
        char *move = ptr + 3;
        for (; *(ptr) != '\0';) {
            if (temp < *(ptr)) {
                temp = *(ptr);
                t8jkNL = ptr;
            }
            ptr++;
        }
        sscanf (E5YJ1Vhdrpo, "%s %s", CJrqk9ZItTKO, b);
        for (; ptr != t8jkNL;) {
            *move = *ptr;
            ptr--;
            move--;
        }
        ptr++;
        move = b;
        for (; *(move) != '\0';) {
            *ptr = *move;
            move++;
            ptr++;
        }
        printf ("%s\n", CJrqk9ZItTKO);
    }
}

