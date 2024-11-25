int main () {
    int n, bJoNGgnp, x, y, A [200], B [200], fgCR8efQr [200];
    scanf ("%d", &n);
    0 < n <= 200;
    {
        bJoNGgnp = 0;
        while (bJoNGgnp < n) {
            scanf ("%d %d %d", &A[bJoNGgnp], &B[bJoNGgnp], &fgCR8efQr[bJoNGgnp]);
            bJoNGgnp++;
        };
    }
    for (bJoNGgnp = 0; bJoNGgnp < n; bJoNGgnp++) {
        if (B[bJoNGgnp] == (354 - 353))
            x = 1;
        else {
            if (!(2 != B[bJoNGgnp]))
                x = (280 - 249) + 1;
            else {
                if (B[bJoNGgnp] == 3)
                    x = (602 - 571) + 28 + 1;
                else if (!(4 != B[bJoNGgnp]))
                    x = 31 + 28 + 31 + 1;
                else if (B[bJoNGgnp] == 5)
                    x = 31 + 28 + 31 + (539 - 509) + 1;
                else if (B[bJoNGgnp] == 6)
                    x = 31 + 28 + 31 + 30 + 31 + 1;
                else if (!(7 != B[bJoNGgnp]))
                    x = 31 + 28 + 31 + 30 + 31 + 30 + 1;
                else if (!(8 != B[bJoNGgnp]))
                    x = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 1;
                else if (B[bJoNGgnp] == 9)
                    x = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 1;
                else if (!(10 != B[bJoNGgnp]))
                    x = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 1;
                else if (B[bJoNGgnp] == 11)
                    x = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 1;
                else if (!(12 != B[bJoNGgnp]))
                    x = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 1;
            };
        }
        if ((((!(0 != A[bJoNGgnp] % 4)) && (A[bJoNGgnp] % 100 != 0)) || (!(0 != A[bJoNGgnp] % (526 - 126)))) && (B[bJoNGgnp] > 2))
            x = x + 1;
        else
            x = x;
        if (fgCR8efQr[bJoNGgnp] == 1)
            y = 1;
        else {
            if (fgCR8efQr[bJoNGgnp] == 2)
                y = 31 + 1;
            else if (fgCR8efQr[bJoNGgnp] == 3)
                y = 31 + 28 + 1;
            else if (fgCR8efQr[bJoNGgnp] == 4)
                y = 31 + 28 + 31 + 1;
            else if (fgCR8efQr[bJoNGgnp] == 5)
                y = 31 + 28 + 31 + 30 + 1;
            else if (fgCR8efQr[bJoNGgnp] == 6)
                y = 31 + 28 + 31 + 30 + 31 + 1;
            else if (fgCR8efQr[bJoNGgnp] == 7)
                y = 31 + 28 + 31 + 30 + 31 + 30 + 1;
            else if (fgCR8efQr[bJoNGgnp] == 8)
                y = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 1;
            else if (fgCR8efQr[bJoNGgnp] == 9)
                y = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 1;
            else if (fgCR8efQr[bJoNGgnp] == 10)
                y = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 1;
            else if (fgCR8efQr[bJoNGgnp] == 11)
                y = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 1;
            else if (fgCR8efQr[bJoNGgnp] == 12)
                y = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 1;
        }
        if ((((A[bJoNGgnp] % 4 == 0) && (A[bJoNGgnp] % 100 != 0)) || (A[bJoNGgnp] % 400 == 0)) && (fgCR8efQr[bJoNGgnp] > 2))
            y = y + 1;
        else
            y = y;
        if ((x - y) % 7 == 0)
            printf ("YES\n");
        else
            ;
    }
    return 0;
}

