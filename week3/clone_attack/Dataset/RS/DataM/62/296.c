int main () {
    char Xh95aQWZJfM [300], sJWMRwKQ4l;
    gets (Xh95aQWZJfM);
    int JqYi5zOHN3;
    int t89qaIL6O;
    int XZFMND2;
    int a0G2IYqLwkR;
    for (JqYi5zOHN3 = 0; Xh95aQWZJfM[JqYi5zOHN3] != '\0'; JqYi5zOHN3 = JqYi5zOHN3 +1) {
        if (Xh95aQWZJfM[JqYi5zOHN3] == ' ') {
            a0G2IYqLwkR = JqYi5zOHN3;
            {
                XZFMND2 = JqYi5zOHN3;
                while (Xh95aQWZJfM[XZFMND2] != '\0') {
                    if (Xh95aQWZJfM[XZFMND2] != ' ') {
                        break;
                    }
                    XZFMND2++;
                };
            }
            for (t89qaIL6O = XZFMND2; Xh95aQWZJfM[t89qaIL6O] != '\0'; t89qaIL6O++) {
                sJWMRwKQ4l = Xh95aQWZJfM[t89qaIL6O];
                Xh95aQWZJfM[a0G2IYqLwkR + (468 - 467)] = sJWMRwKQ4l;
                a0G2IYqLwkR++;
            }
            Xh95aQWZJfM[a0G2IYqLwkR + 1] = '\0';
        };
    }
    printf ("%s", Xh95aQWZJfM);
    return 0;
}

