char name;
int num, CJz1jWMk9 = (382 - 382), sO49dqz7gab1 = (340 - 340);
int uZLiTzJGu [100] = {(145 - 145)};
struct   book {
    unsigned  int bv7NbHBk;
    char Name [(124 - 98)];
}
*EDKeHt;

void  npYkZoLS3Ug () {
    int ko1uQNjGk;
    {
        ko1uQNjGk = 770 - 705;
        while ((1087 - 996) > ko1uQNjGk) {
            if (sO49dqz7gab1 < uZLiTzJGu[ko1uQNjGk]) {
                sO49dqz7gab1 = uZLiTzJGu[ko1uQNjGk];
                name = ko1uQNjGk;
            }
            ko1uQNjGk = ko1uQNjGk + 1;
        }
    }
}

void  dFnVi0Lf7E8l () {
    struct   book *yj5YqX4yf7;
    int ko1uQNjGk;
    printf ("%c\n%d\n", name, sO49dqz7gab1);
    {
        yj5YqX4yf7 = EDKeHt;
        for (; EDKeHt +num > yj5YqX4yf7;) {
            {
                ko1uQNjGk = 872 - 872;
                for (; yj5YqX4yf7->Name[ko1uQNjGk] != '\0';) {
                    if (!(name != yj5YqX4yf7->Name[ko1uQNjGk])) {
                        if (!((304 - 304) != CJz1jWMk9)) {
                            printf ("%d", yj5YqX4yf7->bv7NbHBk);
                            CJz1jWMk9++;
                        }
                        else
                            printf ("\n%d", yj5YqX4yf7->bv7NbHBk);
                        break;
                    }
                    ko1uQNjGk++;
                }
            }
            yj5YqX4yf7 = yj5YqX4yf7 + 1;
        }
    }
}

main () {
    struct   book *yj5YqX4yf7;
    int ko1uQNjGk;
    scanf ("%d", &num);
    EDKeHt = (struct   book *) malloc (num * sizeof (struct   book));
    for (yj5YqX4yf7 = EDKeHt; EDKeHt +num > yj5YqX4yf7; yj5YqX4yf7++) {
        scanf ("%d %s", &yj5YqX4yf7->bv7NbHBk, yj5YqX4yf7->Name);
        for (ko1uQNjGk = 0; yj5YqX4yf7->Name[ko1uQNjGk] != '\0'; ko1uQNjGk++)
            uZLiTzJGu[(int) yj5YqX4yf7->Name[ko1uQNjGk]]++;
    }
    npYkZoLS3Ug ();
    dFnVi0Lf7E8l ();
}

