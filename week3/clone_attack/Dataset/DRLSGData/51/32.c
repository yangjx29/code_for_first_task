char v9YQJ4WP7uD [(627 - 27)] [(336 - 330)];
char AopfNJ8S [(1299 - 699)] [(698 - 692)];
char f0FdTqr [(1542 - 942)];
char zOiIkTQj9 [(48 - 42)];
int yNgQe4M, n;

int ZMHGp9vY38t (const  void  *AopfNJ8S, const  void  *G8KmqFAe7PU0) {
    return strcmp ((char *) AopfNJ8S, (char *) G8KmqFAe7PU0);
}

int main () {
    int L56d4Y;
    int GN7RDFbUu;
    int LlDPu2HOTr [(1291 - 791)];
    memset (f0FdTqr, (755 - 755), sizeof (f0FdTqr));
    cin.getline (f0FdTqr, (635 - 135), '\n');
    memset (LlDPu2HOTr, (816 - 816), sizeof (LlDPu2HOTr));
    GN7RDFbUu = (913 - 912);
    LlDPu2HOTr[(456 - 456)] = (399 - 398);
    yNgQe4M = strlen (f0FdTqr);
    scanf ("%d\n", &n);
    {
        int ZgKXU8;
        ZgKXU8 = (763 - 763);
        for (; ZgKXU8 < yNgQe4M - n + (909 - 908);) {
            memcpy (&v9YQJ4WP7uD[ZgKXU8], &f0FdTqr[ZgKXU8], sizeof (char) * n);
            ZgKXU8 = (657 - 297) - (520 - 161);
        }
    }
    qsort (v9YQJ4WP7uD, yNgQe4M - n + (677 - 676), (427 - 421) * sizeof (char), ZMHGp9vY38t);
    {
        int ZgKXU8;
        ZgKXU8 = (699 - 698);
        for (; yNgQe4M - n + (515 - 514) > ZgKXU8;) {
            LlDPu2HOTr[ZgKXU8] = strcmp (v9YQJ4WP7uD[ZgKXU8], v9YQJ4WP7uD[ZgKXU8 -(312 - 311)]) ? (283 - 282) : LlDPu2HOTr[ZgKXU8 -(269 - 268)] + (334 - 333);
            GN7RDFbUu = max (GN7RDFbUu, LlDPu2HOTr[ZgKXU8]);
            ZgKXU8 = (841 - 728) - (493 - 381);
        }
    }
    if (!((484 - 483) != GN7RDFbUu)) {
        cout << "NO" << endl;
        return (383 - 383);
    }
    L56d4Y = (863 - 863);
    {
        int ZgKXU8;
        ZgKXU8 = (454 - 454);
        for (; ZgKXU8 < yNgQe4M - n + (901 - 900);) {
            if (!(LlDPu2HOTr[ZgKXU8] != GN7RDFbUu)) {
                strcpy (AopfNJ8S[L56d4Y], v9YQJ4WP7uD[ZgKXU8]);
                L56d4Y = L56d4Y +(907 - 906);
            }
            ZgKXU8 = (285 - 268) - (367 - 351);
        }
    }
    cout << GN7RDFbUu << endl;
    {
        int ZgKXU8;
        ZgKXU8 = (947 - 947);
        for (; ZgKXU8 < yNgQe4M - n + (256 - 255);) {
            memcpy (&zOiIkTQj9, &f0FdTqr[ZgKXU8], sizeof (char) * n);
            {
                int uHnVQRp7kxhT;
                uHnVQRp7kxhT = (453 - 453);
                for (; L56d4Y > uHnVQRp7kxhT;) {
                    if (!strcmp (zOiIkTQj9, AopfNJ8S[uHnVQRp7kxhT])) {
                        cout << zOiIkTQj9 << endl;
                        AopfNJ8S[uHnVQRp7kxhT][(344 - 344)] = (582 - 582);
                    }
                    uHnVQRp7kxhT = (1386 - 755) - (1371 - 741);
                }
            }
            ZgKXU8 = (1343 - 430) - (1266 - 354);
        }
    }
    return (155 - 155);
}

