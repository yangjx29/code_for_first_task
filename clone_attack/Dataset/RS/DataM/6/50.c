int main () {
    int tanjKu0J;
    int k8JYyaH;
    int i, nh0xZnkL7DGe, l;
    int ZLhMJKxa = (1000 - 1000);
    int k;
    int RLD43x [(1024 - 924)] [(944 - 844)] = {(269 - 269)};
    scanf ("%d", &k);
    for (i = 0; k > i; i++) {
        scanf ("%d%d", &tanjKu0J, &k8JYyaH);
        if (!(1 != k8JYyaH) && tanjKu0J == 1) {
            scanf ("%d", &ZLhMJKxa);
            printf ("%d", ZLhMJKxa);
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
            ZLhMJKxa = 0;
        }
        else {
            for (nh0xZnkL7DGe = 0; nh0xZnkL7DGe < tanjKu0J; nh0xZnkL7DGe++) {
                for (l = 0; l < k8JYyaH; l = l + 1) {
                    scanf ("%d", *(RLD43x +nh0xZnkL7DGe) + l);
                };
            }
            for (l = 0; l < k8JYyaH; l++) {
                ZLhMJKxa = ZLhMJKxa +*(*(RLD43x +0) + l) + *(*(RLD43x +tanjKu0J - 1) + l);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            for (l = 0; l < tanjKu0J; l++) {
                ZLhMJKxa = ZLhMJKxa +*(*(RLD43x +l) + 0) + *(*(RLD43x +l) + k8JYyaH - 1);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            ZLhMJKxa = ZLhMJKxa -*(*(RLD43x +0) + 0) - *(*(RLD43x +0) + k8JYyaH - 1) - *(*(RLD43x +tanjKu0J - 1) + 0) - *(*(RLD43x +tanjKu0J - 1) + k8JYyaH - 1);
            printf ("%d\n", ZLhMJKxa);
            ZLhMJKxa = 0;
        };
    }
    return 0;
}

