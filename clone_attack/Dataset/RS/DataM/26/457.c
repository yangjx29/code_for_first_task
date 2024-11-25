int main () {
    int sZuQOrRSn;
    int w73vaFCKGpW;
    char JWw4JR2ih [1000];
    gets (JWw4JR2ih);
    w73vaFCKGpW = 0;
    {
        sZuQOrRSn = 0;
        while (JWw4JR2ih[sZuQOrRSn] != '\0') {
            if (JWw4JR2ih[sZuQOrRSn] == ' ') {
                if (JWw4JR2ih[sZuQOrRSn + 1] == ' ') {
                    continue;
                }
                else {
                    printf ("%c", JWw4JR2ih[sZuQOrRSn]);
                };
            }
            else {
                printf ("%c", JWw4JR2ih[sZuQOrRSn]);
            }
            sZuQOrRSn = sZuQOrRSn + 1;
        };
    }
    return 0;
}

