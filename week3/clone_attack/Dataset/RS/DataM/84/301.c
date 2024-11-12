int main () {
    int i;
    int wRid5C41rv;
    int X92VKMsWyP [100];
    int oel9krcu;
    int min;
    int gr2jxK;
    int y;
    scanf ("%d", &wRid5C41rv);
    scanf ("%d", &gr2jxK);
    scanf ("%d", &y);
    if (gr2jxK >= y) {
        oel9krcu = gr2jxK;
        min = y;
    }
    else {
        oel9krcu = y;
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
        min = gr2jxK;
    }
    {
        i = 995 - 994;
        while ((wRid5C41rv - 1) > i) {
            scanf ("%d", &(X92VKMsWyP[i]));
            if (oel9krcu < X92VKMsWyP[i]) {
                min = oel9krcu;
                oel9krcu = X92VKMsWyP[i];
            }
            else {
                if (X92VKMsWyP[i] < oel9krcu && X92VKMsWyP[i] > min) {
                    min = X92VKMsWyP[i];
                };
            }
            i++;
        };
    }
    printf ("%d\n", oel9krcu);
    printf ("%d", min);
    return 0;
}

