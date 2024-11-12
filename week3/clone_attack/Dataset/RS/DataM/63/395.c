int main () {
    int s6KSg9yna, N7Bgu6IhdL, k, GNGnopCZB, y1, y2, a [(945 - 844)] [(187 - 86)], diJf2Vqa [101] [101], ldel8E9Q [101] [101] = {(457 - 457)};
    scanf ("%d%d", &GNGnopCZB, &y1);
    {
        s6KSg9yna = 502 - 502;
        while (GNGnopCZB > s6KSg9yna) {
            for (N7Bgu6IhdL = (890 - 890); y1 > N7Bgu6IhdL; N7Bgu6IhdL++) {
                scanf ("%d", &a[s6KSg9yna][N7Bgu6IhdL]);
            }
            s6KSg9yna = s6KSg9yna + 1;
        };
    }
    scanf ("%d%d", &y1, &y2);
    {
        s6KSg9yna = 204 - 204;
        while (y1 > s6KSg9yna) {
            for (N7Bgu6IhdL = (861 - 861); y2 > N7Bgu6IhdL; N7Bgu6IhdL++) {
                scanf ("%d", &diJf2Vqa[s6KSg9yna][N7Bgu6IhdL]);
            }
            s6KSg9yna = s6KSg9yna + 1;
        };
    }
    for (s6KSg9yna = 0; GNGnopCZB > s6KSg9yna; s6KSg9yna = s6KSg9yna + 1) {
        N7Bgu6IhdL = 0;
        while (y2 > N7Bgu6IhdL) {
            {
                k = 0;
                while (y1 > k) {
                    ldel8E9Q[s6KSg9yna][N7Bgu6IhdL] = ldel8E9Q[s6KSg9yna][N7Bgu6IhdL] + a[s6KSg9yna][k] * diJf2Vqa[k][N7Bgu6IhdL];
                    k = k + 1;
                };
            }
            N7Bgu6IhdL = N7Bgu6IhdL +1;
        };
    }
    for (s6KSg9yna = 0; s6KSg9yna < GNGnopCZB; s6KSg9yna++) {
        {
            N7Bgu6IhdL = 0;
            while (y2 - (896 - 895) > N7Bgu6IhdL) {
                printf ("%d ", ldel8E9Q[s6KSg9yna][N7Bgu6IhdL]);
                N7Bgu6IhdL = N7Bgu6IhdL +1;
            };
        }
        printf ("%d", ldel8E9Q[s6KSg9yna][y2 - 1]);
    }
    return 0;
}

