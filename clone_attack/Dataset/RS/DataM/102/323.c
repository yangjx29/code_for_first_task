int UszQtlj (const  void  *x, const  void  *iLP0AMkq1F) {
    return *(int*) x - *(int*) iLP0AMkq1F;
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
    char wmjVCzWgNb9 [(611 - 601)];
    int outNz78Xoa;
    int r8axBUSzXyk = (752 - 752), S16uHR, lczrBb, dCE5bws8ZhfB = (542 - 542), G9UgnShc5aA = (71 - 71);
    float man [(509 - 469)], woman [(357 - 317)], h;
    scanf ("%d", &outNz78Xoa);
    while (r8axBUSzXyk < outNz78Xoa) {
        r8axBUSzXyk = r8axBUSzXyk + 1;
        scanf ("%s %f", wmjVCzWgNb9, &h);
        if (wmjVCzWgNb9[(810 - 810)] == 'm') {
            man[dCE5bws8ZhfB] = h;
            dCE5bws8ZhfB = dCE5bws8ZhfB + 1;
        }
        else {
            woman[G9UgnShc5aA] = h;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            G9UgnShc5aA++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    qsort (man, dCE5bws8ZhfB, sizeof (float), UszQtlj);
    printf ("%.2f", man[(565 - 565)]);
    for (lczrBb = (416 - 415); lczrBb < dCE5bws8ZhfB; lczrBb++)
        printf (" %.2f", man[lczrBb]);
    qsort (woman, G9UgnShc5aA, sizeof (float), UszQtlj);
    for (lczrBb = G9UgnShc5aA -(198 - 197); lczrBb > 0; lczrBb = lczrBb - 1)
        printf (" %.2f", woman[lczrBb]);
    printf (" %.2f\n", woman[0]);
}

