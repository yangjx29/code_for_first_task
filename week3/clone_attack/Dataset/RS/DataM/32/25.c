void  main () {
    char vQ8rZ4ps [1000];
    char UiDh4Rb [1000];
    char QSEd8pNlnQ [1000];
    int zDUSuO6, G3eHwnY8, WbDJIgMB, yAqJL4S3, bajeUOhTGF, x0UJq95;
    scanf ("%d\n", &zDUSuO6);
    for (G3eHwnY8 = 1; zDUSuO6 >= G3eHwnY8; G3eHwnY8 = G3eHwnY8 +1) {
        scanf ("%s", vQ8rZ4ps);
        scanf ("%s", UiDh4Rb);
        yAqJL4S3 = strlen (vQ8rZ4ps);
        bajeUOhTGF = strlen (UiDh4Rb);
        for (WbDJIgMB = yAqJL4S3 - 1; 0 <= WbDJIgMB; WbDJIgMB--) {
            if (yAqJL4S3 - bajeUOhTGF <= WbDJIgMB) {
                if (UiDh4Rb[WbDJIgMB -yAqJL4S3 + bajeUOhTGF] <= vQ8rZ4ps[WbDJIgMB])
                    QSEd8pNlnQ[WbDJIgMB] = vQ8rZ4ps[WbDJIgMB] - UiDh4Rb[WbDJIgMB -yAqJL4S3 + bajeUOhTGF] + 48;
                else {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (vQ8rZ4ps[WbDJIgMB] < UiDh4Rb[WbDJIgMB -yAqJL4S3 + bajeUOhTGF]) {
                        QSEd8pNlnQ[WbDJIgMB] = 10 + vQ8rZ4ps[WbDJIgMB] - UiDh4Rb[WbDJIgMB -yAqJL4S3 + bajeUOhTGF] + 48;
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
                        vQ8rZ4ps[WbDJIgMB -1] = vQ8rZ4ps[WbDJIgMB -1] - 1;
                    };
                };
            }
            else
                QSEd8pNlnQ[WbDJIgMB] = vQ8rZ4ps[WbDJIgMB];
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
            };
        }
        QSEd8pNlnQ[yAqJL4S3] = 0;
        for (WbDJIgMB = 0; WbDJIgMB < yAqJL4S3; WbDJIgMB = WbDJIgMB +1)
            if (QSEd8pNlnQ[WbDJIgMB] != 48) {
                x0UJq95 = WbDJIgMB;
                break;
            }
        {
            WbDJIgMB = x0UJq95;
            while (WbDJIgMB < yAqJL4S3) {
                printf ("%c", QSEd8pNlnQ[WbDJIgMB]);
                WbDJIgMB = WbDJIgMB +1;
            };
        }
        printf ("\n");
    };
}

