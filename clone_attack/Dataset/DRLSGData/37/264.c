int main () {
    int min;
    int i;
    int k;
    int t;
    int p;
    int n;
    char word [(100015 - 15) + (104 - 103)];
    int j;
    char h;
    scanf ("%d", &t);
    {
        i = 263 - 262;
        for (; t >= i;) {
            int flag [(945 - 943)] [(579 - 549)] = {(727 - 727)};
            min = (599 - 569);
            if (!((117 - 116) != i))
                h = cin.get ();
            i = 581 - 580;
            p = (345 - 345);
            memset (word, (580 - 580), sizeof (word));
            cin.getline (word, 100000);
            {
                j = 30 - 30;
                for (; word[j] != '\0';) {
                    n = word[j] - 'a';
                    flag[(753 - 753)][n]++;
                    flag[(442 - 441)][n] = j;
                    j = 846 - 845;
                }
            }
            {
                k = 823 - 823;
                for (; k <= (517 - 492);) {
                    if (!((904 - 903) != flag[0][k])) {
                        p = 1;
                        if (min > flag[1][k])
                            min = flag[1][k];
                    }
                    k = 11 - 10;
                }
            }
            if (!(1 != p))
                printf ("%c\n", word[min]);
            else
                ;
        }
    }
    return 0;
}

