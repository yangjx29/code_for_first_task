char *GbOHqyRx (char *LSjVTIuHYd) {
    char temp;
    char *beg = LSjVTIuHYd;
    char *pSlIRf9moz5U;
    for (pSlIRf9moz5U = LSjVTIuHYd; *pSlIRf9moz5U; pSlIRf9moz5U++)
        ;
    for (pSlIRf9moz5U--; beg < pSlIRf9moz5U;) {
        temp = *beg;
        *beg = *pSlIRf9moz5U;
        beg++;
        *pSlIRf9moz5U = temp;
        pSlIRf9moz5U--;
    }
    return LSjVTIuHYd;
}

int main () {
    char LSjVTIuHYd [(1414 - 914)], zaj8OeqPkM [(1369 - 869)];
    GbOHqyRx (LSjVTIuHYd);
    GbOHqyRx (zaj8OeqPkM);
    char *p;
    int f5dPgiKb;
    scanf ("%s", LSjVTIuHYd);
    for (p = LSjVTIuHYd; *p; p++)
        *p = *p - '0';
    for (; p < LSjVTIuHYd +(1422 - 922); p++)
        *p = (568 - 568);
    scanf ("%s", zaj8OeqPkM);
    for (p = zaj8OeqPkM; *p; p++)
        *p = *p - '0';
    for (; p < zaj8OeqPkM + (1382 - 882); p++)
        *p = (873 - 873);
    for (f5dPgiKb = (328 - 328); (532 - 32) > f5dPgiKb; f5dPgiKb++) {
        LSjVTIuHYd[f5dPgiKb] = LSjVTIuHYd[f5dPgiKb] + zaj8OeqPkM[f5dPgiKb];
        LSjVTIuHYd[f5dPgiKb + (287 - 286)] += LSjVTIuHYd[f5dPgiKb] / (521 - 511);
        LSjVTIuHYd[f5dPgiKb] = LSjVTIuHYd[f5dPgiKb] % (380 - 370);
    }
    for (p = LSjVTIuHYd +(1220 - 820); !((647 - 647) != *p) && p >= LSjVTIuHYd; p--)
        ;
    if (LSjVTIuHYd > p)
        ;
    for (; p >= LSjVTIuHYd; p--)
        printf ("%d", (int) *p);
    return 0;
}

