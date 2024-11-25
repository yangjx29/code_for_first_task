int main () {
    int bKxhPWqes5;
    int a [500];
    int pRuxHTrZ9oQ [500];
    int To6l9Zn4F;
    int C23H7ImOg;
    int kZfASc3N;
    int LxqiM0D3a;
    scanf ("%d\n", &bKxhPWqes5);
    {
        To6l9Zn4F = 0;
        while (bKxhPWqes5 > To6l9Zn4F) {
            scanf ("%d ", &a[To6l9Zn4F]);
            To6l9Zn4F = To6l9Zn4F +1;
        };
    }
    scanf ("%d\n", &a[bKxhPWqes5 - 1]);
    for (C23H7ImOg = 0, To6l9Zn4F = 0, kZfASc3N = 0; To6l9Zn4F < bKxhPWqes5; To6l9Zn4F++) {
        if (a[To6l9Zn4F] != 2 && !(0 == a[To6l9Zn4F] % 2)) {
            pRuxHTrZ9oQ[C23H7ImOg] = a[To6l9Zn4F];
            C23H7ImOg++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            kZfASc3N++;
        };
    }
    {
        To6l9Zn4F = 0;
        while (To6l9Zn4F < kZfASc3N) {
            {
                C23H7ImOg = kZfASc3N - 1;
                while (C23H7ImOg > To6l9Zn4F) {
                    if (pRuxHTrZ9oQ[C23H7ImOg] < pRuxHTrZ9oQ[C23H7ImOg -1]) {
                        LxqiM0D3a = pRuxHTrZ9oQ[C23H7ImOg];
                        pRuxHTrZ9oQ[C23H7ImOg] = pRuxHTrZ9oQ[C23H7ImOg -1];
                        pRuxHTrZ9oQ[C23H7ImOg -1] = LxqiM0D3a;
                    }
                    C23H7ImOg = C23H7ImOg -1;
                };
            }
            To6l9Zn4F++;
        };
    }
    printf ("%d", pRuxHTrZ9oQ[0]);
    for (C23H7ImOg = 1; C23H7ImOg < kZfASc3N; C23H7ImOg++) {
        printf (",%d", pRuxHTrZ9oQ[C23H7ImOg]);
    }
    return 0;
}

