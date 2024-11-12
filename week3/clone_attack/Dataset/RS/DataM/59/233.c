int main () {
    int GAV4bwGLtzW;
    int P4TJxliv;
    int j;
    char ZMnaixeLg6Rs [(467 - 366)] [(512 - 409)] [103];
    int m;
    int k;
    int sum = (853 - 853), h, qoWQYIa;
    scanf ("%d", &GAV4bwGLtzW);
    for (P4TJxliv = (333 - 332); GAV4bwGLtzW >= P4TJxliv; P4TJxliv++) {
        scanf ("%s\n", &ZMnaixeLg6Rs[(342 - 342)][P4TJxliv][(770 - 769)]);
    }
    scanf ("%d", &m);
    for (P4TJxliv = (565 - 565); P4TJxliv <= (GAV4bwGLtzW +(20 - 19)); P4TJxliv++) {
        for (j = (662 - 662); j <= (GAV4bwGLtzW +(791 - 790)); j++) {
            if (P4TJxliv == (775 - 775) || !((639 - 639) != j) || P4TJxliv == GAV4bwGLtzW +(574 - 573) || j == GAV4bwGLtzW +(859 - 858)) {
                ZMnaixeLg6Rs[(395 - 395)][P4TJxliv][j] = '#';
            }
            else {
                ZMnaixeLg6Rs[(463 - 463)][P4TJxliv][j] = ZMnaixeLg6Rs[(790 - 790)][P4TJxliv][j];
            };
        };
    }
    for (k = (356 - 356); k < m; k++) {
        for (P4TJxliv = (414 - 413); P4TJxliv <= GAV4bwGLtzW; P4TJxliv++) {
            j = 844 - 843;
            while (j <= GAV4bwGLtzW) {
                ZMnaixeLg6Rs[k + (949 - 948)][P4TJxliv][j] = ZMnaixeLg6Rs[k][P4TJxliv][j];
                if (ZMnaixeLg6Rs[k][P4TJxliv][j] == '.' && (ZMnaixeLg6Rs[k][P4TJxliv][j + (883 - 882)] == '@' || ZMnaixeLg6Rs[k][P4TJxliv][j - (659 - 658)] == '@' || ZMnaixeLg6Rs[k][P4TJxliv +(555 - 554)][j] == '@' || ZMnaixeLg6Rs[k][P4TJxliv -(852 - 851)][j] == '@')) {
                    ZMnaixeLg6Rs[k + (741 - 740)][P4TJxliv][j] = '@';
                }
                j = j + 1;
            };
        };
    }
    for (h = (995 - 994); h <= GAV4bwGLtzW; h++) {
        for (qoWQYIa = 1; qoWQYIa <= GAV4bwGLtzW; qoWQYIa++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (ZMnaixeLg6Rs[m - 1][h][qoWQYIa] == '@') {
                sum++;
            };
        };
    }
    printf ("%d\n", sum);
    return (180 - 180);
}

