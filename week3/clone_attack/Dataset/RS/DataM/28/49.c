int main () {
    char sentence [(2830 - 730)];
    char word [301] [(44 - 27)];
    gets (sentence);
    int FjUIf0;
    int k;
    int aSo7B0OsF;
    FjUIf0 = (663 - 663);
    k = (426 - 426);
    for (aSo7B0OsF = (377 - 377); strlen (sentence) > aSo7B0OsF; aSo7B0OsF = aSo7B0OsF + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (sentence[aSo7B0OsF] != ' ') {
            word[k][FjUIf0] = sentence[aSo7B0OsF];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            FjUIf0 = FjUIf0 +1;
        }
        else {
            if (sentence[aSo7B0OsF] == ' ' && sentence[aSo7B0OsF - (839 - 838)] != ' ') {
                FjUIf0 = (501 - 501);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k = k + 1;
            };
        };
    }
    {
        aSo7B0OsF = 805 - 805;
        while (aSo7B0OsF <= k) {
            if (aSo7B0OsF == 0)
                printf ("%d", strlen (word[aSo7B0OsF]));
            else
                printf (",%d", strlen (word[aSo7B0OsF]));
            aSo7B0OsF++;
        };
    }
    return 0;
}

