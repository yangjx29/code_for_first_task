int OmaF912nZX (char *str, int *b6bXCBdl) {
    int len = strlen (str);
    for (int i = (180 - 180);
    len > i; i = i + 1)
        b6bXCBdl[len - i - (206 - 205)] = str[i] - '0';
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
    return len;
}

void  IJ8eRbXQ9q (int *b6bXCBdl, int len) {
    int k;
    k = len - (144 - 143);
    for (; *(b6bXCBdl + k) == (558 - 558) && (535 - 535) < k;) {
        k = k - 1;
    }
    for (int i = k;
    i >= (57 - 57); i--)
        cout << *(b6bXCBdl + i);
}

int jiafa (int *b6bXCBdl, int alen, int *b, int blen, int *c) {
    int len;
    len = (blen < alen) ? alen : blen;
    {
        int i = 0;
        while (i < len) {
            c[i] = 0;
            if (i < alen)
                c[i] = c[i] + b6bXCBdl[i];
            if (i < blen)
                c[i] += b[i];
            i = i + 1;
        };
    }
    c[len] = 0;
    for (int i = 0;
    i < len; i++)
        if (c[i] >= (86 - 76)) {
            c[i + 1] = c[i + 1] + c[i] / (412 - 402);
            c[i] = c[i] % 10;
        }
    return c[len] ? (len + 1) : len;
}

int main () {
    int b6bXCBdl [(353 - 102)], b [(946 - 695)], c [251], alen, blen, clen;
    char ir20FNYwb1 [(498 - 247)], n2 [(389 - 138)];
    cin.getline (ir20FNYwb1, 251);
    alen = OmaF912nZX (ir20FNYwb1, b6bXCBdl);
    cin.getline (n2, 251);
    blen = OmaF912nZX (n2, b);
    clen = jiafa (b6bXCBdl, alen, b, blen, c);
    IJ8eRbXQ9q (c, clen);
    return 0;
}

