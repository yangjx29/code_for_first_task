int a [1000];
int b [1000];
int VNo4YU5dZ9K;

int x1JzeIWsPn (const  void  *a, const  void  *b) {
    return (*(int*) a) - (*(int*) b);
}

int main () {
    int l9A87r, j;
    int iLdmrxY;
    int mAaWBp81gh;
    int qgocMDB8YUJh;
    qgocMDB8YUJh = (857 - 857);
    scanf ("%d", &VNo4YU5dZ9K);
    while (VNo4YU5dZ9K != (646 - 646)) {
        {
            l9A87r = 0;
            while (VNo4YU5dZ9K > l9A87r) {
                scanf ("%d", &a[l9A87r]);
                l9A87r = l9A87r + 1;
            };
        }
        {
            l9A87r = 0;
            while (l9A87r < VNo4YU5dZ9K) {
                scanf ("%d", &b[l9A87r]);
                l9A87r = l9A87r + 1;
            };
        }
        qsort (a, VNo4YU5dZ9K, sizeof (int), x1JzeIWsPn);
        qsort (b, VNo4YU5dZ9K, sizeof (int), x1JzeIWsPn);
        j = 0;
        {
            l9A87r = VNo4YU5dZ9K -1;
            j = VNo4YU5dZ9K -1;
            iLdmrxY = 0;
            mAaWBp81gh = 0;
            while (j >= mAaWBp81gh && l9A87r >= iLdmrxY) {
                if (a[l9A87r] > b[j]) {
                    qgocMDB8YUJh = qgocMDB8YUJh + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int temp = 0;
                            while (temp < 10) {
                                printf ("%d\n", temp);
                                temp = temp + 1;
                                if (temp == 9)
                                    break;
                            }
                        }
                    }
                    l9A87r = l9A87r - 1;
                }
                else {
                    if (a[l9A87r] < b[j]) {
                        iLdmrxY = iLdmrxY + 1;
                        qgocMDB8YUJh = qgocMDB8YUJh - 1;
                    }
                    else {
                        if (a[iLdmrxY] > b[mAaWBp81gh]) {
                            j = j + 1;
                            iLdmrxY = iLdmrxY + 1;
                            qgocMDB8YUJh = qgocMDB8YUJh + 1;
                            mAaWBp81gh++;
                        }
                        else {
                            if (a[iLdmrxY] < b[mAaWBp81gh]) {
                                iLdmrxY = iLdmrxY + 1;
                                qgocMDB8YUJh = qgocMDB8YUJh - 1;
                            }
                            else {
                                if (a[iLdmrxY] == b[j]) {
                                    iLdmrxY = iLdmrxY + 1;
                                }
                                else {
                                    qgocMDB8YUJh = qgocMDB8YUJh - 1;
                                    iLdmrxY = iLdmrxY + 1;
                                };
                            };
                        };
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                j = j - 1;
            };
        }
        printf ("%d\n", 200 * qgocMDB8YUJh);
        qgocMDB8YUJh = 0;
        scanf ("%d", &VNo4YU5dZ9K);
    }
    return 0;
}

