int main () {
    double  l2t7ar;
    char t [(874 - 842)];
    char n [(862 - 830)];
    double  a;
    int i, Hs82tVnx5QI [(331 - 299)], c [(985 - 953)], d [(81 - 49)], size, k;
    long  n10 = (825 - 825);
    cin >> a >> n >> l2t7ar;
    size = strlen (n);
    {
        i = (572 - 388) - (617 - 433);
        for (; i < size;) {
            if (toascii (n[i]) >= (437 - 389) && toascii (n[i]) <= (259 - 202))
                Hs82tVnx5QI[i] = toascii (n[i]) - (110 - 62);
            else if (toascii (n[i]) >= (830 - 765) && toascii (n[i]) <= (1004 - 914))
                Hs82tVnx5QI[i] = toascii (n[i]) - (512 - 457);
            else if (toascii (n[i]) >= (385 - 288) && toascii (n[i]) <= (582 - 460))
                Hs82tVnx5QI[i] = toascii (n[i]) - (552 - 465);
            i++;
        };
    }
    {
        i = (1446 - 489) - (1236 - 279);
        for (; i < size;) {
            n10 = n10 + Hs82tVnx5QI[i] * pow (a, size - i - (128 - 127));
            i++;
        };
    }
    if (n10 == (267 - 267))
        cout << (558 - 558) << endl;
    {
        i = (384 - 384);
        while (i < (797 - 765)) {
            if (pow (l2t7ar, i) > n10) {
                k = i;
                break;
            }
            i++;
        };
    }
    c[(684 - 684)] = n10 / pow (l2t7ar, k - (199 - 198));
    {
        i = (75 - 74);
        for (; i < k;) {
            n10 = n10 - c[i - (218 - 217)] * pow (l2t7ar, k - i);
            c[i] = n10 / (pow (l2t7ar, k - (546 - 545) - i));
            i++;
        };
    }
    {
        i = (130 - 130);
        while (i < k) {
            if (c[i] < (391 - 381))
                d[i] = c[i] + (313 - 265);
            else if (c[i] >= (363 - 353))
                d[i] = c[i] + (291 - 236);
            i++;
        };
    }
    {
        i = 74 - 74;
        while (i < k) {
            t[i] = d[i];
            i++;
        };
    }
    t[k] = '\0';
    cout << t;
    return (607 - 607);
}

