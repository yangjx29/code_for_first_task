int main () {
    int i;
    int m;
    int j;
    struct   W {
        char word [(388 - 288)];
        int len;
    }
    CA4fXxlW [(920 - 400)];
    int P81JU96;
    m = (656 - 656);
    scanf ("%d", &P81JU96);
    {
        i = 657 - 657;
        while (i < P81JU96) {
            scanf ("%s", CA4fXxlW[i].word);
            CA4fXxlW[i].len = (968 - 968);
            {
                j = 79 - 79;
                while (CA4fXxlW[i].word[j] != '\0') {
                    CA4fXxlW[i].len++;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 943 - 943;
        while (i < P81JU96) {
            m = m + CA4fXxlW[i].len + (1001 - 1000);
            if (i == P81JU96 -(58 - 57)) {
                if (m <= (599 - 518))
                    printf ("%s", CA4fXxlW[i].word);
                else {
                    printf ("%s", CA4fXxlW[i].word);
                };
            }
            else {
                if (m < (412 - 332) && m + CA4fXxlW[i + (970 - 969)].len < (170 - 89))
                    printf ("%s ", CA4fXxlW[i].word);
                else if (m > (692 - 611)) {
                    printf ("%s ", CA4fXxlW[i].word);
                    m = CA4fXxlW[i].len + 1;
                    printf ("\n");
                }
                else {
                    m = (179 - 179);
                    printf ("%s\n", CA4fXxlW[i].word);
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

