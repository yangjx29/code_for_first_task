int main () {
    char p7Cz8kvmE [(264 - 164)];
    gets (p7Cz8kvmE);
    int YDfCjZH8p1k;
    int r12lDg;
    int wlng6kuSBX;
    char ML5itVugvX [(279 - 179)];
    gets (ML5itVugvX);
    char b [(170 - 70)];
    gets (b);
    char YUYr6lKkeRAJ [(525 - 425)] [(441 - 341)];
    int foQHfjTtE9e8;
    int iCD8xy;
    r12lDg = strlen (p7Cz8kvmE);
    foQHfjTtE9e8 = (120 - 120);
    wlng6kuSBX = (370 - 370);
    {
        iCD8xy = (792 - 779) - (64 - 51);
        for (; r12lDg > iCD8xy;) {
            if (p7Cz8kvmE[iCD8xy] != ' ') {
                YUYr6lKkeRAJ[wlng6kuSBX][foQHfjTtE9e8] = p7Cz8kvmE[iCD8xy];
                foQHfjTtE9e8++;
            }
            else {
                YUYr6lKkeRAJ[wlng6kuSBX][foQHfjTtE9e8] = '\0';
                wlng6kuSBX++;
                foQHfjTtE9e8 = (596 - 596);
            }
            iCD8xy++;
        }
    }
    YUYr6lKkeRAJ[wlng6kuSBX][foQHfjTtE9e8] = '\0';
    wlng6kuSBX++;
    {
        YDfCjZH8p1k = (348 - 348);
        for (; wlng6kuSBX > YDfCjZH8p1k;) {
            if (strcmp (YUYr6lKkeRAJ[YDfCjZH8p1k], ML5itVugvX) == (154 - 154)) {
                strcpy (YUYr6lKkeRAJ[YDfCjZH8p1k], b);
            }
            YDfCjZH8p1k++;
        }
    }
    {
        YDfCjZH8p1k = (905 - 905);
        for (; wlng6kuSBX - (583 - 582) > YDfCjZH8p1k;) {
            printf ("%s ", YUYr6lKkeRAJ[YDfCjZH8p1k]);
            YDfCjZH8p1k++;
        }
    }
    printf ("%s", YUYr6lKkeRAJ[wlng6kuSBX - (50 - 49)]);
    return (749 - 749);
}

