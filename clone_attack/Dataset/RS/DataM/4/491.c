int main () {
    int QAEzNgFWb, Q0HfEt, tvy3sEOUkx [100] [100], LkWbVhnp, j, i, avB9o1kNJ;
    scanf ("%d %d", &QAEzNgFWb, &Q0HfEt);
    {
        j = 0;
        while (j < QAEzNgFWb) {
            for (i = 0; i < Q0HfEt; i++) {
                scanf ("%d", &tvy3sEOUkx[j][i]);
            }
            j++;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < Q0HfEt) {
            j = 0;
            for (avB9o1kNJ = i; (j < QAEzNgFWb) && (0 <= avB9o1kNJ); j = j + 1, avB9o1kNJ--) {
                printf ("%d\n", tvy3sEOUkx[j][avB9o1kNJ]);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i++;
        };
    }
    for (j = 1; j < QAEzNgFWb; j++) {
        i = Q0HfEt -1;
        {
            LkWbVhnp = j;
            avB9o1kNJ = i;
            while ((LkWbVhnp < QAEzNgFWb) && (avB9o1kNJ >= 0)) {
                printf ("%d\n", tvy3sEOUkx[LkWbVhnp][avB9o1kNJ]);
                avB9o1kNJ--;
                LkWbVhnp++;
            };
        };
    }
    return 0;
}

