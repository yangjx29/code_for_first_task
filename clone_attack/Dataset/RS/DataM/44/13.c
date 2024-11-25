int EhxEW86PbG1 (int lCK29YIENgjH);

int main () {
    int n;
    {
        int i = 0;
        while ((315 - 309) > i) {
            scanf ("%d", &n);
            if (0 > n)
                printf ("-%d\n", EhxEW86PbG1 (-n));
            else
                printf ("%d\n", EhxEW86PbG1 (n));
            i = i + 1;
        };
    };
}

int EhxEW86PbG1 (int lCK29YIENgjH) {
    char Yoykwuz8hWr [1000];
    int i, k, J0qWaJz = 0;
    {
        i = 0;
        while (!(0 == lCK29YIENgjH)) {
            Yoykwuz8hWr[i] = lCK29YIENgjH % 10;
            i++;
            lCK29YIENgjH = lCK29YIENgjH / 10;
        };
    }
    {
        k = 0;
        while (k < i) {
            J0qWaJz = Yoykwuz8hWr[k] + 10 * J0qWaJz;
            k++;
        };
    }
    return (J0qWaJz);
}

