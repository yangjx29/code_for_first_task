int main () {
    int Eri0bVzY;
    int i;
    int kRBn8DEfHsvN;
    int RBPW5vdk;
    char DjMHcdR [100];
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
    scanf ("%d", &Eri0bVzY);
    getchar ();
    {
        i = 0;
        while (Eri0bVzY > i) {
            gets (DjMHcdR);
            RBPW5vdk = strlen (DjMHcdR);
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
            if (!(('A' <= DjMHcdR[0] && 'Z' >= DjMHcdR[0]) || ('a' <= DjMHcdR[0] && 'z' >= DjMHcdR[0]) || !('_' != DjMHcdR[0]))) {
                printf ("0\n");
            }
            else {
                for (kRBn8DEfHsvN = 1; kRBn8DEfHsvN < RBPW5vdk; kRBn8DEfHsvN = kRBn8DEfHsvN + 1) {
                    if (!(('0' <= DjMHcdR[kRBn8DEfHsvN] && DjMHcdR[kRBn8DEfHsvN] <= '9') || (DjMHcdR[kRBn8DEfHsvN] >= 'A' && DjMHcdR[kRBn8DEfHsvN] <= 'Z') || (DjMHcdR[kRBn8DEfHsvN] >= 'a' && DjMHcdR[kRBn8DEfHsvN] <= 'z') || DjMHcdR[kRBn8DEfHsvN] == '_')) {
                        kRBn8DEfHsvN = RBPW5vdk +1;
                        printf ("0\n");
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (kRBn8DEfHsvN == RBPW5vdk)
                    printf ("1\n");
            }
            i = i + 1;
        };
    }
    getchar ();
    getchar ();
    getchar ();
}

