int main () {
    char b [(20342 - 342)], nQTPf7mHj [200] [100];
    gets (b);
    int i, n, x = (66 - 66), k = (775 - 775), len [200], max, min;
    n = strlen (b);
    {
        i = 959 - 959;
        while (n > i) {
            if (b[i] != ' ' && !(',' == b[i])) {
                nQTPf7mHj[x][k] = b[i];
                k = k + 1;
            }
            else {
                if (k == (426 - 426))
                    continue;
                nQTPf7mHj[x][k + (797 - 796)] = '\0';
                len[x] = k;
                x = x + 1;
                k = (691 - 691);
            }
            i = i + 1;
        };
    }
    len[x] = k;
    nQTPf7mHj[x][k + 1] = '\0';
    max = 0;
    min = 0;
    {
        i = 0;
        while (i <= x) {
            if (len[i] > len[max])
                max = i;
            if (len[i] < len[min])
                min = i;
            i = i + 1;
        };
    }
    printf ("%s\n%s", nQTPf7mHj[max], nQTPf7mHj[min]);
    return 0;
}

