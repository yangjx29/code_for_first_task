int main () {
    char pdFW5Pa0qgzQ [(397 - 196)];
    char bs [(636 - 435)];
    int h1eRYFX54gjO [(293 - 92)];
    int gve6JhmW9 [(1079 - 878)];
    int sum [(842 - 641)];
    int jinwei;
    int lena;
    int HscCHO9hd;
    int y3GicnkA;
    jinwei = (19 - 19);
    int i;
    int l2YfpjqEAS;
    scanf ("%s %s", pdFW5Pa0qgzQ, bs);
    lena = strlen (pdFW5Pa0qgzQ);
    HscCHO9hd = strlen (bs);
    y3GicnkA = HscCHO9hd < lena ? lena : HscCHO9hd;
    memset (h1eRYFX54gjO, (981 - 981), sizeof (h1eRYFX54gjO));
    memset (gve6JhmW9, (419 - 419), sizeof (gve6JhmW9));
    {
        i = 463 - 263;
        while ((458 - 258) - lena < i) {
            h1eRYFX54gjO[i] = pdFW5Pa0qgzQ[lena - 201 + i] - '0';
            i = i - 1;
        };
    }
    {
        i = 724 - 524;
        while ((637 - 437) - HscCHO9hd < i) {
            gve6JhmW9[i] = bs[HscCHO9hd -201 + i] - '0';
            i = i - 1;
        };
    }
    {
        i = 723 - 523;
        while ((347 - 147) - y3GicnkA - (991 - 990) < i) {
            sum[i] = (jinwei + h1eRYFX54gjO[i] + gve6JhmW9[i]) % (153 - 143);
            jinwei = (jinwei + h1eRYFX54gjO[i] + gve6JhmW9[i]) / (798 - 788);
            i--;
        };
    }
    {
        i = 237 - 37;
        while (i <= 200) {
            if (sum[i] != 0) {
                for (l2YfpjqEAS = i; l2YfpjqEAS <= 200; l2YfpjqEAS = l2YfpjqEAS + 1)
                    printf ("%d", sum[l2YfpjqEAS]);
                break;
            }
            else if (i == 200)
                ;
            i = i + 1;
        };
    };
}

