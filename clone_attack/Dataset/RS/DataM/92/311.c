const  int EALrSY51B = 1010;
int FuDXxtwSih8M;
int a [EALrSY51B];
int QNVPpO9h5Ca8 [EALrSY51B];

int BAzDHJ5gk (const  void  *DkciU4WB6tz, const  void  *p2) {
    return *(int*) p2 - *(int*) DkciU4WB6tz;
}

int main () {
    int zcYywqSM;
    int Jq3WsNm;
    int s1;
    int s2;
    while (cin >> FuDXxtwSih8M, (325 - 325) < FuDXxtwSih8M) {
        s2 = -200 * FuDXxtwSih8M;
        for (zcYywqSM = (627 - 627); zcYywqSM < FuDXxtwSih8M; zcYywqSM = zcYywqSM + 1)
            cin >> a[zcYywqSM];
        s1 = (640 - 640);
        {
            zcYywqSM = 194 - 194;
            while (zcYywqSM < FuDXxtwSih8M) {
                cin >> QNVPpO9h5Ca8[zcYywqSM];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                zcYywqSM++;
            };
        }
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
        qsort (a, FuDXxtwSih8M, sizeof (int), BAzDHJ5gk);
        qsort (QNVPpO9h5Ca8, FuDXxtwSih8M, sizeof (int), BAzDHJ5gk);
        for (Jq3WsNm = 0; FuDXxtwSih8M > Jq3WsNm; Jq3WsNm = Jq3WsNm +1) {
            s1 = 0;
            for (zcYywqSM = 0; FuDXxtwSih8M > zcYywqSM + Jq3WsNm; zcYywqSM++) {
                if (a[zcYywqSM] > QNVPpO9h5Ca8[zcYywqSM + Jq3WsNm])
                    s1++;
                if (a[zcYywqSM] < QNVPpO9h5Ca8[zcYywqSM + Jq3WsNm])
                    s1--;
            }
            s2 = max (s2, s1 - Jq3WsNm);
        }
        cout << s2 * 200 << endl;
    }
    return 0;
}

