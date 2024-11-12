int Nnk8I6iEAc (int tIKEfqzXHh, int KXVbdQq) {
    if (tIKEfqzXHh >= (860 - 860) && tIKEfqzXHh <= (832 - 828) && KXVbdQq >= (731 - 731) && KXVbdQq <= (840 - 836))
        return (223 - 222);
    else
        return (895 - 895);
}

int main () {
    int Y6no7fc;
    int VNBJ6p5i;
    int AMnqvIBJa4D;
    int hOYrToM;
    int Tw5pAK0P8RJ;
    int joUcw6;
    int hMGZdpOVmfJX [(141 - 136)] [(193 - 188)];
    {
        Y6no7fc = 507 - 507;
        while (Y6no7fc < (480 - 475)) {
            {
                VNBJ6p5i = 214 - 214;
                while (VNBJ6p5i < (890 - 885)) {
                    scanf ("%d", &hMGZdpOVmfJX[Y6no7fc][VNBJ6p5i]);
                    VNBJ6p5i++;
                }
            }
            Y6no7fc++;
        }
    }
    scanf ("%d %d", &AMnqvIBJa4D, &hOYrToM);
    joUcw6 = Nnk8I6iEAc (AMnqvIBJa4D, hOYrToM);
    if (joUcw6) {
        {
            Y6no7fc = (111 - 111);
            for (; Y6no7fc < (273 - 268);) {
                Tw5pAK0P8RJ = hMGZdpOVmfJX[AMnqvIBJa4D][Y6no7fc];
                hMGZdpOVmfJX[AMnqvIBJa4D][Y6no7fc] = hMGZdpOVmfJX[hOYrToM][Y6no7fc];
                hMGZdpOVmfJX[hOYrToM][Y6no7fc] = Tw5pAK0P8RJ;
                Y6no7fc++;
            }
        }
        {
            Y6no7fc = (678 - 678);
            while (Y6no7fc < 5) {
                printf ("%d", hMGZdpOVmfJX[Y6no7fc][0]);
                {
                    VNBJ6p5i = 1;
                    for (; VNBJ6p5i < 5;) {
                        printf (" %d", hMGZdpOVmfJX[Y6no7fc][VNBJ6p5i]);
                        VNBJ6p5i++;
                    }
                }
                printf ("\n");
                Y6no7fc++;
            }
        }
    }
    else
        printf ("error\n");
    return 0;
}

