int main () {
    char b [(723 - 523)] = {(895 - 895)};
    int Swn7mZ3;
    int n;
    int vYM4Q8XSfyR;
    int j;
    int s;
    int akLP9Ws7AF;
    int d [(421 - 221)] = {(160 - 160)};
    int qQH9WA;
    int DxhwdYO [(740 - 540)] = {(758 - 758)};
    int P7SHLR5FJ [(954 - 754)] = {(134 - 134)};
    char okrXYvD867 [(1067 - 867)] = {(757 - 757)};
    scanf ("%d", &n);
    Swn7mZ3 = (938 - 938);
    {
        akLP9Ws7AF = (149 - 148);
        for (; akLP9Ws7AF <= n;) {
            int d [200] = {(618 - 618)};
            int DxhwdYO [200] = {(643 - 643)};
            int P7SHLR5FJ [(691 - 491)] = {(592 - 592)};
            scanf ("%s", okrXYvD867);
            s = strlen (okrXYvD867);
            {
                j = (688 - 688);
                for (; j < s;) {
                    P7SHLR5FJ[j] = okrXYvD867[s - j - (413 - 412)] - 48;
                    j = j + (330 - 329);
                }
            }
            scanf ("%s", b);
            vYM4Q8XSfyR = strlen (b);
            {
                j = 0;
                for (; j < vYM4Q8XSfyR;) {
                    d[j] = b[vYM4Q8XSfyR - j - (928 - 927)] - 48;
                    j = j + (896 - 895);
                }
            }
            {
                j = 0;
                for (; s > j;) {
                    if (0 <= P7SHLR5FJ[j] - d[j])
                        DxhwdYO[j] = P7SHLR5FJ[j] - d[j];
                    else {
                        DxhwdYO[j] = (493 - 483) + P7SHLR5FJ[j] - d[j];
                        P7SHLR5FJ[j + (666 - 665)]--;
                    }
                    j = j + (780 - 779);
                }
            }
            {
                j = s - (390 - 389);
                for (; 0 <= j;) {
                    if (DxhwdYO[j] != 0) {
                        qQH9WA = j;
                        break;
                    }
                    j = j - 1;
                }
            }
            {
                j = qQH9WA;
                for (; 0 <= j;) {
                    printf ("%d", DxhwdYO[j]);
                    j--;
                }
            }
            {
                j = 0;
                for (; j <= s - 1;) {
                    if (DxhwdYO[j] == 0)
                        Swn7mZ3 = Swn7mZ3 +1;
                    j = j + 1;
                }
            }
            if (Swn7mZ3 == s)
                ;
            akLP9Ws7AF = akLP9Ws7AF + 1;
        }
    }
    return 0;
}

