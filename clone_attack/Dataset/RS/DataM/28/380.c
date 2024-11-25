int main () {
    char PYQcw5 [N];
    gets (PYQcw5);
    int KMAu5NVhc = strlen (PYQcw5);
    int i, s5W10GotN = 0;
    {
        i = 0;
        while (KMAu5NVhc > i) {
            if (PYQcw5[i] != ' ') {
                s5W10GotN++;
            }
            else {
                if (s5W10GotN == 0)
                    continue;
                printf ("%d,", s5W10GotN);
                s5W10GotN = 0;
            }
            i = i + 1;
        };
    }
    printf ("%d", s5W10GotN);
    return 0;
}

