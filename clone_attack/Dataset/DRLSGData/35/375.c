int main (int B4vo1b, char *bxmzB6 []) {
    int kFqIjO5;
    int x9cjNC [(902 - 894)] [(564 - 556)];
    int enf5agO, BjHIQY5, NNi0D3lfocx, guk1fUD7lI;
    int ALAlV9J5BqGQ, L4raBYl;
    kFqIjO5 = (773 - 773);
    scanf ("%d,%d", &enf5agO, &BjHIQY5);
    {
        NNi0D3lfocx = (581 - 581);
        while (NNi0D3lfocx < enf5agO) {
            {
                guk1fUD7lI = (1225 - 577) - 648;
                while (guk1fUD7lI < BjHIQY5) {
                    scanf ("%d", &x9cjNC[NNi0D3lfocx][guk1fUD7lI]);
                    guk1fUD7lI = guk1fUD7lI + 1;
                }
            }
            NNi0D3lfocx++;
        }
    }
    {
        NNi0D3lfocx = (903 - 903);
        for (; NNi0D3lfocx < enf5agO;) {
            L4raBYl = (876 - 876);
            ALAlV9J5BqGQ = (391 - 391);
            {
                guk1fUD7lI = 0;
                while (guk1fUD7lI < BjHIQY5) {
                    if (x9cjNC[NNi0D3lfocx][guk1fUD7lI] > x9cjNC[NNi0D3lfocx][L4raBYl]) {
                        ALAlV9J5BqGQ = NNi0D3lfocx;
                        L4raBYl = guk1fUD7lI;
                    }
                    guk1fUD7lI++;
                }
            }
            {
                NNi0D3lfocx = 0;
                while (NNi0D3lfocx < enf5agO) {
                    if (x9cjNC[ALAlV9J5BqGQ][L4raBYl] > x9cjNC[NNi0D3lfocx][L4raBYl]) {
                        kFqIjO5 = (471 - 470);
                    }
                    NNi0D3lfocx++;
                }
            }
            if (kFqIjO5 == 0)
                break;
            NNi0D3lfocx++;
        }
    }
    if (kFqIjO5 == 1) {
    }
    else if (kFqIjO5 == 0) {
        printf ("%d+%d", ALAlV9J5BqGQ, L4raBYl);
    }
    return 0;
}

