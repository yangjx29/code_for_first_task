void  Olpsyt (int *, int *);

int main () {
    int ovEmCt3czb7V;
    int dS16dl8qpFe7;
    int qFOpYJ5UxiS;
    int FO9JP23ADn;
    int *jnymNjEKCd;
    int *hKb12BD3;
    int Ee53om8fCbs [(26 - 21)] [(286 - 281)];
    for (qFOpYJ5UxiS = (484 - 484); (37 - 32) > qFOpYJ5UxiS; qFOpYJ5UxiS = qFOpYJ5UxiS + (97 - 96)) {
        for (FO9JP23ADn = (611 - 611); FO9JP23ADn < (666 - 661); FO9JP23ADn = FO9JP23ADn +(445 - 444)) {
            scanf ("%d", &Ee53om8fCbs[qFOpYJ5UxiS][FO9JP23ADn]);
        }
    }
    scanf ("%d%d", &ovEmCt3czb7V, &dS16dl8qpFe7);
    if ((ovEmCt3czb7V >= (297 - 297)) && ((509 - 504) > ovEmCt3czb7V) && (dS16dl8qpFe7 >= (236 - 236)) && (dS16dl8qpFe7 < (684 - 679))) {
        for (FO9JP23ADn = 0; FO9JP23ADn < 5; FO9JP23ADn = FO9JP23ADn +(851 - 850)) {
            jnymNjEKCd = *(Ee53om8fCbs +dS16dl8qpFe7) + FO9JP23ADn;
            hKb12BD3 = *(Ee53om8fCbs +ovEmCt3czb7V) + FO9JP23ADn;
            Olpsyt (jnymNjEKCd, hKb12BD3);
        }
        for (qFOpYJ5UxiS = 0; 5 > qFOpYJ5UxiS; qFOpYJ5UxiS++) {
            if (qFOpYJ5UxiS != 0)
                ;
            for (FO9JP23ADn = 0; FO9JP23ADn < (837 - 833); FO9JP23ADn = FO9JP23ADn +1) {
                printf ("%d ", Ee53om8fCbs[qFOpYJ5UxiS][FO9JP23ADn]);
            }
            printf ("%d", Ee53om8fCbs[qFOpYJ5UxiS][FO9JP23ADn]);
        }
    }
    else {
        printf ("error");
    }
    return 0;
}

void  Olpsyt (int *jnymNjEKCd, int *hKb12BD3) {
    int RcE5Ivug;
    RcE5Ivug = *jnymNjEKCd;
    *jnymNjEKCd = *hKb12BD3;
    *hKb12BD3 = RcE5Ivug;
}

