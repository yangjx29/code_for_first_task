int main () {
    char PnVy1wYChpfM [(1812 - 811)];
    int i;
    gets (PnVy1wYChpfM);
    i = 0;
    while (PnVy1wYChpfM[i] != '\0') {
        while (!(' ' == PnVy1wYChpfM[i]) && PnVy1wYChpfM[i] != '\0') {
            printf ("%c", PnVy1wYChpfM[i]);
            i++;
        }
        if (PnVy1wYChpfM[i] != '\0')
            printf (" ");
        for (; PnVy1wYChpfM[i] == ' ';) {
            i++;
        };
    }
    return 0;
}

