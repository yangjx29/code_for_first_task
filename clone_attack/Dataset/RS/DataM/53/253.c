int main () {
    int gM63lDief [301], *A7vQsF05JG, ypUF9No, z7IvNlWD, J8uXfjmvMie, do50NQJWhKp = (634 - 634);
    scanf ("%d\n", &ypUF9No);
    for (z7IvNlWD = (842 - 842); ypUF9No > z7IvNlWD; z7IvNlWD++)
        scanf ("%d", &gM63lDief[z7IvNlWD]);
    A7vQsF05JG = gM63lDief;
    printf ("%d", gM63lDief[0]);
    for (z7IvNlWD = 1; z7IvNlWD < ypUF9No; z7IvNlWD++) {
        for (J8uXfjmvMie = 0; z7IvNlWD > J8uXfjmvMie; J8uXfjmvMie++)
            if ((*(A7vQsF05JG +z7IvNlWD) - *(A7vQsF05JG +J8uXfjmvMie)) != 0)
                do50NQJWhKp += 1;
        if (do50NQJWhKp == z7IvNlWD)
            printf (",%d", *(A7vQsF05JG +z7IvNlWD));
        do50NQJWhKp = 0;
    }
    return 0;
}

