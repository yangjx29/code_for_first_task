int main () {
    void  pf3Tq1 (char dwuyPz3b8 [], int SNx41wToPVp, int zq6m7henlbXu, char N7WvVmqCwg9b, char zuUl1k8Jyw);
    int SNx41wToPVp;
    char dwuyPz3b8 [101] = {'\0'};
    char N7WvVmqCwg9b;
    char zuUl1k8Jyw;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin.getline (dwuyPz3b8, 100);
    N7WvVmqCwg9b = dwuyPz3b8[(329 - 329)];
    {
        SNx41wToPVp = 0;
        while (dwuyPz3b8[SNx41wToPVp] != 0) {
            SNx41wToPVp = SNx41wToPVp +1;
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
        };
    }
    zuUl1k8Jyw = dwuyPz3b8[SNx41wToPVp -1];
    pf3Tq1 (dwuyPz3b8, SNx41wToPVp, SNx41wToPVp, N7WvVmqCwg9b, zuUl1k8Jyw);
    return 0;
}

void  pf3Tq1 (char dwuyPz3b8 [], int SNx41wToPVp, int zq6m7henlbXu, char N7WvVmqCwg9b, char zuUl1k8Jyw) {
    int t2vOnU6MYQFb;
    int O8LWKDhkM;
    int ZlWDmLCt;
    t2vOnU6MYQFb = 0;
    O8LWKDhkM = zq6m7henlbXu;
    if (0 < zq6m7henlbXu) {
        {
            t2vOnU6MYQFb = 0;
            while (dwuyPz3b8[t2vOnU6MYQFb] != zuUl1k8Jyw) {
                t2vOnU6MYQFb++;
            };
        }
        {
            ZlWDmLCt = t2vOnU6MYQFb - 1;
            while (dwuyPz3b8[ZlWDmLCt] != N7WvVmqCwg9b &&ZlWDmLCt > -1) {
                ZlWDmLCt = ZlWDmLCt -1;
            };
        }
        cout << ZlWDmLCt << ' ' << t2vOnU6MYQFb << endl;
        dwuyPz3b8[t2vOnU6MYQFb] = 0;
        dwuyPz3b8[ZlWDmLCt] = 0;
        O8LWKDhkM = zq6m7henlbXu - 2;
        pf3Tq1 (dwuyPz3b8, SNx41wToPVp, O8LWKDhkM, N7WvVmqCwg9b, zuUl1k8Jyw);
    };
}

