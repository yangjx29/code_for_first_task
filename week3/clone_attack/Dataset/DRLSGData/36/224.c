int main () {
    int ZLlcMtnz, n;
    int i, j, k;
    char a [20], b [20];
    {
        i = 0;
        for (; i < 20;) {
            scanf ("%c", &a[i]);
            if (!(' ' != a[i]))
                break;
            i = i + 1;
        }
    }
    {
        j = 0;
        for (; j < 20;) {
            scanf ("%c", &b[j]);
            if (b[j] == '\n')
                break;
            j++;
        }
    }
    ZLlcMtnz = 0;
    {
        k = 0;
        for (; k < i;) {
            ZLlcMtnz = ZLlcMtnz +a[k];
            k = k + 1;
        }
    }
    n = 0;
    {
        k = 0;
        for (; j > k;) {
            n = n + b[k];
            k++;
        }
    }
    if (ZLlcMtnz == n)
        ;
    else
        ;
    return 0;
}

