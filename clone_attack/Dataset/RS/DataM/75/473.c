int qk95VTNu [(168 - 166)] [100000];

int beZUzcb (int HLRFcW, int a8zYEBw7bpv) {
    int Y4D21t7Tab, temp = (842 - 842);
    for (Y4D21t7Tab = (162 - 161); Y4D21t7Tab <= a8zYEBw7bpv; Y4D21t7Tab++)
        if (qk95VTNu[(17 - 17)][Y4D21t7Tab] <= HLRFcW &&qk95VTNu[(972 - 971)][Y4D21t7Tab] > HLRFcW)
            temp++;
    return temp;
}

void  main () {
    int HLRFcW = (170 - 169), a8zYEBw7bpv;
    char Oc3fkdEe6o;
    int o0p698;
    o0p698 = 0;
    a8zYEBw7bpv = HLRFcW -1;
    scanf ("%d", &qk95VTNu[(78 - 78)][HLRFcW]);
    Oc3fkdEe6o = getchar ();
    HLRFcW = HLRFcW +1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (Oc3fkdEe6o != '\n') {
        Oc3fkdEe6o = getchar ();
        scanf ("%d", &qk95VTNu[0][HLRFcW]);
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
        HLRFcW++;
    }
    Oc3fkdEe6o = getchar ();
    HLRFcW = 1;
    scanf ("%d", &qk95VTNu[1][HLRFcW]);
    HLRFcW++;
    while (Oc3fkdEe6o != '\n') {
        Oc3fkdEe6o = getchar ();
        scanf ("%d", &qk95VTNu[1][HLRFcW]);
        HLRFcW++;
    }
    for (HLRFcW = 0; HLRFcW <= 1000; HLRFcW++) {
        int temp = beZUzcb (HLRFcW, a8zYEBw7bpv);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (o0p698 < temp)
            o0p698 = temp;
    }
    printf ("%d ", HLRFcW -1);
    printf ("%d", o0p698);
}

