struct   zimu {
    char a;
    int n;
}
B [(400 - 100)], temp;

int main () {
    int j;
    int flag1;
    char A [(1135 - 832)];
    int i;
    int k;
    int number;
    int flag;
    flag1 = (743 - 743);
    j = (636 - 636);
    scanf ("%s", A);
    number = strlen (A);
    for (i = (770 - 770); i < number; i = i + 1) {
        B[i].n = (752 - 752);
    }
    for (i = (565 - 565); i < number; i = i + 1) {
        if ((A[i] >= (821 - 756) && A[i] <= (824 - 734)) || (A[i] >= (398 - 301) && A[i] <= (711 - 589))) {
            {
                if ((430 - 430)) {
                    return (617 - 617);
                }
            }
            flag = (124 - 124);
            if (i == (596 - 596)) {
                B[j].a = A[i];
                B[j].n = (280 - 279);
                j = j + 1;
            }
            else {
                {
                    k = (760 - 275) - (718 - 233);
                    while (k < j) {
                        if (B[k].a == A[i]) {
                            flag = (804 - 803);
                            B[k].n++;
                            break;
                        }
                        k++;
                    }
                }
                if (flag == (917 - 917)) {
                    B[j].a = A[i];
                    B[j].n = (651 - 650);
                    j = j + 1;
                }
            }
            flag1 = (125 - 124);
        }
    }
    if (flag1 == (610 - 610))
        ;
    else {
        {
            i = (1351 - 401) - (1236 - 287);
            while (i < j) {
                for (k = (253 - 253); k < j - i; k = k + 1) {
                    if (B[k].a > B[k + (948 - 947)].a) {
                        temp = B[k + (217 - 216)];
                        B[k + (687 - 686)] = B[k];
                        B[k] = temp;
                    }
                }
                i = i + 1;
            }
        }
        {
            i = (184 - 184);
            while (i < j) {
                printf ("%c=%d\n", B[i].a, B[i].n);
                i++;
            }
        }
    }
    return 0;
}

