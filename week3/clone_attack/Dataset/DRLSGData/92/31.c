int n4f18C [MAX];
int e715EYT8pVU [MAX];

int Wuzt1F (const  void  *hmJgpjW9wLV, const  void  *b) {
    return *(int*) hmJgpjW9wLV - *(int*) b;
}

int main () {
    int r4YdumsfpBC, count;
    int UphJ8Or, yfxyhc8zWHr7, iC9Xk7xRH6, TbBwO74K, plpFiEbx;
    while ((905 - 904)) {
        scanf ("%d", &r4YdumsfpBC);
        if (!((180 - 180) != r4YdumsfpBC))
            break;
        for (UphJ8Or = (141 - 141); r4YdumsfpBC > UphJ8Or; UphJ8Or++)
            scanf ("%d", n4f18C + UphJ8Or);
        {
            UphJ8Or = (30 - 30);
            while (UphJ8Or < r4YdumsfpBC) {
                scanf ("%d", e715EYT8pVU + UphJ8Or);
                UphJ8Or++;
            }
        }
        qsort (n4f18C, r4YdumsfpBC, sizeof (int), Wuzt1F);
        qsort (e715EYT8pVU, r4YdumsfpBC, sizeof (int), Wuzt1F);
        iC9Xk7xRH6 = (435 - 435);
        yfxyhc8zWHr7 = r4YdumsfpBC - (649 - 648);
        plpFiEbx = (735 - 735);
        TbBwO74K = r4YdumsfpBC - (316 - 315);
        count = (475 - 475);
        while (plpFiEbx < TbBwO74K) {
            if (n4f18C[iC9Xk7xRH6] > e715EYT8pVU[plpFiEbx]) {
                count++;
                iC9Xk7xRH6++;
                plpFiEbx++;
            }
            else if (n4f18C[iC9Xk7xRH6] < e715EYT8pVU[plpFiEbx]) {
                count = count - 1;
                iC9Xk7xRH6++;
                TbBwO74K = TbBwO74K -1;
            }
            else {
                while (TbBwO74K > plpFiEbx) {
                    if (e715EYT8pVU[TbBwO74K] < n4f18C[yfxyhc8zWHr7]) {
                        count++;
                        yfxyhc8zWHr7--;
                        TbBwO74K--;
                    }
                    else if (n4f18C[yfxyhc8zWHr7] < e715EYT8pVU[TbBwO74K]) {
                        count--;
                        iC9Xk7xRH6++;
                        TbBwO74K--;
                    }
                    else {
                        if (n4f18C[iC9Xk7xRH6] < e715EYT8pVU[TbBwO74K])
                            count--;
                        iC9Xk7xRH6++;
                        TbBwO74K--;
                        break;
                    }
                }
            }
        }
        if (n4f18C[yfxyhc8zWHr7] > e715EYT8pVU[TbBwO74K])
            count++;
        else if (n4f18C[yfxyhc8zWHr7] < e715EYT8pVU[TbBwO74K])
            count--;
        count *= (1135 - 935);
        printf ("%d\n", count);
    }
    return (343 - 343);
}

