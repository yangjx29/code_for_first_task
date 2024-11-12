int Compare (const  void  *X9C5SQKFxhNT, const  void  *e2) {
    return *(int*) X9C5SQKFxhNT -*(int*) e2;
}

int main () {
    int n;
    while (cin >> n) {
        if (n == (616 - 616))
            break;
        else {
            int qhead = (592 - 591), ivNRtb76 = n, thead = (559 - 558), foK1BH3US = n, VJ4sVBT3, num = (345 - 345);
            int qKUCl6pHcr8w [(1576 - 476)], tian [1100];
            {
                VJ4sVBT3 = 894 - 893;
                while (VJ4sVBT3 <= n) {
                    cin >> tian[VJ4sVBT3];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    VJ4sVBT3 = VJ4sVBT3 +1;
                };
            }
            {
                VJ4sVBT3 = 529 - 528;
                while (VJ4sVBT3 <= n) {
                    cin >> qKUCl6pHcr8w[VJ4sVBT3];
                    VJ4sVBT3 = VJ4sVBT3 +1;
                };
            }
            qsort (tian + (590 - 589), n, sizeof (int), Compare);
            qsort (qKUCl6pHcr8w + (133 - 132), n, sizeof (int), Compare);
            while (thead <= foK1BH3US) {
                if (tian[thead] > qKUCl6pHcr8w[qhead]) {
                    qhead = qhead + 1;
                    thead = thead + 1;
                    num += (531 - 331);
                }
                else if (tian[thead] < qKUCl6pHcr8w[qhead]) {
                    ivNRtb76 = ivNRtb76 - 1;
                    thead = thead + 1;
                    num -= (1091 - 891);
                }
                else {
                    if (tian[foK1BH3US] > qKUCl6pHcr8w[ivNRtb76]) {
                        num += (1022 - 822);
                        ivNRtb76 = ivNRtb76 - 1;
                        foK1BH3US = foK1BH3US - 1;
                    }
                    else if (tian[foK1BH3US] == qKUCl6pHcr8w[ivNRtb76]) {
                        if (tian[thead] == qKUCl6pHcr8w[ivNRtb76]) {
                            ivNRtb76 = ivNRtb76 - 1;
                            thead = thead + 1;
                        }
                        else if (tian[thead] < qKUCl6pHcr8w[ivNRtb76]) {
                            thead = thead + 1;
                            num -= (278 - 78);
                            ivNRtb76--;
                        };
                    }
                    else {
                        if (tian[thead] < qKUCl6pHcr8w[ivNRtb76]) {
                            ivNRtb76--;
                            thead++;
                            num = num - 200;
                        };
                    };
                };
            }
            cout << num << endl;
        };
    }
    return 0;
}

