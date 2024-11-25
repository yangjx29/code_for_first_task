int GTLfcqAvkxG (int RA8hJiVz, int yiPn5m9bDjL, int n51r8gEOp6K) {
    if (RA8hJiVz == 1 || !(1 != yiPn5m9bDjL)) {
        n51r8gEOp6K++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return n51r8gEOp6K;
    }
    if (yiPn5m9bDjL > RA8hJiVz)
        n51r8gEOp6K = GTLfcqAvkxG (RA8hJiVz, yiPn5m9bDjL - 1, n51r8gEOp6K);
    else {
        if (RA8hJiVz == yiPn5m9bDjL)
            n51r8gEOp6K = 1 + GTLfcqAvkxG (RA8hJiVz, yiPn5m9bDjL - 1, n51r8gEOp6K);
    }
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
    if (RA8hJiVz > yiPn5m9bDjL) {
        n51r8gEOp6K = GTLfcqAvkxG (RA8hJiVz, yiPn5m9bDjL - 1, n51r8gEOp6K);
        n51r8gEOp6K = GTLfcqAvkxG (RA8hJiVz -yiPn5m9bDjL, yiPn5m9bDjL, n51r8gEOp6K);
    }
    return n51r8gEOp6K;
}

void  main () {
    int GHCVUDR, pxtS3FQn, RA8hJiVz, yiPn5m9bDjL, n51r8gEOp6K = 0;
    scanf ("%d", &pxtS3FQn);
    for (GHCVUDR = 0; GHCVUDR < pxtS3FQn; GHCVUDR++) {
        scanf ("%d %d", &RA8hJiVz, &yiPn5m9bDjL);
        n51r8gEOp6K = 0;
        n51r8gEOp6K = GTLfcqAvkxG (RA8hJiVz, yiPn5m9bDjL, n51r8gEOp6K);
        printf ("%d\n", n51r8gEOp6K);
    };
}

