int main () {
    int PD9ejb;
    char aJmCf0 [510];
    gets (aJmCf0);
    int ymMwefsKGpcy, rFvgsN4YrtB [500] = {0}, ltG0ePwUBAJh = 0, i, r9wQyInj61;
    char mt7WcQfUs [500] [5];
    PD9ejb = strlen (aJmCf0);
    scanf ("%d\n", &ymMwefsKGpcy);
    for (i = 0; i <= PD9ejb -ymMwefsKGpcy; i++) {
        {
            r9wQyInj61 = 0;
            for (; r9wQyInj61 < ymMwefsKGpcy;) {
                mt7WcQfUs[i][r9wQyInj61] = aJmCf0[i + r9wQyInj61];
                r9wQyInj61++;
            }
        }
        mt7WcQfUs[i][ymMwefsKGpcy] = '\0';
    }
    {
        i = 0;
        for (; i <= PD9ejb -ymMwefsKGpcy;) {
            {
                r9wQyInj61 = i;
                while (r9wQyInj61 <= PD9ejb -ymMwefsKGpcy) {
                    if (!(0 != strcmp (mt7WcQfUs[i], mt7WcQfUs[r9wQyInj61])))
                        rFvgsN4YrtB[i]++;
                    r9wQyInj61++;
                }
            }
            if (rFvgsN4YrtB[i] > ltG0ePwUBAJh)
                ltG0ePwUBAJh = rFvgsN4YrtB[i];
            i++;
        }
    }
    if (ltG0ePwUBAJh == 1)
        ;
    else {
        printf ("%d\n", ltG0ePwUBAJh);
        {
            i = 0;
            while (i <= PD9ejb -ymMwefsKGpcy) {
                if (rFvgsN4YrtB[i] == ltG0ePwUBAJh)
                    puts (mt7WcQfUs[i]);
                i++;
            }
        }
    }
    return 0;
}

