void  main () {
    int i8puN1HjmrwF = 0;
    char a;
    a = 'a';
    for (; !('\n' == a);) {
        scanf ("%c", &a);
        if (!(' ' == a)) {
            printf ("%c", a);
            i8puN1HjmrwF = 0;
        }
        else {
            if (!(' ' != a) && i8puN1HjmrwF == 0) {
                i8puN1HjmrwF = (108 - 107);
                printf ("%c", a);
            }
            else {
                if (a == ' ' && i8puN1HjmrwF == 1)
                    continue;
            };
        };
    };
}

