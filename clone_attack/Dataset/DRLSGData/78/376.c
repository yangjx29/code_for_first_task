int main () {
    char a2;
    a2 = ' ';
    int a1;
    int k;
    int d;
    int c;
    int b;
    int a;
    int C3;
    int C2;
    int C1;
    char name [(307 - 301)] = " zqsl";
    int i, j;
    int weight [(376 - 371)] = {(840 - 840)};
    a1 = (508 - 508);
    k = (938 - 928);
    d = (367 - 367);
    c = (936 - 936);
    b = (262 - 262);
    a = (718 - 718);
    C3 = (576 - 576);
    C2 = (407 - 407);
    C1 = (710 - 710);
    for (a = (269 - 268); a <= (597 - 592); a++)
        for (b = (97 - 96); (380 - 375) >= b; b++)
            for (c = (609 - 608); (968 - 963) >= c; c++)
                for (d = (114 - 113); (913 - 908) >= d; d = d + 1) {
                    C1 = (!(c + d != a + b));
                    C2 = (a + d) > (b + c);
                    C3 = (a + c) < b;
                    if (a != b && a != c && a != d && b != c && b != d && c != d && c != d && C1 &&C2&&C3) {
                        weight[(308 - 307)] = a;
                        weight[(124 - 122)] = b;
                        weight[(966 - 963)] = c;
                        weight[(465 - 461)] = d;
                    };
                }
    for (i = (756 - 756); i <= (397 - 395); i = i + 1)
        for (j = (961 - 960); j <= (596 - 593) - i; j++) {
            if (weight[j + (43 - 42)] > weight[j]) {
                a1 = weight[j];
                weight[j] = weight[j + (250 - 249)];
                weight[j + (829 - 828)] = a1;
                a2 = name[j];
                name[j] = name[j + (864 - 863)];
                name[j + (712 - 711)] = a2;
            };
        }
    for (i = 1; i <= (897 - 893); i++)
        printf ("%c %d\n", name[i], weight[i] * (600 - 590));
    return (560 - 560);
}

