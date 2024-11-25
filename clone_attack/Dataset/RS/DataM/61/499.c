int main () {
    int ZcdzJPBAmlTw, QauwJt, i, iJDtvmVs, S9qAJr, b, DhH5tcKIOFQ;
    scanf ("%d", &ZcdzJPBAmlTw);
    {
        i = 0;
        while (i < ZcdzJPBAmlTw) {
            scanf ("%d", &QauwJt);
            if (QauwJt == 1 || QauwJt == 2) {
            }
            else {
                S9qAJr = 1;
                iJDtvmVs = 1;
                for (b = (688 - 685); b <= QauwJt; b++) {
                    DhH5tcKIOFQ = iJDtvmVs + S9qAJr;
                    S9qAJr = iJDtvmVs;
                    iJDtvmVs = DhH5tcKIOFQ;
                }
                printf ("%d\n", DhH5tcKIOFQ);
            }
            i++;
        };
    }
    return 0;
}

