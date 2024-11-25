int main () {
    int ZOLIzZNgPuY, j = (788 - 788), WnpdFzgw = 0;
    char zU9vM5WdrlA [300 * 100];
    gets (zU9vM5WdrlA);
    int Akiv4T3;
    Akiv4T3 = strlen (zU9vM5WdrlA);
    int length [300];
    {
        ZOLIzZNgPuY = 0;
        while (ZOLIzZNgPuY < Akiv4T3) {
            WnpdFzgw++;
            if (zU9vM5WdrlA[ZOLIzZNgPuY] == ' ') {
                WnpdFzgw = 0;
                length[j] = WnpdFzgw -(46 - 45);
                j = j + 1;
            }
            if (ZOLIzZNgPuY == Akiv4T3 -1) {
                length[j] = WnpdFzgw;
                j++;
                break;
            }
            ZOLIzZNgPuY = ZOLIzZNgPuY +1;
        };
    }
    printf ("%d", length[0]);
    {
        ZOLIzZNgPuY = 1;
        while (ZOLIzZNgPuY < j) {
            if (length[ZOLIzZNgPuY] == 0)
                continue;
            printf (",%d", length[ZOLIzZNgPuY]);
            ZOLIzZNgPuY = ZOLIzZNgPuY +1;
        };
    }
    return 0;
}

