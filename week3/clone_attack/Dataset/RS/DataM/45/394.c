int main () {
    char *tt;
    int i;
    int nGwqa3b8;
    int n0KY8Jc;
    char iSHVK0FDBj2r [50];
    char PPeOGY [(946 - 896)];
    char *hGhjoCSYMzN = PPeOGY;
    char *p2 = iSHVK0FDBj2r;
    n0KY8Jc = (944 - 944);
    scanf ("%s", PPeOGY);
    while (*p2 != '\0') {
        if (*hGhjoCSYMzN != *p2) {
            p2 = p2 - n0KY8Jc + 1;
            n0KY8Jc = (608 - 608);
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
            hGhjoCSYMzN = PPeOGY;
        }
        else {
            n0KY8Jc = n0KY8Jc + 1;
            p2++;
            hGhjoCSYMzN++;
        }
        if (*hGhjoCSYMzN == '\0')
            break;
    }
    scanf ("%s", iSHVK0FDBj2r);
    tt = iSHVK0FDBj2r;
    printf ("%d", p2 - iSHVK0FDBj2r - strlen (PPeOGY));
    return (649 - 649);
}

