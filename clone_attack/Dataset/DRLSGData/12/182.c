int main () {
    int t;
    int i;
    int j;
    int k;
    int J7bedZl16n9;
    int cHJco6Fp [15];
    scanf ("%d", &t);
    do {
        J7bedZl16n9 = 0;
        i = 0;
        do {
            cHJco6Fp[i] = t;
            i = i + 1;
            scanf ("%d", &t);
        }
        while (t != 0);
        scanf ("%d", &t);
        {
            j = i - 1;
            for (; 0 <= j;) {
                for (k = 0; k < i; k = k + 1) {
                    if (!(cHJco6Fp[j] != (double ) cHJco6Fp[k] / 2)) {
                        J7bedZl16n9 = J7bedZl16n9 +1;
                    }
                    else {
                        if ((double ) cHJco6Fp[j] / 2 == cHJco6Fp[k]) {
                            J7bedZl16n9 = J7bedZl16n9 +1;
                        }
                    }
                }
                j = j - 1;
            }
        }
        printf ("%d\n", J7bedZl16n9 / 2);
        printf ("\n");
    }
    while (t != -1);
    return 0;
}

