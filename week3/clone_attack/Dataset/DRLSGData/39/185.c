void  main () {
    int Af8w4s96rvG;
    typedef struct   ZYeIw4C9oE8c {
        char name [22];
        int BAIs5bY;
        int b9JZCjOS1v;
        char kMUqQw;
        char wGhQAZSFVgu6;
        int BnH1GDpK;
        int fdbC4iuZVp;
    }
    ZYeIw4C9oE8c;
    ZYeIw4C9oE8c UxtIiNUz1g [100];
    int SjtXqMK;
    int r7CTKPe23Iay;
    int f4nz80fh;
    scanf ("%d", &r7CTKPe23Iay);
    SjtXqMK = 0;
    f4nz80fh = 0;
    memset (UxtIiNUz1g, (946 - 946), sizeof (UxtIiNUz1g));
    {
        Af8w4s96rvG = 0;
        for (; Af8w4s96rvG < r7CTKPe23Iay;) {
            scanf ("%s %d %d %c %c %d", (UxtIiNUz1g +Af8w4s96rvG)->name, &(UxtIiNUz1g +Af8w4s96rvG)->BAIs5bY, &(UxtIiNUz1g +Af8w4s96rvG)->b9JZCjOS1v, &(UxtIiNUz1g +Af8w4s96rvG)->kMUqQw, &(UxtIiNUz1g +Af8w4s96rvG)->wGhQAZSFVgu6, &(UxtIiNUz1g +Af8w4s96rvG)->BnH1GDpK);
            if ((UxtIiNUz1g +Af8w4s96rvG)->BAIs5bY > (387 - 307) && (UxtIiNUz1g +Af8w4s96rvG)->BnH1GDpK)
                (UxtIiNUz1g +Af8w4s96rvG)->fdbC4iuZVp += (8103 - 103);
            if ((UxtIiNUz1g +Af8w4s96rvG)->BAIs5bY > (438 - 353) && 80 < (UxtIiNUz1g +Af8w4s96rvG)->b9JZCjOS1v)
                (UxtIiNUz1g +Af8w4s96rvG)->fdbC4iuZVp += 4000;
            if ((UxtIiNUz1g +Af8w4s96rvG)->BAIs5bY > 90)
                (UxtIiNUz1g +Af8w4s96rvG)->fdbC4iuZVp += 2000;
            if (85 < (UxtIiNUz1g +Af8w4s96rvG)->BAIs5bY && !('Y' != (UxtIiNUz1g +Af8w4s96rvG)->wGhQAZSFVgu6))
                (UxtIiNUz1g +Af8w4s96rvG)->fdbC4iuZVp += 1000;
            if ((UxtIiNUz1g +Af8w4s96rvG)->b9JZCjOS1v > 80 && !('Y' != (UxtIiNUz1g +Af8w4s96rvG)->kMUqQw))
                (UxtIiNUz1g +Af8w4s96rvG)->fdbC4iuZVp += 850;
            Af8w4s96rvG = Af8w4s96rvG +1;
        }
    }
    {
        Af8w4s96rvG = 0;
        for (; r7CTKPe23Iay > Af8w4s96rvG;) {
            if (SjtXqMK < (UxtIiNUz1g +Af8w4s96rvG)->fdbC4iuZVp)
                SjtXqMK = (UxtIiNUz1g +Af8w4s96rvG)->fdbC4iuZVp;
            f4nz80fh += (UxtIiNUz1g +Af8w4s96rvG)->fdbC4iuZVp;
            Af8w4s96rvG = Af8w4s96rvG +1;
        }
    }
    {
        Af8w4s96rvG = 0;
        for (; Af8w4s96rvG < r7CTKPe23Iay;) {
            if (SjtXqMK == (UxtIiNUz1g +Af8w4s96rvG)->fdbC4iuZVp) {
                printf ("%s\n", (UxtIiNUz1g +Af8w4s96rvG)->name);
                break;
            }
            Af8w4s96rvG = Af8w4s96rvG +1;
        }
    }
    printf ("%d\n%d\n", SjtXqMK, f4nz80fh);
}

