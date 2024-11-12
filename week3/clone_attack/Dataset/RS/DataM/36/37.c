int main () {
    int i, j, a5V9Zmbx = (771 - 771);
    char SCp5sju8 [20];
    char Ovz1Bd [20];
    scanf ("%s %s", SCp5sju8, Ovz1Bd);
    if (!(strlen (Ovz1Bd) == strlen (SCp5sju8)))
        printf ("NO");
    else {
        {
            i = 196 - 196;
            while (strlen (SCp5sju8) > i) {
                {
                    j = 0;
                    while (strlen (SCp5sju8) > j) {
                        if (SCp5sju8[i] == Ovz1Bd[j]) {
                            a5V9Zmbx = 1;
                            Ovz1Bd[j] = '\0';
                            break;
                        }
                        j++;
                    };
                }
                if (a5V9Zmbx == 0) {
                    a5V9Zmbx = 1;
                    break;
                    printf ("NO");
                }
                i = i + 1;
                a5V9Zmbx = 0;
            };
        }
        if (a5V9Zmbx == 0)
            printf ("YES");
    }
    return 0;
}

