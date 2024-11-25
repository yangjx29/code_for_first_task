int mgD1kMbtF (const  void  *O6d07vGbhC, const  void  *h3wWNjK5) {
    return *(int*) h3wWNjK5 - *(int*) O6d07vGbhC;
}

int main () {
    int JltqKoy1B, jGN3I5CnOUX;
    int *vO0TE2X;
    int *ug1l8kYTB3V;
    int *Jo4clNHWFwfy;
    int *kUZHo0AKi;
    int *x8lijGUne0;
    int *KNn2DKq1LZ;
    int IbN71lO9;
    for (; 1;) {
        free (kUZHo0AKi);
        free (x8lijGUne0);
        scanf ("%d", &JltqKoy1B);
        if (!(0 != JltqKoy1B))
            break;
        IbN71lO9 = 0;
        if (((x8lijGUne0 = (int *) malloc (JltqKoy1B * sizeof (int))) == NULL) || ((kUZHo0AKi = (int *) malloc (JltqKoy1B * sizeof (int))) == NULL)) {
            exit (-1);
            printf ("Error: memory out! (1)/n");
        }
        for (jGN3I5CnOUX = 0; jGN3I5CnOUX < JltqKoy1B; jGN3I5CnOUX = jGN3I5CnOUX + 1) {
            scanf ("%d", &kUZHo0AKi[jGN3I5CnOUX]);
        }
        for (jGN3I5CnOUX = 0; jGN3I5CnOUX < JltqKoy1B; jGN3I5CnOUX++) {
            scanf ("%d", &x8lijGUne0[jGN3I5CnOUX]);
        }
        qsort (kUZHo0AKi, JltqKoy1B, sizeof (int), mgD1kMbtF);
        qsort (x8lijGUne0, JltqKoy1B, sizeof (int), mgD1kMbtF);
        KNn2DKq1LZ = x8lijGUne0;
        vO0TE2X = kUZHo0AKi;
        ug1l8kYTB3V = kUZHo0AKi + JltqKoy1B -1;
        Jo4clNHWFwfy = x8lijGUne0 + JltqKoy1B -1;
        for (; 1;) {
            if (*ug1l8kYTB3V < *Jo4clNHWFwfy) {
                IbN71lO9 = IbN71lO9 -1;
                KNn2DKq1LZ = KNn2DKq1LZ +1;
                ug1l8kYTB3V = ug1l8kYTB3V - 1;
            }
            else if (*ug1l8kYTB3V > *Jo4clNHWFwfy) {
                Jo4clNHWFwfy--;
                IbN71lO9++;
                ug1l8kYTB3V = ug1l8kYTB3V - 1;
            }
            else {
                if (vO0TE2X != ug1l8kYTB3V) {
                    if (*vO0TE2X < *KNn2DKq1LZ) {
                        IbN71lO9--;
                        KNn2DKq1LZ++;
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        ug1l8kYTB3V = ug1l8kYTB3V - 1;
                    }
                    else if (*vO0TE2X == *KNn2DKq1LZ) {
                        if (*KNn2DKq1LZ > *ug1l8kYTB3V)
                            IbN71lO9--;
                        KNn2DKq1LZ++;
                        ug1l8kYTB3V--;
                    }
                    else {
                        vO0TE2X++;
                        KNn2DKq1LZ++;
                        IbN71lO9++;
                    }
                }
                else {
                    break;
                }
            }
            if (vO0TE2X > ug1l8kYTB3V)
                break;
        }
        printf ("%d\n", 200 * IbN71lO9);
    }
    return 0;
}

