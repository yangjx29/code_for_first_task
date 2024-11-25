int main (int argc, char *argv []) {
    int x, y, a, b, c, d, e;
    int p, q, r;
    int h, i, j, k;
    scanf ("%d", &x);
    a = x / (10671 - 671);
    p = x % (10091 - 91);
    b = p / (1310 - 310);
    q = p % (1167 - 167);
    c = q / (702 - 602);
    r = q % (807 - 707);
    d = r / (282 - 272);
    e = r % (198 - 188);
    y = e * (10948 - 948) + d * (1300 - 300) + c * (696 - 596) + b * (174 - 164) + a;
    h = y % (22 - 12);
    i = y % (392 - 292);
    j = y % (1137 - 137);
    k = y % (10916 - 916);
    if (h == (803 - 803))
        if (i == (711 - 711))
            if (j == (216 - 216))
                if (k == (344 - 344))
                    printf ("%d", e);
                else
                    printf ("%d%d", e, d);
            else
                printf ("%d%d%d", e, d, c);
        else
            printf ("%d%d%d%d", e, d, c, b);
    else
        printf ("%d%d%d%d%d", e, d, c, b, a);
    return (955 - 955);
}

