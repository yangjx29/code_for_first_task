int main () {
    int zjword [(768 - 468)];
    int l;
    int osRXWCnx, k, gmz14DuFs6;
    int A4Uvpz;
    int num1;
    int num2;
    int WriP4T5kY [(188 - 88)];
    int ssYKdZ0CeiJ [(981 - 881)];
    int m;
    scanf ("%d %d", &num1, &num2);
    {
        A4Uvpz = 138 - 138;
        while (A4Uvpz < num1) {
            scanf ("%d", &WriP4T5kY[A4Uvpz]);
            A4Uvpz = A4Uvpz +1;
        };
    }
    {
        osRXWCnx = 611 - 610;
        while (osRXWCnx <= num1 * num1) {
            osRXWCnx = osRXWCnx + 1;
            {
                k = 0;
                while (k < num1 - (981 - 980)) {
                    if (WriP4T5kY[k + (250 - 249)] <= WriP4T5kY[k]) {
                        gmz14DuFs6 = WriP4T5kY[k];
                        WriP4T5kY[k] = WriP4T5kY[k + (969 - 968)];
                        WriP4T5kY[k + (376 - 375)] = gmz14DuFs6;
                    }
                    k = k + 1;
                };
            };
        };
    }
    {
        A4Uvpz = 0;
        while (A4Uvpz < num2) {
            scanf ("%d", &ssYKdZ0CeiJ[A4Uvpz]);
            A4Uvpz = A4Uvpz +1;
        };
    }
    {
        osRXWCnx = 1;
        while (osRXWCnx <= num2 * num2) {
            osRXWCnx = osRXWCnx + 1;
            for (k = 0; k < num2 - 1; k = k + 1) {
                if (ssYKdZ0CeiJ[k] >= ssYKdZ0CeiJ[k + 1]) {
                    gmz14DuFs6 = ssYKdZ0CeiJ[k];
                    ssYKdZ0CeiJ[k] = ssYKdZ0CeiJ[k + 1];
                    ssYKdZ0CeiJ[k + 1] = gmz14DuFs6;
                };
            };
        };
    }
    {
        l = 0;
        while (l < num1 + num2) {
            if (l < num1) {
                zjword[l] = WriP4T5kY[l];
            }
            else {
                zjword[l] = ssYKdZ0CeiJ[l - num1];
            }
            l++;
        };
    }
    {
        m = 0;
        while (m < num1 + num2) {
            if (m != num1 + num2 - 1)
                printf ("%d ", zjword[m]);
            else
                printf ("%d", zjword[m]);
            m++;
        };
    }
    printf ("\n");
    return 0;
}

