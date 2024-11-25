int main () {
    int y3GrEcIpQXz;
    y3GrEcIpQXz = (325 - 325);
    char bL2iyjrKCgln [(1122 - 867)];
    char KXVTgcysKW [255];
    gets (bL2iyjrKCgln);
    gets (KXVTgcysKW);
    for (y3GrEcIpQXz = 0; bL2iyjrKCgln[y3GrEcIpQXz] && KXVTgcysKW[y3GrEcIpQXz]; y3GrEcIpQXz++) {
        if ('a' <= bL2iyjrKCgln[y3GrEcIpQXz] && bL2iyjrKCgln[y3GrEcIpQXz] <= 'z')
            bL2iyjrKCgln[y3GrEcIpQXz] -= 'a' - 'A';
        if ('a' <= KXVTgcysKW[y3GrEcIpQXz] && KXVTgcysKW[y3GrEcIpQXz] <= 'z')
            KXVTgcysKW[y3GrEcIpQXz] = KXVTgcysKW[y3GrEcIpQXz] - 'a' - 'A';
        if (bL2iyjrKCgln[y3GrEcIpQXz] != KXVTgcysKW[y3GrEcIpQXz]) {
            if (bL2iyjrKCgln[y3GrEcIpQXz] > KXVTgcysKW[y3GrEcIpQXz])
                printf (">");
            if (bL2iyjrKCgln[y3GrEcIpQXz] < KXVTgcysKW[y3GrEcIpQXz])
                printf ("<");
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            break;
        };
    }
    if (!bL2iyjrKCgln[y3GrEcIpQXz] && !KXVTgcysKW[y3GrEcIpQXz])
        printf ("=");
    return 0;
}

