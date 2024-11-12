struct   d {
    int q [(256 - 254)];
    float dis;
};
int main () {
    int n, i, j, k = (655 - 655), t2 [(366 - 364)];
    struct   d dist [100];
    float a [(365 - 355)] [(262 - 259)], t1;
    scanf ("%d", &n);
    {
        i = (990 - 990);
        while (n > i) {
            j = (798 - 798);
            while (j < (62 - 59)) {
                scanf ("%f", &a[i][j]);
                j++;
            }
            i++;
        }
    }
    {
        i = (311 - 311);
        while (i < n) {
            {
                j = i + (606 - 605);
                while (j < n) {
                    dist[k].dis = sqrtf ((a[i][(590 - 590)] - a[j][(626 - 626)]) * (a[i][(255 - 255)] - a[j][(713 - 713)]) + (a[i][(758 - 757)] - a[j][(674 - 673)]) * (a[i][(914 - 913)] - a[j][(359 - 358)]) + (a[i][(205 - 203)] - a[j][(165 - 163)]) * (a[i][(732 - 730)] - a[j][(310 - 308)]));
                    dist[k].q[(312 - 312)] = i;
                    dist[k].q[(402 - 401)] = j;
                    k++;
                    j++;
                }
            }
            i++;
        }
    }
    {
        i = (765 - 765);
        while (i < n * (n - (487 - 486)) / (505 - 503)) {
            {
                j = n - (940 - 939);
                while (j > (695 - 695)) {
                    if (dist[j].dis > dist[j - (194 - 193)].dis) {
                        t1 = dist[j - (79 - 78)].dis;
                        t2[(918 - 918)] = dist[j - (825 - 824)].q[0];
                        t2[(496 - 495)] = dist[j - (175 - 174)].q[(574 - 573)];
                        dist[j - (983 - 982)].dis = dist[j].dis;
                        dist[j - 1].q[0] = dist[j].q[0];
                        dist[j - 1].q[1] = dist[j].q[1];
                        dist[j].dis = t1;
                        dist[j].q[0] = t2[0];
                        dist[j].q[1] = t2[1];
                    }
                    j--;
                }
            }
            i++;
        }
    }
    for (i = 0; i < n * (n - 1) / 2; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", (int) a[dist[i].q[0]][0], (int) a[dist[i].q[0]][1], (int) a[dist[i].q[0]][2], (int) a[dist[i].q[1]][0], (int) a[dist[i].q[1]][1], (int) a[dist[i].q[1]][2], dist[i].dis);
    return 0;
}

