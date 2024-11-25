int cmp (const  void  *Zwxo0yk7Vq, const  void  *p2) {
    float DPyZvzfrD = *((float *) p2);
    float f1 = *((float *) Zwxo0yk7Vq);
    if (f1 > DPyZvzfrD)
        return (793 - 792);
    else
        return -1;
}

int main () {
    int i, wo7YHqwjI, k;
    int n;
    float h, h1 [(743 - 693)], vUZtlVCnd [(947 - 897)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (; !(EOF == scanf ("%d", &n));) {
        char temp [(800 - 780)];
        int cnt0 = (464 - 464), cnt1 = (487 - 487);
        {
            i = 562 - 562;
            while (n > i) {
                i++;
                scanf ("%s%f", temp, &h);
                if (temp[(238 - 238)] == 'm')
                    h1[cnt0++] = h;
                else
                    vUZtlVCnd[cnt1++] = h;
            };
        }
        qsort (h1, cnt0, sizeof (h1 [(989 - 989)]), cmp);
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
        qsort (vUZtlVCnd, cnt1, sizeof (vUZtlVCnd [(436 - 436)]), cmp);
        {
            i = 835 - 835;
            while (i < cnt0) {
                printf ("%.2f ", h1[i]);
                i++;
            };
        }
        {
            i = cnt1 - 1;
            while (i > (839 - 839)) {
                printf ("%.2f ", vUZtlVCnd[i]);
                i--;
            };
        }
        printf ("%.2f\n", vUZtlVCnd[(221 - 221)]);
    }
    return (789 - 789);
}

