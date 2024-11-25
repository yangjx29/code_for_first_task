int DA19NXOIhUsx [MAX], tj [MAX];
int fi9jsPSgYNk8;

int DuUOCG52Eke (const  void  *a, const  void  *b) {
    return *((int *) b) - *((int *) a);
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
}

int main () {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (fi9jsPSgYNk8 != 0) {
            int tje;
            int qws;
            int S7MjCkw;
            int tjs;
            tje = fi9jsPSgYNk8 - 1;
            qws = 0;
            S7MjCkw = fi9jsPSgYNk8 - 1;
            int lsLY5eI8k2 = 0, lose = qws;
            for (int i = 0;
            fi9jsPSgYNk8 > i; i = i + 1)
                scanf ("%d", &tj[i]);
            {
                int i = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (fi9jsPSgYNk8 > i) {
                    scanf ("%d", &DA19NXOIhUsx[i]);
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
                    i = i + 1;
                };
            }
            qsort (DA19NXOIhUsx, fi9jsPSgYNk8, sizeof (int), DuUOCG52Eke);
            qsort (tj, fi9jsPSgYNk8, sizeof (int), DuUOCG52Eke);
            {
                tjs = 0;
                while (DA19NXOIhUsx[qws] > tj[tjs]) {
                    qws = qws + 1;
                    tje = tje - 1;
                };
            }
            for (; tjs <= tje;) {
                if (tj[tjs] > DA19NXOIhUsx[qws])
                    lsLY5eI8k2++, tjs++, qws = qws + 1;
                else {
                    if (tj[tjs] < DA19NXOIhUsx[qws])
                        lose++, tje--, qws = qws + 1;
                    else if (tj[tje] > DA19NXOIhUsx[S7MjCkw])
                        lsLY5eI8k2++, tje--, S7MjCkw = S7MjCkw -1;
                    else if (tj[tje] < DA19NXOIhUsx[qws])
                        lose++, tje--, qws = qws + 1;
                    else
                        tje--, qws++;
                };
            }
            printf ("%d\n", (lsLY5eI8k2 - lose) * 200);
        };
    };
}

