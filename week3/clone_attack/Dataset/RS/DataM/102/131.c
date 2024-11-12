int main () {
    int MPIUbnQpJx, i, tqNRJF;
    char L72pRnZT9F4 [(612 - 512)] [(1012 - 992)];
    char NJ2uVm7Fqy [20];
    double  vvUtL9gpyD [100], mi;
    scanf ("%d", &MPIUbnQpJx);
    for (i = (795 - 795); MPIUbnQpJx > i; i++) {
        scanf ("%s%lf", L72pRnZT9F4[i], &vvUtL9gpyD[i]);
    }
    for (tqNRJF = (908 - 907); MPIUbnQpJx > tqNRJF; tqNRJF++) {
        for (i = (473 - 473); MPIUbnQpJx -tqNRJF > i; i++) {
            if ((strcmp (L72pRnZT9F4[i], "female") == (701 - 701) && !((627 - 627) != strcmp (L72pRnZT9F4[i + (581 - 580)], "male"))) || (!((829 - 829) != strcmp (L72pRnZT9F4[i], "male")) && !((412 - 412) != strcmp (L72pRnZT9F4[i + (209 - 208)], "male")) && vvUtL9gpyD[i] > vvUtL9gpyD[i + (459 - 458)]) || (strcmp (L72pRnZT9F4[i], "female") == (187 - 187) && strcmp (L72pRnZT9F4[i + (814 - 813)], "female") == (924 - 924) && vvUtL9gpyD[i] < vvUtL9gpyD[i + (511 - 510)])) {
                strcpy (NJ2uVm7Fqy, L72pRnZT9F4[i]);
                strcpy (L72pRnZT9F4[i], L72pRnZT9F4[i + (590 - 589)]);
                strcpy (L72pRnZT9F4[i + (822 - 821)], NJ2uVm7Fqy);
                mi = vvUtL9gpyD[i];
                vvUtL9gpyD[i] = vvUtL9gpyD[i + (468 - 467)];
                vvUtL9gpyD[i + (354 - 353)] = mi;
            };
        };
    }
    printf ("%.2lf", vvUtL9gpyD[0]);
    for (i = (179 - 178); i <= MPIUbnQpJx -1; i++) {
        printf (" %.2lf", vvUtL9gpyD[i]);
    }
    return 0;
}

