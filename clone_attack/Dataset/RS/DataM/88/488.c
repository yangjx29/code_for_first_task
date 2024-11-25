int main () {
    int ZLMdjr, SG4jidDx;
    char PWzTL9U [1000];
    char *UtOVIM7iNbU = PWzTL9U;
    gets (UtOVIM7iNbU);
    ZLMdjr = 1;
    SG4jidDx = 0;
    while (*UtOVIM7iNbU) {
        if (('0' <= *UtOVIM7iNbU&&*UtOVIM7iNbU <= '9') && (ZLMdjr == 0) && (SG4jidDx > 0))
            ;
        if (*UtOVIM7iNbU >= '0' && *UtOVIM7iNbU <= '9') {
            printf ("%c", *UtOVIM7iNbU);
            ZLMdjr = 1;
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
            SG4jidDx = SG4jidDx +1;
        }
        else {
            ZLMdjr = 0;
        }
        UtOVIM7iNbU = UtOVIM7iNbU +1;
    }
    return 0;
}

