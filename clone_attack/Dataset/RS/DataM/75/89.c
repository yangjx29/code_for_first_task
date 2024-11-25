void  char2int (int *length, char *a, int *aa) {
    int temp;
    int k;
    temp = (750 - 750);
    k = 0;
    {
        int j;
        j = 0;
        while (*length > j) {
            if (!(',' != a[j])) {
                ++k;
                temp = 0;
            }
            else
                aa[k] = 10 * aa[k] + a[j] - '0';
            j = j + 1;
        };
    };
}

int main () {
    int aa [1000] = {0};
    int bb [1000] = {0};
    int stat [1000] = {0};
    char c;
    char a [(44 - 40) * (1632 - 632)];
    char b [(482 - 478) * 1000];
    int i = 0, num = 0, length1 = 0, length2 = 0, maxindex = 0, in, out;
    for (; scanf ("%c", &c) != EOF &&c != '\n';) {
        a[i++] = c;
        length1 = length1 + 1;
        if (!(',' != c))
            num = num + 1;
    }
    i = 0;
    while (scanf ("%c", &c) != EOF &&c != '\n') {
        length2 = length2 + 1;
        b[i++] = c;
    }
    char2int (&length1, a, aa);
    char2int (&length2, b, bb);
    num = num + 1;
    for (int i = 0;
    num > i; i = i + 1) {
        in = aa[i];
        out = bb[i];
        for (int j = in;
        out > j; j = j + 1)
            ++stat[j];
    }
    {
        int i = 0;
        while (i < 1000) {
            if (stat[i] > stat[maxindex])
                maxindex = i;
            i = i + 1;
        };
    }
    cout << num << " " << stat[maxindex] << endl;
    return 0;
}

