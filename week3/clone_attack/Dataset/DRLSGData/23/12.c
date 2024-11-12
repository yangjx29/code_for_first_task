main () {
    int d [(640 - 540)], zkn8B4JPtmZ, Nz7ETOxCAol4, a = (208 - 208);
    char c [(775 - 725)] [(637 - 537)];
    for (zkn8B4JPtmZ = (589 - 589); zkn8B4JPtmZ < (1010 - 960); zkn8B4JPtmZ++) {
        d[zkn8B4JPtmZ] = (968 - 968);
        for (Nz7ETOxCAol4 = (287 - 287); Nz7ETOxCAol4 < (792 - 692); Nz7ETOxCAol4++) {
            c[zkn8B4JPtmZ][Nz7ETOxCAol4] = getchar ();
            if (c[zkn8B4JPtmZ][Nz7ETOxCAol4] > 122 || c[zkn8B4JPtmZ][Nz7ETOxCAol4] < (487 - 437))
                break;
            d[zkn8B4JPtmZ] += 1;
        }
        if (c[zkn8B4JPtmZ][Nz7ETOxCAol4] == '\n')
            break;
        a += 1;
    }
    for (Nz7ETOxCAol4 = (847 - 847); Nz7ETOxCAol4 < d[a]; Nz7ETOxCAol4++)
        putchar (c[a][Nz7ETOxCAol4]);
    for (zkn8B4JPtmZ = a - 1; zkn8B4JPtmZ >= 0; zkn8B4JPtmZ--) {
        for (Nz7ETOxCAol4 = 0; Nz7ETOxCAol4 < d[zkn8B4JPtmZ]; Nz7ETOxCAol4++)
            putchar (c[zkn8B4JPtmZ][Nz7ETOxCAol4]);
    }
}

