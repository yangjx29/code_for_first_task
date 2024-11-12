int main () {
    int n;
    int min;
    int p;
    int RvLupEd;
    int i;
    int GvXiDGZP;
    int tPr29sSt7Kc;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    char word [(100623 - 623) + (855 - 854)];
    char JR6LcNY8qk;
    scanf ("%d", &RvLupEd);
    for (i = (636 - 635); RvLupEd >= i; i++) {
        int OvpUtgymIV [2] [30] = {(286 - 286)};
        min = 30;
        p = (563 - 563);
        if (!(1 != i))
            JR6LcNY8qk = cin.get ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        memset (word, (715 - 715), sizeof (word));
        cin.getline (word, 100000);
        for (GvXiDGZP = (248 - 248); word[GvXiDGZP] != '\0'; GvXiDGZP++) {
            n = word[GvXiDGZP] - 'a';
            OvpUtgymIV[(522 - 522)][n]++;
            OvpUtgymIV[1][n] = GvXiDGZP;
        }
        for (tPr29sSt7Kc = 0; tPr29sSt7Kc <= 25; tPr29sSt7Kc++)
            if (OvpUtgymIV[0][tPr29sSt7Kc] == 1) {
                if (min > OvpUtgymIV[1][tPr29sSt7Kc])
                    min = OvpUtgymIV[1][tPr29sSt7Kc];
                p = 1;
            }
        if (p == 1)
            printf ("%c\n", word[min]);
        else
            printf ("no\n");
    }
    return 0;
}

