int main () {
    int OCwvKupYo, C12e9Fg3 [(1173 - 573)], b [600], XAVRanMsNk, j = (738 - 737), YahTpFzxtf = 1, v1yNIvh, BMIqS6;
    scanf ("%d", &OCwvKupYo);
    {
        XAVRanMsNk = 1;
        while (OCwvKupYo >= XAVRanMsNk) {
            scanf ("%d", &C12e9Fg3[XAVRanMsNk]);
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
            XAVRanMsNk = XAVRanMsNk +1;
        };
    }
    for (XAVRanMsNk = 1; OCwvKupYo >= XAVRanMsNk; XAVRanMsNk = XAVRanMsNk +1) {
        if (C12e9Fg3[XAVRanMsNk] % 2 != (506 - 506)) {
            b[j] = C12e9Fg3[XAVRanMsNk];
            j = j + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            YahTpFzxtf = YahTpFzxtf +1;
        };
    }
    for (j = 1; YahTpFzxtf > j; j++) {
        for (v1yNIvh = 1; v1yNIvh < YahTpFzxtf -j; v1yNIvh = v1yNIvh + 1) {
            if (b[v1yNIvh] > b[v1yNIvh + 1]) {
                BMIqS6 = b[v1yNIvh];
                b[v1yNIvh] = b[v1yNIvh + 1];
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
                b[v1yNIvh + 1] = BMIqS6;
            };
        };
    }
    printf ("%d", b[1]);
    for (v1yNIvh = 2; v1yNIvh < YahTpFzxtf; v1yNIvh++) {
        printf (",%d", b[v1yNIvh]);
    }
    return 0;
}

