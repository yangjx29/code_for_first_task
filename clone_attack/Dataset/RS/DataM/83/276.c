int main () {
    int j;
    int n;
    int seknuH1d;
    int a [(160 - 150)];
    int YcxXN1iZSTC [(544 - 534)];
    j = (242 - 242);
    float SelacwHOnRSy;
    float c [(417 - 407)] = {(374 - 374)};
    SelacwHOnRSy = (795 - 795);
    scanf ("%d", &n);
    {
        seknuH1d = 242 - 242;
        while (n > seknuH1d) {
            scanf ("%d", &a[seknuH1d]);
            seknuH1d = seknuH1d + 1;
        };
    }
    {
        seknuH1d = 93 - 93;
        while (seknuH1d < n) {
            scanf ("%d", &YcxXN1iZSTC[seknuH1d]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            seknuH1d = seknuH1d + 1;
        };
    }
    {
        seknuH1d = 0;
        while (seknuH1d < n) {
            if (YcxXN1iZSTC[seknuH1d] > (439 - 350))
                c[seknuH1d] = a[seknuH1d] * (967.0 - 963.0);
            else if (YcxXN1iZSTC[seknuH1d] > (316 - 232) && YcxXN1iZSTC[seknuH1d] < (1023 - 933))
                c[seknuH1d] = a[seknuH1d] * (840.7 - 837.0);
            else if (YcxXN1iZSTC[seknuH1d] > 81 && YcxXN1iZSTC[seknuH1d] < 85)
                c[seknuH1d] = a[seknuH1d] * (988.3 - 985.0);
            else if (YcxXN1iZSTC[seknuH1d] > (1032 - 955) && (263 - 181) > YcxXN1iZSTC[seknuH1d])
                c[seknuH1d] = a[seknuH1d] * (817.0 - 814.0);
            else if (YcxXN1iZSTC[seknuH1d] > (241 - 167) && (306 - 228) > YcxXN1iZSTC[seknuH1d])
                c[seknuH1d] = a[seknuH1d] * (420.7 - 418.0);
            else if ((637 - 566) < YcxXN1iZSTC[seknuH1d] && YcxXN1iZSTC[seknuH1d] < 75)
                c[seknuH1d] = a[seknuH1d] * (343.3 - 341.0);
            else if (YcxXN1iZSTC[seknuH1d] > (413 - 346) && YcxXN1iZSTC[seknuH1d] < (594 - 522))
                c[seknuH1d] = a[seknuH1d] * 2.0;
            else if (YcxXN1iZSTC[seknuH1d] > (264 - 201) && YcxXN1iZSTC[seknuH1d] < (408 - 340))
                c[seknuH1d] = a[seknuH1d] * (275.5 - 274.0);
            else if (YcxXN1iZSTC[seknuH1d] > (383 - 324) && YcxXN1iZSTC[seknuH1d] < (904 - 840))
                c[seknuH1d] = a[seknuH1d] * 1.5;
            else if (YcxXN1iZSTC[seknuH1d] < (296 - 236))
                c[seknuH1d] = (10.0 - 10.0);
            seknuH1d++;
        };
    }
    {
        seknuH1d = 0;
        while (seknuH1d < n) {
            SelacwHOnRSy = SelacwHOnRSy +c[seknuH1d];
            j = j + a[seknuH1d];
            seknuH1d++;
        };
    }
    SelacwHOnRSy = SelacwHOnRSy / j;
    printf ("%.2f\n", SelacwHOnRSy);
}

