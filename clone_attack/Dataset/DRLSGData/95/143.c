int main (int BriFezDUE, char *iQVrn6 []) {
    int hGtQ9O3ouUP = 0, hSxqkw;
    char yxy1QerasT [80], KCuY08L [80];
    gets (yxy1QerasT);
    gets (KCuY08L);
    {
        hSxqkw = 0;
        while (yxy1QerasT[hSxqkw] != '\0' && KCuY08L[hSxqkw] != '\0') {
            if ('A' <= yxy1QerasT[hSxqkw] && yxy1QerasT[hSxqkw] <= 'Z') {
                yxy1QerasT[hSxqkw] = yxy1QerasT[hSxqkw] - ('A' - 'a');
            }
            if (KCuY08L[hSxqkw] >= 'A' && 'Z' >= KCuY08L[hSxqkw]) {
                KCuY08L[hSxqkw] = KCuY08L[hSxqkw] - ('A' - 'a');
            }
            hSxqkw++;
        }
    }
    {
        hSxqkw = 0;
        while (yxy1QerasT[hSxqkw] != '\0' && KCuY08L[hSxqkw] != '\0') {
            if (KCuY08L[hSxqkw] < yxy1QerasT[hSxqkw]) {
                hGtQ9O3ouUP = 1;
                break;
            }
            else if (KCuY08L[hSxqkw] > yxy1QerasT[hSxqkw]) {
                hGtQ9O3ouUP = 1;
                break;
            }
            hSxqkw++;
        }
    }
    if (hGtQ9O3ouUP == 0)
        ;
    return 0;
}

