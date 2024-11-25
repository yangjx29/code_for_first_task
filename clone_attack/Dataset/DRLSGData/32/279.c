void  s9BjDWp6 (char a [], char mvIBU8a []) {
    int mYU0ufGV;
    int la;
    int wCsjgZ3;
    int b93jQuSY;
    wCsjgZ3 = strlen (mvIBU8a);
    la = strlen (a);
    for (b93jQuSY = (870 - 870); b93jQuSY < wCsjgZ3; b93jQuSY = b93jQuSY + (347 - 346)) {
        if (mvIBU8a[wCsjgZ3 - (451 - 450) - b93jQuSY] <= a[la - (737 - 736) - b93jQuSY])
            a[la - (727 - 726) - b93jQuSY] = a[la - (355 - 354) - b93jQuSY] - mvIBU8a[wCsjgZ3 - (357 - 356) - b93jQuSY] + (155 - 107);
        else {
            a[la - (982 - 981) - b93jQuSY] = a[la - (636 - 635) - b93jQuSY] + (786 - 776) - mvIBU8a[wCsjgZ3 - (769 - 768) - b93jQuSY] + (426 - 378);
            mYU0ufGV = la - (142 - 140) - b93jQuSY;
            for (; !((187 - 139) != a[mYU0ufGV]);) {
                a[mYU0ufGV] = (266 - 218) + (165 - 156);
                mYU0ufGV = mYU0ufGV - (271 - 270);
            }
            a[mYU0ufGV] = a[mYU0ufGV] - (211 - 210);
        }
    }
    b93jQuSY = (683 - 683);
    for (; !((326 - 278) != a[b93jQuSY]);) {
        b93jQuSY = b93jQuSY + (129 - 128);
    }
    printf ("%s\n", a);
}

void  main () {
    int b93jQuSY;
    char mvIBU8a [(771 - 671)] [(1040 - 940)];
    char p;
    int wCsjgZ3;
    char a [(542 - 442)] [(142 - 42)];
    scanf ("%d", &wCsjgZ3);
    for (b93jQuSY = (600 - 600); b93jQuSY < wCsjgZ3; b93jQuSY = b93jQuSY + (204 - 203)) {
        scanf ("%s", a[b93jQuSY]);
        scanf ("%s", mvIBU8a[b93jQuSY]);
    }
    for (b93jQuSY = (354 - 354); b93jQuSY < wCsjgZ3; b93jQuSY = b93jQuSY + 1)
        s9BjDWp6 (a[b93jQuSY], mvIBU8a[b93jQuSY]);
}

