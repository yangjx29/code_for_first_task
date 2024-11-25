int main () {
    int gfIXxYLtPD4b [100] [100], bnao1Jw3pbT [100] [100], UaPFjcEbT [100] [100] = {0};
    int o2QsYSjV0;
    int tRDvxc6Vw;
    int Z70iUWVPBl1;
    int EJbkyO;
    int B3u0ChakGEX;
    int uVYIpXv7KRm;
    int zi0nIOs8;
    scanf ("%d", &o2QsYSjV0);
    scanf ("%d", &tRDvxc6Vw);
    {
        B3u0ChakGEX = 0;
        while (B3u0ChakGEX < o2QsYSjV0) {
            for (uVYIpXv7KRm = 0; uVYIpXv7KRm < tRDvxc6Vw; uVYIpXv7KRm = uVYIpXv7KRm + 1) {
                scanf ("%d", &gfIXxYLtPD4b[B3u0ChakGEX][uVYIpXv7KRm]);
            }
            B3u0ChakGEX = B3u0ChakGEX +1;
        }
    }
    scanf ("%d", &Z70iUWVPBl1);
    scanf ("%d", &EJbkyO);
    {
        B3u0ChakGEX = 0;
        while (Z70iUWVPBl1 > B3u0ChakGEX) {
            {
                uVYIpXv7KRm = 0;
                while (uVYIpXv7KRm < EJbkyO) {
                    scanf ("%d", &bnao1Jw3pbT[B3u0ChakGEX][uVYIpXv7KRm]);
                    uVYIpXv7KRm = uVYIpXv7KRm + 1;
                }
            }
            B3u0ChakGEX++;
        }
    }
    for (B3u0ChakGEX = 0; B3u0ChakGEX < o2QsYSjV0; B3u0ChakGEX = B3u0ChakGEX +1) {
        uVYIpXv7KRm = 0;
        while (uVYIpXv7KRm < EJbkyO) {
            for (zi0nIOs8 = 0; zi0nIOs8 < Z70iUWVPBl1; zi0nIOs8 = zi0nIOs8 + 1)
                UaPFjcEbT[B3u0ChakGEX][uVYIpXv7KRm] = UaPFjcEbT[B3u0ChakGEX][uVYIpXv7KRm] + gfIXxYLtPD4b[B3u0ChakGEX][zi0nIOs8] * bnao1Jw3pbT[zi0nIOs8][uVYIpXv7KRm];
            uVYIpXv7KRm = uVYIpXv7KRm + 1;
        }
    }
    {
        B3u0ChakGEX = 0;
        while (B3u0ChakGEX < o2QsYSjV0) {
            for (uVYIpXv7KRm = 0; uVYIpXv7KRm < EJbkyO; uVYIpXv7KRm++) {
                if (uVYIpXv7KRm == EJbkyO -1)
                    printf ("%d\n", UaPFjcEbT[B3u0ChakGEX][uVYIpXv7KRm]);
                else
                    printf ("%d ", UaPFjcEbT[B3u0ChakGEX][uVYIpXv7KRm]);
            }
            B3u0ChakGEX++;
        }
    }
}

