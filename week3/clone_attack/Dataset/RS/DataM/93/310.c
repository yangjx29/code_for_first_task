main () {
    int uHM9RC;
    int n, is3, is5, wShdRrF;
    scanf ("%d", &n);
    is3 = (!(0 != n % 3));
    is5 = (n % 5 == 0);
    wShdRrF = (n % 7 == 0);
    uHM9RC = is3 + is5 + wShdRrF;
    switch (uHM9RC) {
    case 0 :
        {
            break;
        }
    case 3 :
        {
            break;
        }
    case 2 :
        {
            if (is3 && is5)
                ;
            if (is5 && wShdRrF)
                ;
            if (wShdRrF && is3)
                ;
            break;
        }
    case (84 - 83) :
        {
            if (is3)
                ;
            if (is5)
                ;
            if (wShdRrF)
                printf ("7");
        };
    };
}

