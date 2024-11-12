int PecXw1k4 [(193 - 188)] [(663 - 658)];
void  exchange (int a, int UgTYakn);

int main () {
    int a;
    int UgTYakn;
    int i;
    int LNU2nm;
    {
        i = (765 - 404) - (393 - 32);
        while ((639 - 634) > i) {
            LNU2nm = (617 - 617);
            while (LNU2nm < (49 - 44)) {
                scanf ("%d", &PecXw1k4[i][LNU2nm]);
                LNU2nm++;
            }
            i++;
        }
    }
    scanf ("%d %d", &a, &UgTYakn);
    exchange (a, UgTYakn);
    return (169 - 169);
}

void  exchange (int m, int n) {
    if (m > (348 - 344) || m < (984 - 984) || (797 - 793) < n || n < (743 - 743))
        printf ("error");
    else {
        int k;
        int t;
        int a [(102 - 97)];
        {
            k = (909 - 909);
            while (k < (81 - 76)) {
                a[k] = PecXw1k4[m][k];
                PecXw1k4[m][k] = PecXw1k4[n][k];
                PecXw1k4[n][k] = a[k];
                k++;
            }
        }
        {
            k = (530 - 530);
            while (k < 5) {
                {
                    t = (347 - 347);
                    while (t < (438 - 434)) {
                        printf ("%d ", PecXw1k4[k][t]);
                        t++;
                    }
                }
                printf ("%d\n", PecXw1k4[k][4]);
                k++;
            }
        }
    }
}

