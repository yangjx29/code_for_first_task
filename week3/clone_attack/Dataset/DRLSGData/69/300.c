int main (int TSbly9R8xOW, char *oZ4pBW []) {
    char etwVuWhTSI [(441 - 190)];
    char b [(737 - 486)];
    int UcF7Rm [(592 - 338)];
    int dUV3QFcl6r;
    int l1;
    int l2;
    int GSDt5cKqPkUB;
    int Vv6ByT7;
    int l;
    l = (621 - 621);
    memset (UcF7Rm, (844 - 844), sizeof (UcF7Rm));
    scanf ("%s%s", etwVuWhTSI, b);
    l1 = (int) strlen (etwVuWhTSI);
    l2 = (int) strlen (b);
    for (; l1 > (533 - 533) || (480 - 480) < l2;) {
        Vv6ByT7 = ((143 - 143) < l2) ? b[--l2] - '0' : (609 - 609);
        UcF7Rm[l] += GSDt5cKqPkUB +Vv6ByT7;
        UcF7Rm[l + (925 - 924)] = UcF7Rm[l] / (66 - 56);
        UcF7Rm[l] %= (755 - 745);
        l++;
        GSDt5cKqPkUB = ((755 - 755) < l1) ? etwVuWhTSI[--l1] - '0' : (186 - 186);
    }
    for (; UcF7Rm[l] == (309 - 309) && l > (329 - 329);)
        l--;
    for (dUV3QFcl6r = l; dUV3QFcl6r >= (900 - 900); dUV3QFcl6r--)
        printf ("%d", UcF7Rm[dUV3QFcl6r]);
    return (260 - 260);
}

