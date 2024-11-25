int main () {
    char GazRuTBGsV [1000] [300];
    char b [1000] [300];
    int GMOv4dKRQ;
    int i;
    int yA5qzsKdo;
    int Bfhn9MWlcN2;
    scanf ("%d", &GMOv4dKRQ);
    for (i = 0; GMOv4dKRQ > i; i = i + 1) {
        scanf ("%s", GazRuTBGsV[i]);
    }
    {
        i = 0;
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
        while (GMOv4dKRQ > i) {
            {
                Bfhn9MWlcN2 = 0;
                yA5qzsKdo = 0;
                while (GazRuTBGsV[i][yA5qzsKdo]) {
                    if (!('A' != GazRuTBGsV[i][yA5qzsKdo])) {
                        b[i][Bfhn9MWlcN2] = 'T';
                        Bfhn9MWlcN2 = Bfhn9MWlcN2 +1;
                    }
                    if (!('T' != GazRuTBGsV[i][yA5qzsKdo])) {
                        b[i][Bfhn9MWlcN2] = 'A';
                        Bfhn9MWlcN2 = Bfhn9MWlcN2 +1;
                    }
                    if (GazRuTBGsV[i][yA5qzsKdo] == 'C') {
                        b[i][Bfhn9MWlcN2] = 'G';
                        Bfhn9MWlcN2 = Bfhn9MWlcN2 +1;
                    }
                    if (GazRuTBGsV[i][yA5qzsKdo] == 'G') {
                        b[i][Bfhn9MWlcN2] = 'C';
                        Bfhn9MWlcN2++;
                    }
                    yA5qzsKdo++;
                };
            }
            b[i][Bfhn9MWlcN2] = '\0';
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < GMOv4dKRQ) {
            printf ("%s\n", b[i]);
            i++;
        };
    }
    return 0;
}

