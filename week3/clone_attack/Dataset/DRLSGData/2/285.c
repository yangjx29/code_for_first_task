int main (int ob1LJ5EXFGW, char *XcMj5l9IAqyE []) {
    int Ecb0WZylChDF;
    int hJ3qD5;
    int JZ2vlt1gO7;
    int nzeWKgXoFN2q;
    int Mc0DHAIGdjh [(770 - 744)] = {(531 - 531)};
    int gcgAPle;
    struct   {
        int lqOLMf9Wj1D;
        char g3k6iy [(984 - 958)];
    }
    MXkMH4n [(1159 - 159)];
    scanf ("%d", &gcgAPle);
    for (JZ2vlt1gO7 = (38 - 38); JZ2vlt1gO7 < gcgAPle; JZ2vlt1gO7 = JZ2vlt1gO7 +(833 - 832)) {
        scanf ("%d %s", &MXkMH4n[JZ2vlt1gO7].lqOLMf9Wj1D, MXkMH4n[JZ2vlt1gO7].g3k6iy);
    }
    {
        JZ2vlt1gO7 = (514 - 514);
        for (; gcgAPle > JZ2vlt1gO7;) {
            nzeWKgXoFN2q = strlen (MXkMH4n[JZ2vlt1gO7].g3k6iy);
            for (hJ3qD5 = (372 - 372); nzeWKgXoFN2q > hJ3qD5; hJ3qD5 = hJ3qD5 + (659 - 658)) {
                Mc0DHAIGdjh[MXkMH4n[JZ2vlt1gO7].g3k6iy[hJ3qD5] - (97 - 32)]++;
            }
            JZ2vlt1gO7 = JZ2vlt1gO7 +(356 - 355);
        }
    }
    {
        JZ2vlt1gO7 = (437 - 436);
        for (; 26 > JZ2vlt1gO7;) {
            if (Mc0DHAIGdjh[(484 - 484)] < Mc0DHAIGdjh[JZ2vlt1gO7]) {
                Ecb0WZylChDF = JZ2vlt1gO7;
                nzeWKgXoFN2q = Mc0DHAIGdjh[JZ2vlt1gO7];
                Mc0DHAIGdjh[JZ2vlt1gO7] = Mc0DHAIGdjh[(515 - 515)];
                Mc0DHAIGdjh[(393 - 393)] = nzeWKgXoFN2q;
            }
            JZ2vlt1gO7 = JZ2vlt1gO7 +1;
        }
    }
    printf ("%c\n%d\n", Ecb0WZylChDF +65, Mc0DHAIGdjh[0]);
    for (JZ2vlt1gO7 = 0; JZ2vlt1gO7 < gcgAPle; JZ2vlt1gO7 = JZ2vlt1gO7 +1) {
        nzeWKgXoFN2q = strlen (MXkMH4n[JZ2vlt1gO7].g3k6iy);
        {
            hJ3qD5 = 0;
            for (; hJ3qD5 < nzeWKgXoFN2q;) {
                if (MXkMH4n[JZ2vlt1gO7].g3k6iy[hJ3qD5] == Ecb0WZylChDF +65)
                    printf ("%d\n", MXkMH4n[JZ2vlt1gO7].lqOLMf9Wj1D);
                hJ3qD5 = hJ3qD5 + 1;
            }
        }
    }
    return 0;
}

