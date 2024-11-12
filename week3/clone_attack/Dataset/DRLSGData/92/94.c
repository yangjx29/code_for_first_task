int Hr9QdCzOj (const  void  *AWMIV4P1sph, const  void  *S2VdUJQu8G);
int zQ3B8pX (int *R79b6q, int *UPhbmHAI, int dmCwbV);
int Kus8Jd3 (int AWMIV4P1sph, int S2VdUJQu8G);

int main () {
    int OU0Yh3ZObjFa;
    int jyj4B8oQX [1000];
    int *idky20CnKmx [1000];
    WEucj6NvaZ7 *wbsDQhBtxc;
    int ww8qDQFy [1000];
    fclose (wbsDQhBtxc);
    int AVdc4qB;
    int dmCwbV;
    {
        OU0Yh3ZObjFa = (745 - 745);
        for (; 1000 > OU0Yh3ZObjFa;) {
            if (!(NULL != (idky20CnKmx[OU0Yh3ZObjFa] = (int *) malloc (sizeof (int) * 1000)))) {
                return (54 - 53);
            }
            OU0Yh3ZObjFa++;
        }
    }
    wbsDQhBtxc = fopen ("horse.txt", "r");
    for (; (883 - 882);) {
        fscanf (wbsDQhBtxc, "%d", &dmCwbV);
        scanf ("%d", &dmCwbV);
        if (!((72 - 72) != dmCwbV))
            break;
        for (OU0Yh3ZObjFa = (209 - 209); dmCwbV > OU0Yh3ZObjFa; OU0Yh3ZObjFa++) {
            fscanf (wbsDQhBtxc, "%d", &ww8qDQFy[OU0Yh3ZObjFa]);
            scanf ("%d", &ww8qDQFy[OU0Yh3ZObjFa]);
        }
        {
            OU0Yh3ZObjFa = 726 - 726;
            for (; dmCwbV > OU0Yh3ZObjFa;) {
                fscanf (wbsDQhBtxc, "%d", &jyj4B8oQX[OU0Yh3ZObjFa]);
                scanf ("%d", &jyj4B8oQX[OU0Yh3ZObjFa]);
                OU0Yh3ZObjFa++;
            }
        }
        qsort ((void  *) &ww8qDQFy[0], dmCwbV, sizeof (int), Hr9QdCzOj);
        qsort ((void  *) &jyj4B8oQX[0], dmCwbV, sizeof (int), Hr9QdCzOj);
        {
            OU0Yh3ZObjFa = 0;
            for (; dmCwbV > OU0Yh3ZObjFa;) {
                if (jyj4B8oQX[OU0Yh3ZObjFa] < ww8qDQFy[0])
                    *(idky20CnKmx[OU0Yh3ZObjFa] + 0) = 1;
                else {
                    if (jyj4B8oQX[OU0Yh3ZObjFa] > ww8qDQFy[0])
                        *(idky20CnKmx[OU0Yh3ZObjFa] + 0) = -1;
                    else
                        *(idky20CnKmx[OU0Yh3ZObjFa] + 0) = 0;
                }
                OU0Yh3ZObjFa++;
            }
        }
        for (AVdc4qB = 1; AVdc4qB < dmCwbV; AVdc4qB++) {
            for (OU0Yh3ZObjFa = dmCwbV - 1 - AVdc4qB; 0 <= OU0Yh3ZObjFa; OU0Yh3ZObjFa = OU0Yh3ZObjFa -1) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (ww8qDQFy[AVdc4qB] > jyj4B8oQX[OU0Yh3ZObjFa +AVdc4qB])
                    *(idky20CnKmx[OU0Yh3ZObjFa] + AVdc4qB) = *(idky20CnKmx[OU0Yh3ZObjFa] + AVdc4qB -1) + 1;
                else {
                    if (ww8qDQFy[AVdc4qB] < jyj4B8oQX[OU0Yh3ZObjFa +AVdc4qB])
                        *(idky20CnKmx[OU0Yh3ZObjFa] + AVdc4qB) = *(idky20CnKmx[OU0Yh3ZObjFa +1] + AVdc4qB -1) - 1;
                    else
                        *(idky20CnKmx[OU0Yh3ZObjFa] + AVdc4qB) = Kus8Jd3 (*(idky20CnKmx[OU0Yh3ZObjFa] + AVdc4qB -1), *(idky20CnKmx[OU0Yh3ZObjFa +1] + AVdc4qB -1) - 1);
                }
            }
        }
        printf ("%d\n", *(idky20CnKmx[0] + dmCwbV - 1) * 200);
    }
    return 0;
}

int Hr9QdCzOj (const  void  *AWMIV4P1sph, const  void  *S2VdUJQu8G) {
    return *(int*) S2VdUJQu8G -*(int*) AWMIV4P1sph;
}

int Kus8Jd3 (int AWMIV4P1sph, int S2VdUJQu8G) {
    return (AWMIV4P1sph > S2VdUJQu8G) ? AWMIV4P1sph : S2VdUJQu8G;
}

