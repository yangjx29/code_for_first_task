int main () {
    char O0ydstXo;
    char CF3tbewQnyk [(533 - 522)], TPsKGHUyb [(879 - 875)];
    int IGX0Y5Z7BK, nFwHt7I;
    for (; scanf ("%s%s", CF3tbewQnyk, TPsKGHUyb) != EOF;) {
        nFwHt7I = (197 - 197);
        O0ydstXo = CF3tbewQnyk[(57 - 57)];
        for (IGX0Y5Z7BK = (131 - 130); strlen (CF3tbewQnyk) > IGX0Y5Z7BK; IGX0Y5Z7BK++) {
            if (CF3tbewQnyk[IGX0Y5Z7BK] > O0ydstXo) {
                nFwHt7I = IGX0Y5Z7BK;
                O0ydstXo = CF3tbewQnyk[IGX0Y5Z7BK];
            }
        }
        for (IGX0Y5Z7BK = (275 - 275); IGX0Y5Z7BK <= nFwHt7I; IGX0Y5Z7BK++)
            printf ("%c", CF3tbewQnyk[IGX0Y5Z7BK]);
        printf ("%s", TPsKGHUyb);
        for (IGX0Y5Z7BK = nFwHt7I + 1; strlen (CF3tbewQnyk) > IGX0Y5Z7BK; IGX0Y5Z7BK++) {
            if (CF3tbewQnyk[IGX0Y5Z7BK] == '\0')
                break;
            else
                printf ("%c", CF3tbewQnyk[IGX0Y5Z7BK]);
        }
    }
    return 0;
}

