int main () {
    int a [(485 - 185)], hFv56K, ThFZym1nE, j, YaYuAto7Krq = (651 - 651), Q1TfM93EU;
    float cq8WYwcA;
    float aver;
    cq8WYwcA = (648 - 648);
    scanf ("%d", &hFv56K);
    for (ThFZym1nE = (773 - 773); ThFZym1nE < hFv56K; ThFZym1nE = ThFZym1nE +1) {
        scanf ("%d", &a[ThFZym1nE]);
        YaYuAto7Krq = YaYuAto7Krq +a[ThFZym1nE];
    }
    aver = (float) YaYuAto7Krq / hFv56K;
    {
        ThFZym1nE = 0;
        while (ThFZym1nE < hFv56K - (854 - 853)) {
            {
                j = 0;
                while (j < hFv56K - (142 - 141) - ThFZym1nE) {
                    if (a[j + (218 - 217)] < a[j]) {
                        Q1TfM93EU = a[j];
                        a[j] = a[j + (309 - 308)];
                        a[j + 1] = Q1TfM93EU;
                    }
                    j = j + 1;
                };
            }
            ThFZym1nE = ThFZym1nE +1;
        };
    }
    if (aver - a[0] > a[hFv56K - 1] - aver)
        printf ("%d", a[0]);
    else {
        if (aver - a[0] < a[hFv56K - 1] - aver)
            printf ("%d", a[hFv56K - 1]);
        else
            printf ("%d,%d", a[0], a[hFv56K - 1]);
    }
    return 0;
}

