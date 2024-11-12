void  main () {
    int n [300];
    int fIuYzLxloJdH;
    int A0Wm72Xnt;
    int SjyudUO4tEa;
    int k;
    int r;
    while ((900 - 899)) {
        scanf ("%d%d", &r, &fIuYzLxloJdH);
        SjyudUO4tEa = r;
        if (r == 0 && !(0 != fIuYzLxloJdH))
            break;
        else {
            {
                A0Wm72Xnt = 0;
                while (r > A0Wm72Xnt) {
                    n[A0Wm72Xnt] = A0Wm72Xnt +1;
                    A0Wm72Xnt++;
                };
            }
            A0Wm72Xnt = 0;
            while (SjyudUO4tEa > 1) {
                {
                    k = 1;
                    while (k < fIuYzLxloJdH) {
                        k++;
                        while (n[A0Wm72Xnt] == 0) {
                            if (r - 1 > A0Wm72Xnt)
                                A0Wm72Xnt = A0Wm72Xnt +1;
                            else
                                A0Wm72Xnt = 0;
                        }
                        if (r - 1 > A0Wm72Xnt)
                            A0Wm72Xnt = A0Wm72Xnt +1;
                        else
                            A0Wm72Xnt = 0;
                    };
                }
                while (n[A0Wm72Xnt] == 0) {
                    if (A0Wm72Xnt < r - 1)
                        A0Wm72Xnt = A0Wm72Xnt +1;
                    else
                        A0Wm72Xnt = 0;
                }
                n[A0Wm72Xnt] = 0;
                SjyudUO4tEa = SjyudUO4tEa -1;
            }
            for (A0Wm72Xnt = 0; A0Wm72Xnt < r; A0Wm72Xnt++) {
                if (n[A0Wm72Xnt] != 0)
                    printf ("%d", n[A0Wm72Xnt]);
            };
        };
    };
}

