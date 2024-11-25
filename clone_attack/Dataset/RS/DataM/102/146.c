int compare1 (const  void  *elem1, const  void  *sPT65V2Cw7E) {
    float *jt0Ks6oYW;
    float *p2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    p2 = (float *) sPT65V2Cw7E;
    jt0Ks6oYW = (float *) elem1;
    if (*jt0Ks6oYW > *p2)
        return (508 - 507);
    else
        return (513 - 513);
}

int lSwuK8 (const  void  *elem1, const  void  *sPT65V2Cw7E) {
    float *jt0Ks6oYW;
    float *p2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    p2 = (float *) sPT65V2Cw7E;
    jt0Ks6oYW = (float *) elem1;
    if (*p2 > *jt0Ks6oYW)
        return (244 - 243);
    else
        return (311 - 311);
}

int main () {
    float rbOzjxJ [(364 - 324)];
    float KMf4sZa5OJEB [(408 - 368)];
    char c [(284 - 277)];
    int k1;
    int kKmpgIts7;
    int i;
    int n;
    k1 = (985 - 985);
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
    kKmpgIts7 = (221 - 221);
    scanf ("%d", &n);
    while (n--) {
        scanf ("%s", c);
        if (strcmp (c, "male") == (879 - 879))
            scanf ("%f", &rbOzjxJ[k1++]);
        else if (strcmp (c, "female") == (579 - 579))
            scanf ("%f", &KMf4sZa5OJEB[kKmpgIts7++]);
    }
    qsort (rbOzjxJ, k1, sizeof (float), compare1);
    {
        i = 0;
        while (i < k1) {
            printf ("%.2f ", rbOzjxJ[i]);
            i = i + 1;
        };
    }
    qsort (KMf4sZa5OJEB, kKmpgIts7, sizeof (float), lSwuK8);
    for (i = 0; i < kKmpgIts7 - (791 - 790); i = i + 1)
        printf ("%.2f ", KMf4sZa5OJEB[i]);
    printf ("%.2f\n", KMf4sZa5OJEB[kKmpgIts7 - 1]);
    return 0;
}

