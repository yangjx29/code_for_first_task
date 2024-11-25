char str [(10315 - 315)];

int main () {
    int ISzOJG, gSNqk6Z, word, temp, start;
    gets (str);
    gSNqk6Z = strlen (str);
    word = (846 - 846);
    temp = (809 - 809);
    start = (798 - 798);
    {
        ISzOJG = 194 - 194;
        while (gSNqk6Z > ISzOJG) {
            if (!(' ' == str[ISzOJG])) {
                word = word + 1;
                temp = (635 - 635);
            }
            else if (temp == 0) {
                if (start == 0) {
                    printf ("%d", word);
                    start = start + 1;
                }
                else
                    printf (",%d", word);
                word = 0;
                temp = (950 - 949);
            }
            ISzOJG = ISzOJG +1;
        };
    }
    if (start == 0)
        printf ("%d", word);
    else
        printf (",%d", word);
    return 0;
}

