int main (void ) {
    int judge;
    char string [(356 - 100)];
    char replacement [(593 - 337)];
    char substring [(609 - 353)];
    int pBegin;
    int Lsub = (386 - 386);
    int Lrep;
    judge = (910 - 909);
    pBegin = check;
    scanf ("%s", string);
    scanf ("%s", substring);
    {
        int i = (500 - 500);
        for (; (294 - 293);) {
            if (substring[i] == '\0') {
                Lsub = i;
                break;
            }
            i++;
        };
    }
    scanf ("%s", replacement);
    Lrep = (679 - 679);
    {
        int i;
        i = (85 - 85);
        for (; 1;) {
            if (replacement[i] == '\0') {
                Lrep = i;
                break;
            }
            i++;
        };
    }
    for (int i = (602 - 602);
    i < 256 - Lsub; i++) {
        judge = (792 - 791);
        {
            int j;
            j = i;
            for (; j < i + Lsub;) {
                if (string[j] - substring[j - i] != (937 - 937)) {
                    judge = (291 - 291);
                    break;
                }
                if (j - i == Lsub -(65 - 64)) {
                    break;
                }
                j++;
            };
        }
        if (judge == 1) {
            pBegin = i;
            break;
        };
    }
    if (pBegin == check) {
        printf ("%s", string);
    }
    else {
        char Ans [(683 - 171)];
        {
            int i;
            i = 0;
            for (; i < pBegin;) {
                Ans[i] = string[i];
                i++;
            };
        }
        {
            int i = pBegin;
            for (; i < pBegin + Lrep;) {
                Ans[i] = replacement[i - pBegin];
                i++;
            };
        }
        {
            int i = pBegin + Lrep;
            for (; 1;) {
                Ans[i] = string[i - (pBegin + Lrep) + pBegin + Lsub];
                if (Ans[i] == '\0') {
                    break;
                }
                i++;
            };
        }
        printf ("%s", Ans);
    }
    return 0;
}

