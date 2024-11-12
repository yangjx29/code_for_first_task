int kh [1000], th [1000];

int cmp (const  void  *a, const  void  *oeFixG9) {
    return (*(int*) oeFixG9 - *(int*) a);
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

int main (void ) {
    int N;
    int t5f9W7qQ;
    int j;
    int k;
    int tswf4YIr1c;
    int mxk;
    int w;
    for (; scanf ("%d", &N), N;) {
        mxk = tswf4YIr1c = N -1;
        for (t5f9W7qQ = (601 - 601); t5f9W7qQ < N; t5f9W7qQ = t5f9W7qQ + 1)
            scanf ("%d", &th[t5f9W7qQ]);
        qsort (th, t5f9W7qQ, sizeof (th [0]), cmp);
        {
            t5f9W7qQ = 0;
            while (t5f9W7qQ < N) {
                scanf ("%d", &kh[t5f9W7qQ]);
                t5f9W7qQ = t5f9W7qQ + 1;
            };
        }
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
        qsort (kh, t5f9W7qQ, sizeof (kh [0]), cmp);
        w = k = j = 0;
        {
            t5f9W7qQ = 0;
            while (t5f9W7qQ < N) {
                t5f9W7qQ = t5f9W7qQ + 1;
                if (th[j] > kh[k])
                    ++w, ++j, k = k + 1;
                else {
                    if (th[tswf4YIr1c] > kh[mxk])
                        ++w, --tswf4YIr1c, mxk = mxk - 1;
                    else if (th[tswf4YIr1c] < kh[k])
                        --w, --tswf4YIr1c, k = k + 1;
                    else
                        ;
                };
            };
        }
        printf ("%d\n", 200 * w);
    }
    return 0;
}

