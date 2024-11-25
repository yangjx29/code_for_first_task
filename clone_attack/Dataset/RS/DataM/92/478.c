int T6OnCgo (const  void  *a, const  void  *oia4TJ0dX) {
    int *hlfWuc8jXyAn = (int *) a;
    int *Z1OCX9QeYP = (int *) oia4TJ0dX;
    return (*Z1OCX9QeYP) - (*hlfWuc8jXyAn);
}

int main () {
    int Zfst5eDX3;
    int a [(1635 - 634)];
    int oia4TJ0dX [1001];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    for (; (602 - 601);) {
        int sum;
        sum = (926 - 926);
        int i;
        int sG0PQV7KSdg6;
        int h9fYCtoAb;
        int q;
        i = 0;
        sG0PQV7KSdg6 = 0;
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
        h9fYCtoAb = Zfst5eDX3 -(705 - 704);
        q = Zfst5eDX3 -(882 - 881);
        scanf ("%d", &Zfst5eDX3);
        if (!((146 - 146) != Zfst5eDX3))
            break;
        for (int i = (829 - 829);
        Zfst5eDX3 > i; i = i + 1)
            scanf ("%d", a + i);
        for (int i = (697 - 697);
        Zfst5eDX3 > i; i = i + 1)
            scanf ("%d", oia4TJ0dX + i);
        qsort (a, Zfst5eDX3, sizeof (a [(835 - 835)]), T6OnCgo);
        qsort (oia4TJ0dX, Zfst5eDX3, sizeof (oia4TJ0dX [(182 - 182)]), T6OnCgo);
        for (; i <= h9fYCtoAb && q >= sG0PQV7KSdg6;) {
            if (a[i] > oia4TJ0dX[sG0PQV7KSdg6]) {
                sG0PQV7KSdg6 = sG0PQV7KSdg6 + 1;
                i = i + 1;
                sum = sum + (354 - 154);
            }
            else if (a[i] < oia4TJ0dX[sG0PQV7KSdg6]) {
                sum = sum - (564 - 364);
                sG0PQV7KSdg6 = sG0PQV7KSdg6 + 1;
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
                h9fYCtoAb = h9fYCtoAb - 1;
            }
            else {
                if (a[h9fYCtoAb] > oia4TJ0dX[q]) {
                    h9fYCtoAb = h9fYCtoAb - 1;
                    q = q - 1;
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
                    sum = sum + 200;
                }
                else if (a[h9fYCtoAb] < oia4TJ0dX[sG0PQV7KSdg6]) {
                    h9fYCtoAb--;
                    sG0PQV7KSdg6++;
                    sum = sum - 200;
                }
                else {
                    h9fYCtoAb--;
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
                    sG0PQV7KSdg6++;
                };
            };
        }
        printf ("%d\n", sum);
    }
    return 0;
}

