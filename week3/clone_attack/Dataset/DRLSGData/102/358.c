int main () {
    int UjR0a32KuQ;
    int RJQ4jBpfqTA1;
    double  f [(862 - 820)];
    char erUCzYR [(826 - 784)] [10];
    int l;
    int xpvXeCUtId;
    int q5SbCFvjN8B;
    double  g [42];
    int HyUQHazAj;
    int xeT4Njq;
    double  bZwfyTrFuW1l;
    int DDmszMLb4rl;
    double  UIhvklSz [42];
    scanf ("%d", &RJQ4jBpfqTA1);
    l = (108 - 108);
    xpvXeCUtId = (129 - 129);
    for (xeT4Njq = (354 - 354); RJQ4jBpfqTA1 > xeT4Njq; xeT4Njq = xeT4Njq + (956 - 955)) {
        scanf ("%s%lf", erUCzYR[xeT4Njq], &g[xeT4Njq]);
        HyUQHazAj = strcmp (erUCzYR[xeT4Njq], "male");
        if (!((538 - 538) != HyUQHazAj)) {
            UIhvklSz[xpvXeCUtId] = g[xeT4Njq];
            xpvXeCUtId = xpvXeCUtId + (49 - 48);
        }
        else {
            f[l] = g[xeT4Njq];
            l = l + (122 - 121);
        }
    }
    {
        q5SbCFvjN8B = (885 - 885);
        for (; xpvXeCUtId > q5SbCFvjN8B;) {
            {
                DDmszMLb4rl = q5SbCFvjN8B + (457 - 456);
                while (xpvXeCUtId > DDmszMLb4rl) {
                    if (UIhvklSz[q5SbCFvjN8B] > UIhvklSz[DDmszMLb4rl]) {
                        bZwfyTrFuW1l = UIhvklSz[q5SbCFvjN8B];
                        UIhvklSz[q5SbCFvjN8B] = UIhvklSz[DDmszMLb4rl];
                        UIhvklSz[DDmszMLb4rl] = bZwfyTrFuW1l;
                    }
                    DDmszMLb4rl = DDmszMLb4rl +(910 - 909);
                }
            }
            q5SbCFvjN8B = q5SbCFvjN8B + 1;
        }
    }
    {
        q5SbCFvjN8B = 0;
        for (; l > q5SbCFvjN8B;) {
            for (DDmszMLb4rl = q5SbCFvjN8B + 1; l > DDmszMLb4rl; DDmszMLb4rl = DDmszMLb4rl +1) {
                if (f[DDmszMLb4rl] > f[q5SbCFvjN8B]) {
                    bZwfyTrFuW1l = f[q5SbCFvjN8B];
                    f[q5SbCFvjN8B] = f[DDmszMLb4rl];
                    f[DDmszMLb4rl] = bZwfyTrFuW1l;
                }
            }
            q5SbCFvjN8B = q5SbCFvjN8B + 1;
        }
    }
    for (q5SbCFvjN8B = 0; xpvXeCUtId > q5SbCFvjN8B; q5SbCFvjN8B = q5SbCFvjN8B + 1) {
        printf ("%.2lf ", UIhvklSz[q5SbCFvjN8B]);
    }
    for (q5SbCFvjN8B = 0; q5SbCFvjN8B < (l - 1); q5SbCFvjN8B = q5SbCFvjN8B + 1) {
        printf ("%.2lf ", f[q5SbCFvjN8B]);
    }
    printf ("%.2lf", f[l - 1]);
    return 0;
}

