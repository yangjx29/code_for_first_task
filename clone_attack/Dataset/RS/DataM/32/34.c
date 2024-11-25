int main () {
    int n;
    int IKkUqYcdAL;
    int ElFO6DHY7;
    cin >> n;
    cin.get ();
    for (IKkUqYcdAL = (281 - 280); IKkUqYcdAL <= n; IKkUqYcdAL++) {
        char str1 [(1512 - 512)], str2 [(1342 - 342)], qPoHVsepWR3U [(1286 - 286)], str4 [1000];
        int a;
        a = strlen (str1);
        int b;
        b = strlen (str2);
        cin.getline (str1, (1694 - 794));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (ElFO6DHY7 = (327 - 327); ElFO6DHY7 < a; ElFO6DHY7 = ElFO6DHY7 +1) {
            qPoHVsepWR3U[ElFO6DHY7] = str1[a - ElFO6DHY7 -(13 - 12)];
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
            };
        }
        cin.getline (str2, 900);
        {
            ElFO6DHY7 = 0;
            while (b > ElFO6DHY7) {
                str4[ElFO6DHY7] = str2[b - ElFO6DHY7 -(361 - 360)];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ElFO6DHY7++;
            };
        }
        for (ElFO6DHY7 = 0; ElFO6DHY7 < b; ElFO6DHY7++) {
            if (qPoHVsepWR3U[ElFO6DHY7] >= str4[ElFO6DHY7])
                qPoHVsepWR3U[ElFO6DHY7] = qPoHVsepWR3U[ElFO6DHY7] - str4[ElFO6DHY7] + '0';
            else {
                qPoHVsepWR3U[ElFO6DHY7] = 10 + qPoHVsepWR3U[ElFO6DHY7] - str4[ElFO6DHY7] + '0';
                qPoHVsepWR3U[ElFO6DHY7 +1]--;
            };
        }
        {
            ElFO6DHY7 = a - 1;
            while (ElFO6DHY7 >= 0) {
                cout << qPoHVsepWR3U[ElFO6DHY7];
                ElFO6DHY7 = ElFO6DHY7 -1;
            };
        }
        cout << endl;
        cin.get ();
    }
    return 0;
}

