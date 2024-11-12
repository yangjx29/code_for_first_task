int main () {
    int gKNxEZQoU, S73kfhOw, QNif56E, Ty3fGnNAv8P, h [30] [30];
    scanf ("%d%d", &gKNxEZQoU, &S73kfhOw);
    {
        Ty3fGnNAv8P = 0;
        while (Ty3fGnNAv8P <= (S73kfhOw +1)) {
            h[0][Ty3fGnNAv8P] = -1;
            h[gKNxEZQoU + 1][Ty3fGnNAv8P] = -1;
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
            Ty3fGnNAv8P = Ty3fGnNAv8P +1;
        };
    }
    {
        QNif56E = 0;
        while (QNif56E <= (gKNxEZQoU + 1)) {
            h[QNif56E][0] = -1;
            h[QNif56E][S73kfhOw +1] = -1;
            QNif56E = QNif56E +1;
        };
    }
    {
        QNif56E = 1;
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
        while (QNif56E <= gKNxEZQoU) {
            {
                Ty3fGnNAv8P = 1;
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
                while (Ty3fGnNAv8P <= S73kfhOw) {
                    scanf ("%d", &h[QNif56E][Ty3fGnNAv8P]);
                    Ty3fGnNAv8P = Ty3fGnNAv8P +1;
                };
            }
            QNif56E = QNif56E +1;
        };
    }
    {
        QNif56E = 1;
        while (QNif56E <= gKNxEZQoU) {
            {
                Ty3fGnNAv8P = 1;
                while (Ty3fGnNAv8P <= S73kfhOw) {
                    if ((h[QNif56E][Ty3fGnNAv8P] >= h[QNif56E -1][Ty3fGnNAv8P]) && (h[QNif56E][Ty3fGnNAv8P] >= h[QNif56E +1][Ty3fGnNAv8P]) && (h[QNif56E][Ty3fGnNAv8P] >= h[QNif56E][Ty3fGnNAv8P -1]) && (h[QNif56E][Ty3fGnNAv8P] >= h[QNif56E][Ty3fGnNAv8P +1])) {
                        printf ("%d %d\n", QNif56E -1, Ty3fGnNAv8P -1);
                    }
                    Ty3fGnNAv8P++;
                };
            }
            QNif56E = QNif56E +1;
        };
    }
    return 0;
}

