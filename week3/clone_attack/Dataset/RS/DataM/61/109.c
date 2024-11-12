int main () {
    int *Bd8iMLntUXHD;
    int jRVTHauvyi6r;
    int Qoy8AzG;
    int j;
    int DOjvAilkebrT;
    scanf ("%d", &Qoy8AzG);
    for (j = 0; Qoy8AzG > j; j++) {
        scanf ("%d", &DOjvAilkebrT);
        if (2 < DOjvAilkebrT) {
            printf ("%d\n", *(Bd8iMLntUXHD +DOjvAilkebrT-1));
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
            {
                jRVTHauvyi6r = 2;
                while (jRVTHauvyi6r < DOjvAilkebrT) {
                    *(Bd8iMLntUXHD +jRVTHauvyi6r) = *(Bd8iMLntUXHD +jRVTHauvyi6r - 1) + *(Bd8iMLntUXHD +jRVTHauvyi6r - 2);
                    jRVTHauvyi6r++;
                };
            };
        }
        else
            printf ("%d\n", *(Bd8iMLntUXHD +DOjvAilkebrT-1));
    }
    Bd8iMLntUXHD = (int *) malloc ((10806 - 806) * sizeof (int));
    *(Bd8iMLntUXHD +1) = *Bd8iMLntUXHD = 1;
}

