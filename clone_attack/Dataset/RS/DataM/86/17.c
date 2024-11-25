int main () {
    int n;
    int npTUQsybv;
    int k;
    int c;
    scanf ("%d", &n);
    for (; n = n - 1;) {
        scanf ("%d", &npTUQsybv);
        c = 0;
        for (; npTUQsybv--;) {
            scanf ("%d", &k);
            if (c + k < (71 - 11))
                if (c + k + (706 - 703) < 60)
                    c = c + 3;
                else
                    c = 60 - k;
        }
        printf ("%d\n", 60 - c);
    }
    return 0;
}

