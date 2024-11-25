void  qeUzi8VjJtxR (char *ZxKVZ0ay) {
    int OZmx2IQ0Xy = 0, j = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    while (!('\0' == ZxKVZ0ay[OZmx2IQ0Xy])) {
        while (!(*(ZxKVZ0ay +j) != *(ZxKVZ0ay +OZmx2IQ0Xy)))
            OZmx2IQ0Xy = OZmx2IQ0Xy +1;
        printf ("(%c,%d)", *(ZxKVZ0ay +j), OZmx2IQ0Xy -j);
        j = OZmx2IQ0Xy;
    };
}

int main () {
    char ZxKVZ0ay [1001];
    gets (ZxKVZ0ay);
    qeUzi8VjJtxR (ZxKVZ0ay);
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
    int OZmx2IQ0Xy;
    {
        OZmx2IQ0Xy = 0;
        while (ZxKVZ0ay[OZmx2IQ0Xy] != '\0') {
            if (ZxKVZ0ay[OZmx2IQ0Xy] >= 'a' && ZxKVZ0ay[OZmx2IQ0Xy] <= 'z')
                ZxKVZ0ay[OZmx2IQ0Xy] = ZxKVZ0ay[OZmx2IQ0Xy] - 'a' + 'A';
            OZmx2IQ0Xy++;
        };
    }
    return 0;
}

