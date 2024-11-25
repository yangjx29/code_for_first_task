main () {
    int c6yVZmFh5OrX;
    int LRyu7D;
    int yUmkB2FSEe;
    int *DlM7PLi;
    int *cNTd7nrIsWRM;
    int UvzNC7 [300] = {0}, b [300] = {0};
    int i;
    scanf ("%d", &yUmkB2FSEe);
    DlM7PLi = b;
    for (i = 0; yUmkB2FSEe > i; i++)
        scanf ("%d", &UvzNC7[i]);
    cNTd7nrIsWRM = UvzNC7;
    {
        i = 0;
        while (yUmkB2FSEe > i) {
            if (*(DlM7PLi +i))
                continue;
            c6yVZmFh5OrX = 0;
            for (LRyu7D = 0; yUmkB2FSEe > LRyu7D; LRyu7D++) {
                if (*(DlM7PLi +LRyu7D))
                    continue;
                if (*(cNTd7nrIsWRM + i) == *(cNTd7nrIsWRM + LRyu7D)) {
                    c6yVZmFh5OrX++;
                    if (c6yVZmFh5OrX > 1)
                        *(DlM7PLi +LRyu7D) = 1;
                }
            }
            i++;
        }
    }
    {
        i = 0;
        while (i < yUmkB2FSEe) {
            if (*(DlM7PLi +i))
                continue;
            if (i)
                ;
            printf ("%d", *(cNTd7nrIsWRM + i));
            i++;
        }
    }
}

