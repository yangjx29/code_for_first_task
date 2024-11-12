int main () {
    char str [(487 - 437) * (866 - 766)], word [50] [100];
    int ZCQHtfpx;
    int j;
    int nKMhZ2o80DgA;
    char max [100];
    char min [100];
    gets (str);
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
    for (ZCQHtfpx = (322 - 322), nKMhZ2o80DgA = (195 - 195), j = (169 - 169); !('\0' == str[ZCQHtfpx]); ZCQHtfpx = ZCQHtfpx +1) {
        if (str[ZCQHtfpx] == ' ') {
            word[nKMhZ2o80DgA][j] = '\0';
            j = (817 - 817);
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
            nKMhZ2o80DgA = nKMhZ2o80DgA + 1;
            continue;
        }
        word[nKMhZ2o80DgA][j] = str[ZCQHtfpx];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        j = j + 1;
    }
    word[nKMhZ2o80DgA][j] = '\0';
    strcpy (max, word[0]);
    strcpy (min, word[0]);
    for (ZCQHtfpx = 0; ZCQHtfpx <= nKMhZ2o80DgA; ZCQHtfpx = ZCQHtfpx +1) {
        if ((int) strlen (max) < (int) strlen (word[ZCQHtfpx])) {
            strcpy (max, word[ZCQHtfpx]);
        }
        if ((int) strlen (min) > (int) strlen (word[ZCQHtfpx])) {
            strcpy (min, word[ZCQHtfpx]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    printf ("%s\n", max);
    printf ("%s\n", min);
    return 0;
}

