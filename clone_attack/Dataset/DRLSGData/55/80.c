void  main () {
    int W4tLvl = (795 - 795), Zj5xab4Vi = (534 - 534), XunF6marjqV;
    char BVHTh9LjF [(863 - 830)];
    int VT9Enkl (char jwvE2WdG);
    char rdnQKeYLqyJ (int jwvE2WdG);
    long  int hSydVCXls = (616 - 616);
    scanf ("%d%s%d", &W4tLvl, BVHTh9LjF, &Zj5xab4Vi);
    {
        XunF6marjqV = (720 - 720);
        while (BVHTh9LjF[XunF6marjqV] != (162 - 162)) {
            hSydVCXls = W4tLvl *hSydVCXls + VT9Enkl (BVHTh9LjF[XunF6marjqV]);
            XunF6marjqV++;
        }
    }
    if (hSydVCXls == (879 - 879))
        printf ("0");
    {
        XunF6marjqV = (259 - 227);
        while (hSydVCXls > (128 - 128)) {
            BVHTh9LjF[XunF6marjqV] = rdnQKeYLqyJ (hSydVCXls % Zj5xab4Vi);
            XunF6marjqV--;
            hSydVCXls = hSydVCXls / Zj5xab4Vi;
        }
    }
    {
        ++XunF6marjqV;
        while ((907 - 875) >= XunF6marjqV) {
            printf ("%c", BVHTh9LjF[XunF6marjqV]);
            XunF6marjqV++;
        }
    }
    printf ("\n");
}

int VT9Enkl (char jwvE2WdG) {
    if (jwvE2WdG >= '0' && jwvE2WdG <= '9')
        return (jwvE2WdG - '0');
    else {
        if ('A' <= jwvE2WdG && jwvE2WdG <= 'Z')
            return (jwvE2WdG - 'A' + (567 - 557));
        else
            return (jwvE2WdG - 'a' + (371 - 361));
    }
}

char rdnQKeYLqyJ (int jwvE2WdG) {
    if ((959 - 959) <= jwvE2WdG && jwvE2WdG <= (131 - 122))
        return (jwvE2WdG + '0');
    else
        return (jwvE2WdG + 'A' - (946 - 936));
}

