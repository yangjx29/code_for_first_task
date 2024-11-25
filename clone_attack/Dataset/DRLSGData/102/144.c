int main () {
    int tKaf8I6LFWGN;
    double  e8gP0X [45];
    double  wUiSjymZNt0 [(932 - 892)];
    int UjVDv6GKQ2;
    int BOC6At;
    int KHYBh3cMt7;
    int lwXRJZ;
    int ZuON3ISV;
    char lK7d0rLUlI5 [(789 - 781)];
    double  qpJD9Oe0;
    int v5XIDaol;
    double  z4uMIJmwH [40];
    int ODXeIgLRV;
    int KuHs6mBh7dq;
    int mprxnN7g;
    KHYBh3cMt7 = (952 - 952);
    lwXRJZ = (480 - 480);
    scanf ("%d", &UjVDv6GKQ2);
    for (ODXeIgLRV = (274 - 274); UjVDv6GKQ2 > ODXeIgLRV; ODXeIgLRV++) {
        scanf ("%s %lf", lK7d0rLUlI5, &e8gP0X[ODXeIgLRV]);
        if (!('m' != lK7d0rLUlI5[(891 - 891)])) {
            wUiSjymZNt0[lwXRJZ] = e8gP0X[ODXeIgLRV];
            lwXRJZ = lwXRJZ + (395 - 394);
        }
        else {
            z4uMIJmwH[KHYBh3cMt7] = e8gP0X[ODXeIgLRV];
            KHYBh3cMt7 = KHYBh3cMt7 +(284 - 283);
        }
    }
    for (BOC6At = (515 - 514); BOC6At < lwXRJZ; BOC6At = BOC6At +(822 - 821)) {
        for (tKaf8I6LFWGN = (962 - 962); lwXRJZ - BOC6At > tKaf8I6LFWGN; tKaf8I6LFWGN = tKaf8I6LFWGN + (868 - 867)) {
            if (wUiSjymZNt0[tKaf8I6LFWGN + (593 - 592)] < wUiSjymZNt0[tKaf8I6LFWGN]) {
                qpJD9Oe0 = wUiSjymZNt0[tKaf8I6LFWGN];
                wUiSjymZNt0[tKaf8I6LFWGN] = wUiSjymZNt0[tKaf8I6LFWGN + (541 - 540)];
                wUiSjymZNt0[tKaf8I6LFWGN + 1] = qpJD9Oe0;
            }
        }
    }
    for (mprxnN7g = (303 - 303); mprxnN7g < lwXRJZ; mprxnN7g = mprxnN7g + 1) {
        printf ("%.2lf ", wUiSjymZNt0[mprxnN7g]);
    }
    for (KuHs6mBh7dq = 1; KHYBh3cMt7 > KuHs6mBh7dq; KuHs6mBh7dq = KuHs6mBh7dq +1) {
        for (v5XIDaol = 0; KHYBh3cMt7 -KuHs6mBh7dq > v5XIDaol; v5XIDaol = v5XIDaol + 1) {
            if (z4uMIJmwH[v5XIDaol + 1] > z4uMIJmwH[v5XIDaol]) {
                qpJD9Oe0 = z4uMIJmwH[v5XIDaol];
                z4uMIJmwH[v5XIDaol] = z4uMIJmwH[v5XIDaol + 1];
                z4uMIJmwH[v5XIDaol + 1] = qpJD9Oe0;
            }
        }
    }
    for (ZuON3ISV = 0; ZuON3ISV < KHYBh3cMt7 -1; ZuON3ISV = ZuON3ISV +1) {
        printf ("%.2lf ", z4uMIJmwH[ZuON3ISV]);
    }
    printf ("%.2lf", z4uMIJmwH[KHYBh3cMt7 -1]);
    return 0;
}

