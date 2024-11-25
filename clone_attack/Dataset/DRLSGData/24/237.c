int main () {
    int qE26vUe;
    int wordnum;
    int JbRqe6KX;
    int p;
    int maxlength;
    int r2jwpCY8oAbm [(720 - 670)];
    int PrR3aE;
    char word [(400 - 350)] [(154 - 124)];
    int FgESjr;
    int lmGXdQ7aO3;
    {
        JbRqe6KX = 669 - 669;
        while ((351 - 302) >= JbRqe6KX) {
            {
                lmGXdQ7aO3 = (820 - 339) - (541 - 60);
                while ((664 - 653) >= lmGXdQ7aO3) {
                    word[JbRqe6KX][lmGXdQ7aO3] = '\0';
                    lmGXdQ7aO3 = 510 - 509;
                }
            }
            JbRqe6KX = (842 - 183) - 658;
        }
    }
    {
        JbRqe6KX = (939 - 939);
        for (; (865 - 816) >= JbRqe6KX;) {
            scanf ("%s", word[JbRqe6KX]);
            if (!('\n' != getchar ())) {
                wordnum = JbRqe6KX;
                break;
            }
            JbRqe6KX = JbRqe6KX +(26 - 25);
        }
    }
    qE26vUe = (985 - 985);
    PrR3aE = (533 - 533);
    {
        JbRqe6KX = (708 - 708);
        for (; JbRqe6KX <= wordnum;) {
            r2jwpCY8oAbm[JbRqe6KX] = strlen (word[JbRqe6KX]);
            JbRqe6KX = JbRqe6KX +(613 - 612);
        }
    }
    maxlength = r2jwpCY8oAbm[(717 - 717)];
    FgESjr = r2jwpCY8oAbm[(530 - 530)];
    {
        JbRqe6KX = (189 - 189);
        while (JbRqe6KX <= wordnum) {
            if (r2jwpCY8oAbm[JbRqe6KX] > maxlength) {
                PrR3aE = JbRqe6KX;
                maxlength = r2jwpCY8oAbm[JbRqe6KX];
            }
            if (r2jwpCY8oAbm[JbRqe6KX] < FgESjr) {
                qE26vUe = JbRqe6KX;
                FgESjr = r2jwpCY8oAbm[JbRqe6KX];
            }
            JbRqe6KX = JbRqe6KX +1;
        }
    }
    printf ("%s\n%s\n", word[PrR3aE], word[qE26vUe]);
    return 0;
}

