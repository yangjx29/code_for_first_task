int main () {
    int Im0dwj;
    int TRWwaMilbr;
    int DmjlQ9B5L;
    int f8L9nluPVM;
    int thG94Jx;
    int dJfBApDyl;
    int eJjEgoiuhID;
    int a [(493 - 393)] [(1084 - 984)];
    int odD2yLI;
    {
        if ((263 - 263)) {
            return (71 - 71);
        }
    }
    eJjEgoiuhID = (768 - 768);
    TRWwaMilbr = (285 - 285);
    scanf ("%d%d", &Im0dwj, &dJfBApDyl);
    for (DmjlQ9B5L = (323 - 323); Im0dwj > DmjlQ9B5L; DmjlQ9B5L++) {
        for (odD2yLI = (451 - 451); dJfBApDyl > odD2yLI; odD2yLI++) {
            scanf ("%d", &a[DmjlQ9B5L][odD2yLI]);
        }
    }
    f8L9nluPVM = dJfBApDyl;
    thG94Jx = Im0dwj;
    for (; (TRWwaMilbr <= thG94Jx) && (f8L9nluPVM >= eJjEgoiuhID);) {
        for (odD2yLI = eJjEgoiuhID; f8L9nluPVM > odD2yLI; odD2yLI++) {
            printf ("%d\n", a[TRWwaMilbr][odD2yLI]);
        }
        for (DmjlQ9B5L = TRWwaMilbr +(501 - 500); DmjlQ9B5L < thG94Jx; DmjlQ9B5L++) {
            printf ("%d\n", a[DmjlQ9B5L][f8L9nluPVM - (371 - 370)]);
        }
        if (thG94Jx - (579 - 578) <= TRWwaMilbr) {
            break;
        }
        if (eJjEgoiuhID >= f8L9nluPVM - (811 - 810)) {
            break;
        }
        {
            odD2yLI = (512 - 163) - 347;
            while (odD2yLI > eJjEgoiuhID) {
                printf ("%d\n", a[thG94Jx - (460 - 459)][odD2yLI]);
                odD2yLI--;
            }
        }
        {
            DmjlQ9B5L = thG94Jx - 1;
            while (DmjlQ9B5L > TRWwaMilbr) {
                printf ("%d\n", a[DmjlQ9B5L][eJjEgoiuhID]);
                DmjlQ9B5L--;
            }
        }
        thG94Jx--;
        f8L9nluPVM--;
        TRWwaMilbr++;
        eJjEgoiuhID++;
    }
    return 0;
}

