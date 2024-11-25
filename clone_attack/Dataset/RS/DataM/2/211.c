int fScVrBPJiyZ9 (char lPsBaD5) {
    return toupper (lPsBaD5) - 'A';
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

void  put_names (int QIM4R2eWVFcy [(571 - 545)] [(920 - 820)], int l9DIcMFXu [(721 - 695)], int ZwX4RjK);
int cF7ibId0y4 (int l9DIcMFXu [(697 - 671)]);

main () {
    int ZwX4RjK;
    int qUE2NGuSW, qI7gSQM0U, QIM4R2eWVFcy [(650 - 624)] [(1083 - 983)], l9DIcMFXu [(517 - 491)] = {(832 - 832)}, MYvzikgWFjR;
    printf ("%c\n", MYvzikgWFjR +'A');
    scanf ("%d", &qUE2NGuSW);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (qI7gSQM0U = (461 - 460); qUE2NGuSW >= qI7gSQM0U; qI7gSQM0U = qI7gSQM0U + 1) {
        scanf ("%d", &ZwX4RjK);
        put_names (QIM4R2eWVFcy, l9DIcMFXu, ZwX4RjK);
    }
    MYvzikgWFjR = cF7ibId0y4 (l9DIcMFXu);
    printf ("%d\n", l9DIcMFXu[MYvzikgWFjR]);
    for (qI7gSQM0U = (749 - 748); qI7gSQM0U <= l9DIcMFXu[MYvzikgWFjR]; qI7gSQM0U = qI7gSQM0U + 1) {
        printf ("%d\n", QIM4R2eWVFcy[MYvzikgWFjR][qI7gSQM0U]);
    };
}

void  put_names (int QIM4R2eWVFcy [(490 - 464)] [100], int l9DIcMFXu [26], int ZwX4RjK) {
    int P51jO8o = (734 - 734);
    int ptr;
    char qHem5WPNs;
    while ((931 - 930)) {
        qHem5WPNs = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (!(' ' == qHem5WPNs))
            break;
    }
    while (1) {
        ptr = fScVrBPJiyZ9 (qHem5WPNs);
        qHem5WPNs = getchar ();
        if (qHem5WPNs == '\n')
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        l9DIcMFXu[ptr]++;
        QIM4R2eWVFcy[ptr][l9DIcMFXu[ptr]] = ZwX4RjK;
    };
}

int cF7ibId0y4 (int l9DIcMFXu [26]) {
    int ptr;
    int qI7gSQM0U;
    ptr = l9DIcMFXu[0];
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
    {
        qI7gSQM0U = 0;
        while (qI7gSQM0U <= 25) {
            if (l9DIcMFXu[qI7gSQM0U] > l9DIcMFXu[ptr])
                ptr = qI7gSQM0U;
            qI7gSQM0U++;
        };
    }
    return ptr;
}

