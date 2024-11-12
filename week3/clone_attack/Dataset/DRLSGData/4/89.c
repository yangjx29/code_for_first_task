int main () {
    int Im9AFfoHZ;
    int GQhuVdPvJ;
    int yqZVwO;
    int ZANanvl4x;
    int F0LSB7hJyG;
    int y7cJpjyZS [100] [100];
    int W3sGKmvqc4;
    int XEZyQPoHOe;
    W3sGKmvqc4 = 0;
    XEZyQPoHOe = 0;
    scanf ("%d %d", &F0LSB7hJyG, &ZANanvl4x);
    {
        Im9AFfoHZ = 0;
        while (F0LSB7hJyG -1 >= Im9AFfoHZ) {
            {
                GQhuVdPvJ = 0;
                while (ZANanvl4x -1 >= GQhuVdPvJ) {
                    scanf ("%d", &y7cJpjyZS[Im9AFfoHZ][GQhuVdPvJ]);
                    GQhuVdPvJ++;
                }
            }
            Im9AFfoHZ++;
        }
    }
    {
        yqZVwO = 1;
        while (ZANanvl4x >= yqZVwO) {
            Im9AFfoHZ = W3sGKmvqc4;
            GQhuVdPvJ = XEZyQPoHOe;
            XEZyQPoHOe = XEZyQPoHOe +1;
            printf ("%d\n", y7cJpjyZS[Im9AFfoHZ][GQhuVdPvJ]);
            while (F0LSB7hJyG -1 >= Im9AFfoHZ +1 && GQhuVdPvJ -1 >= 0) {
                GQhuVdPvJ = GQhuVdPvJ -1;
                Im9AFfoHZ = Im9AFfoHZ +1;
                printf ("%d\n", y7cJpjyZS[Im9AFfoHZ][GQhuVdPvJ]);
            }
            yqZVwO++;
        }
    }
    XEZyQPoHOe = ZANanvl4x -1;
    W3sGKmvqc4 = 1;
    for (yqZVwO = 2; yqZVwO <= F0LSB7hJyG; yqZVwO++) {
        GQhuVdPvJ = XEZyQPoHOe;
        Im9AFfoHZ = W3sGKmvqc4;
        printf ("%d\n", y7cJpjyZS[Im9AFfoHZ][GQhuVdPvJ]);
        while (Im9AFfoHZ +1 <= F0LSB7hJyG -1 && GQhuVdPvJ -1 >= 0) {
            Im9AFfoHZ = Im9AFfoHZ +1;
            GQhuVdPvJ = GQhuVdPvJ -1;
            printf ("%d\n", y7cJpjyZS[Im9AFfoHZ][GQhuVdPvJ]);
        }
        W3sGKmvqc4 = W3sGKmvqc4 +1;
    }
    return 0;
}

