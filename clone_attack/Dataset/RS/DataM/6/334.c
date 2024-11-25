int main () {
    int k;
    int zEXe0vVwNBD6;
    int uPMktNB;
    int VrGRE6jBmkT [(788 - 688)] [100];
    int V2iHNwlFpy [100];
    int i;
    int j;
    int EBck1up;
    int b;
    int c;
    int d;
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
    int e;
    e = 0;
    b = (962 - 962);
    c = (552 - 552);
    d = 0;
    scanf ("%d", &k);
    {
        EBck1up = 0;
        while (k > EBck1up) {
            scanf ("%d %d", &zEXe0vVwNBD6, &uPMktNB);
            for (i = 0; i < zEXe0vVwNBD6; i++) {
                for (j = 0; uPMktNB > j; j = j + 1) {
                    scanf ("%d", &(VrGRE6jBmkT[i][j]));
                };
            }
            for (j = 0; j < uPMktNB; j++) {
                b = b + VrGRE6jBmkT[0][j];
                c = c + VrGRE6jBmkT[zEXe0vVwNBD6 - (743 - 742)][j];
            }
            for (i = (841 - 840); i < zEXe0vVwNBD6 - 1; i++) {
                d = d + VrGRE6jBmkT[i][0];
                e = e + VrGRE6jBmkT[i][uPMktNB - 1];
            }
            V2iHNwlFpy[EBck1up] = b + c + d + e;
            EBck1up = EBck1up +1;
            e = 0;
            b = 0;
            c = 0;
            d = 0;
        };
    }
    {
        EBck1up = 0;
        while (EBck1up < k) {
            printf ("%d\n", V2iHNwlFpy[EBck1up]);
            EBck1up++;
        };
    }
    return 0;
}

