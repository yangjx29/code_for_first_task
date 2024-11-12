int main () {
    int VEjG1fc, QBsfT5zgEnrX, ViGcVEB5w6l;
    int rb0mvw5qYUSh, n4ldzq;
    int UgBGls [6] [6];
    {
        rb0mvw5qYUSh = 0;
        while (rb0mvw5qYUSh < 5) {
            for (n4ldzq = 0; n4ldzq < 5; n4ldzq++) {
                scanf ("%d", &UgBGls[rb0mvw5qYUSh][n4ldzq]);
            }
            rb0mvw5qYUSh = rb0mvw5qYUSh + 1;
        };
    }
    scanf ("%d %d", &VEjG1fc, &QBsfT5zgEnrX);
    if (VEjG1fc >= 0 && VEjG1fc < 5 && QBsfT5zgEnrX >= 0 && QBsfT5zgEnrX < 5) {
        {
            rb0mvw5qYUSh = 0;
            while (rb0mvw5qYUSh < 5) {
                rb0mvw5qYUSh++;
                {
                    n4ldzq = 0;
                    while (n4ldzq < 5) {
                        ViGcVEB5w6l = UgBGls[VEjG1fc][n4ldzq];
                        UgBGls[VEjG1fc][n4ldzq] = UgBGls[QBsfT5zgEnrX][n4ldzq];
                        UgBGls[QBsfT5zgEnrX][n4ldzq] = ViGcVEB5w6l;
                        n4ldzq = n4ldzq + 1;
                    };
                };
            };
        }
        {
            rb0mvw5qYUSh = 0;
            while (rb0mvw5qYUSh < 5) {
                {
                    n4ldzq = 0;
                    while (n4ldzq < 4) {
                        printf ("%d ", UgBGls[rb0mvw5qYUSh][n4ldzq]);
                        n4ldzq++;
                    };
                }
                printf ("%d\n", UgBGls[rb0mvw5qYUSh][4]);
                rb0mvw5qYUSh++;
            };
        };
    }
    else
        printf ("error");
    return 0;
}

