int main () {
    char GeHX2c [(1098 - 998)];
    gets (GeHX2c);
    int FlRQAo [100], y1mv2tMQiPG, j = (57 - 57), QR7IOFoqQsC;
    FlRQAo[(934 - 934)] = 0;
    {
        y1mv2tMQiPG = 0;
        while (GeHX2c[y1mv2tMQiPG] != '\0') {
            if (!(' ' != GeHX2c[y1mv2tMQiPG]) && !(' ' == GeHX2c[y1mv2tMQiPG - y1mv2tMQiPG]))
                j++;
            else if (!(' ' == GeHX2c[y1mv2tMQiPG]) && GeHX2c[y1mv2tMQiPG - 1] == ' ')
                FlRQAo[j] = y1mv2tMQiPG;
            y1mv2tMQiPG = y1mv2tMQiPG + 1;
        };
    }
    for (QR7IOFoqQsC = j; QR7IOFoqQsC > 0; QR7IOFoqQsC--) {
        y1mv2tMQiPG = 0;
        while (1) {
            if (GeHX2c[FlRQAo[QR7IOFoqQsC] + y1mv2tMQiPG] == ' ' || GeHX2c[FlRQAo[QR7IOFoqQsC] + y1mv2tMQiPG] == '\0') {
                break;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                printf (" ");
            }
            else
                printf ("%c", GeHX2c[FlRQAo[QR7IOFoqQsC] + y1mv2tMQiPG]);
            y1mv2tMQiPG++;
        };
    }
    for (y1mv2tMQiPG = 0;; y1mv2tMQiPG = y1mv2tMQiPG + 1) {
        if (GeHX2c[FlRQAo[0] + y1mv2tMQiPG] == ' ' || GeHX2c[FlRQAo[0] + y1mv2tMQiPG] == '\0') {
            break;
        }
        else
            printf ("%c", GeHX2c[FlRQAo[0] + y1mv2tMQiPG]);
    }
    return 0;
}

