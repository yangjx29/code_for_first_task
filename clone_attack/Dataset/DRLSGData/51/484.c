int main () {
    int rufiyDABXlxe;
    char X71GSP3OJ [501];
    int j;
    int WSxVOPs3IL5;
    int len;
    int emXl15Jv7jE;
    int W7nr6yKzDiM;
    int h;
    gets (X71GSP3OJ);
    gets (X71GSP3OJ);
    int n;
    int EwtjvEnPmFNJ;
    int S71Az4nLU9Hb;
    int OY7Fh3rzqLw [500];
    h = 0;
    emXl15Jv7jE = (733 - 733);
    scanf ("%d", &n);
    S71Az4nLU9Hb = (224 - 224);
    len = (730 - 730);
    W7nr6yKzDiM = 0;
    len = strlen (X71GSP3OJ);
    WSxVOPs3IL5 = (866 - 866);
    for (rufiyDABXlxe = 0; rufiyDABXlxe < len - n; rufiyDABXlxe++) {
        emXl15Jv7jE = 0;
        {
            j = rufiyDABXlxe + (718 - 717);
            for (; j <= len - n;) {
                WSxVOPs3IL5 = 0;
                {
                    EwtjvEnPmFNJ = 0;
                    while (EwtjvEnPmFNJ < n) {
                        if (X71GSP3OJ[rufiyDABXlxe + EwtjvEnPmFNJ] == X71GSP3OJ[j + EwtjvEnPmFNJ]) {
                            WSxVOPs3IL5 = WSxVOPs3IL5++;
                        }
                        EwtjvEnPmFNJ++;
                    }
                }
                if (WSxVOPs3IL5 == n) {
                    emXl15Jv7jE = emXl15Jv7jE++;
                }
                j++;
            }
        }
        OY7Fh3rzqLw[rufiyDABXlxe] = emXl15Jv7jE;
    }
    {
        rufiyDABXlxe = 0;
        for (; rufiyDABXlxe < len - n;) {
            W7nr6yKzDiM = 0;
            for (j = 0; len - n > j; j++) {
                if (OY7Fh3rzqLw[rufiyDABXlxe] >= OY7Fh3rzqLw[j]) {
                    W7nr6yKzDiM = W7nr6yKzDiM++;
                }
            }
            if (!(len - n != W7nr6yKzDiM)) {
                h = OY7Fh3rzqLw[rufiyDABXlxe] + 1;
                break;
            }
            rufiyDABXlxe++;
        }
    }
    if (h <= 1) {
    }
    else {
        for (rufiyDABXlxe = 0; rufiyDABXlxe < len - n; rufiyDABXlxe++) {
            W7nr6yKzDiM = 0;
            for (j = 0; j < len - n; j++) {
                if (OY7Fh3rzqLw[rufiyDABXlxe] >= OY7Fh3rzqLw[j]) {
                    W7nr6yKzDiM = W7nr6yKzDiM++;
                }
            }
            if (W7nr6yKzDiM == len - n) {
                h = OY7Fh3rzqLw[rufiyDABXlxe] + 1;
                break;
            }
        }
        printf ("%d\n", h);
        {
            rufiyDABXlxe = 0;
            for (; rufiyDABXlxe < len - n;) {
                W7nr6yKzDiM = 0;
                for (j = 0; j < len - n; j++) {
                    if (OY7Fh3rzqLw[rufiyDABXlxe] >= OY7Fh3rzqLw[j]) {
                        W7nr6yKzDiM = W7nr6yKzDiM++;
                    }
                }
                if (W7nr6yKzDiM == len - n) {
                    EwtjvEnPmFNJ = rufiyDABXlxe;
                    while (EwtjvEnPmFNJ < rufiyDABXlxe + n) {
                        printf ("%c", X71GSP3OJ[EwtjvEnPmFNJ]);
                        EwtjvEnPmFNJ++;
                    }
                }
                rufiyDABXlxe++;
            }
        }
        if (W7nr6yKzDiM == len - n) {
            if (h == 1) {
                S71Az4nLU9Hb = len - n;
                while (S71Az4nLU9Hb < len) {
                    printf ("%c", X71GSP3OJ[S71Az4nLU9Hb]);
                    S71Az4nLU9Hb++;
                }
            }
        }
    }
    return 0;
}

